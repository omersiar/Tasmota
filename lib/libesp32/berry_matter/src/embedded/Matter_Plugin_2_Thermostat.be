#
# Matter_Plugin_Thermostat.be - implements the behavior for native Tasmota Thermostat Device
# Native Tasmota Thermostat is not included with standart builds (requires #define USE_THERMOSTAT)
#
# Copyright (C) 2023  Stephan Hadinger & Theo Arends
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#

import matter

#@ solidify:Matter_Plugin_Thermostat,weak

class Matter_Plugin_Thermostat : Matter_Plugin_Sensor
  static var ARG  = "filter"                        # additional argument name (or empty if none)
  static var ARG_HINT = "Temp Filter"
  static var ARG_TYPE = / x -> str(x)
  static var TYPE = "thermostat"
  static var DISPLAY_NAME = "Thermostat"
  static var UPDATE_TIME = 3000
  static var JSON_NAME = "Temperature"              # Name of the sensor attribute in JSON payloads
  static var BRIDGE = false                 # set to true only for bridged devices (ESP8266 or OpenBK)

  static var CLUSTERS = matter.consolidate_clusters(_class, {
    0x0201: [0x0000, 0x0012, 0x001C, 0x001E]   # LocalTemperature, OccupiedHeatingSetpoint, SystemMode, ThermostatRunningMode
  })

  static var UPDATE_COMMANDS = matter.UC_LIST(_class, "SetpointRaiseLower")
  static var TYPES = { 0x0301: 9 }

  # Shadow values (°C * 100)
  var shadow_thermostat_settemp
  var shadow_thermostat_mode

  #############################################################
  # Constructor
  def init(device, endpoint, config)
    super(self).init(device, endpoint, config)
    self.shadow_thermostat_settemp = 700
    self.shadow_thermostat_mode = 0
  end

  #############################################################
  # Apply new values to Tasmota native thermostat
  def set_thermostat_mode(thermostat_mode)
    var thermostat_mode_int = int(thermostat_mode)
    if (thermostat_mode_int < 0) thermostat_mode_int = 0 end
    if thermostat_mode_int != self.shadow_thermostat_mode
      self.attribute_updated(0x0201, 0x001C)     # SystemMode
      self.attribute_updated(0x0201, 0x001E)     # ThermostatRunningMode
      self.shadow_thermostat_mode = int(thermostat_mode)
      if self.shadow_thermostat_mode == 0
        tasmota.cmd("THERMOSTATMODESET 0")
      elif self.shadow_thermostat_mode == 4
        tasmota.cmd("THERMOSTATMODESET 1")
      end
    end
  end

  # Apply new values to Tasmota native thermostat
  def set_thermostat_targettemp(thermostat_targettemp)
    var target_temp = int(thermostat_targettemp)
    # GUARD if (thermostat_targettemp < 700) thermostat_targettemp = 700 end
    if target_temp != self.shadow_thermostat_settemp
      self.attribute_updated(0x0201, 0x0012)     # SetTemperature
      self.shadow_thermostat_settemp = int(target_temp)
      var temp_c = self.shadow_thermostat_settemp / 100.0
      tasmota.cmd("TEMPTARGETSET " + str(temp_c))
    end
  end

  def pre_value(val)
    # TODO simplify
    if self.BRIDGE
      if self.temp_unit == self.TEMP_F          # Fahrenheit
        val = (val - 32) / 1.8
      end
      return val != nil ? int(val * 100) : nil
    else
      if tasmota.get_option(8) == 1         # Fahrenheit
        val = (val - 32) / 1.8
      end
      return val != nil ? int(val * 100) : nil
    end
  end

  #############################################################
  # Called when the value changed compared to shadow value
  #
  # This must be overriden.
  # This is where you call `self.attribute_updated(<cluster>, <attribute>)`
  def value_changed()
    self.attribute_updated(0x0201, 0x0000)     # LocalTemperature
  end

  # Controller write attributes
  #############################################################
  #############################################################
  # write attribute
  def write_attribute(session, ctx, write_data)
    var TLV = matter.TLV
    var cluster = ctx.cluster
    var attribute = ctx.attribute

    if cluster == 0x0201
      self.update_shadow_lazy()
      if attribute == 0x0012   # OccupiedHeatingSetpoint
        if type(write_data) == 'int'
          self.set_thermostat_targettemp(write_data)
          return true
        else
          ctx.status = matter.CONSTRAINT_ERROR
          return false
        end

      elif attribute == 0x001C # SystemMode
        if type(write_data) == 'int'
          self.set_thermostat_mode(write_data)
          return true
        else
          ctx.status = matter.CONSTRAINT_ERROR
          return false
        end
      end
    end
    return nil
  end

  #############################################################
  # read an attribute
  #
  def read_attribute(session, ctx, tlv_solo)
    var TLV = matter.TLV
    var cluster = ctx.cluster
    var attribute = ctx.attribute

    # ====================================================================================================
    if cluster == 0x0201              # ========== Thermostat ==========
      if attribute == 0x0000          # ---------- LocalTemperature ----------
        return tlv_solo.set_or_nil(TLV.I2, self.shadow_value)
      elif attribute == 0x0012        # ---------- OccupiedHeatingSetpoint ----------
        return tlv_solo.set(TLV.I2, self.shadow_thermostat_settemp)
      elif attribute == 0x001C        # ---------- SystemMode ----------
        return tlv_solo.set(TLV.U1, self.shadow_thermostat_mode)
      elif attribute == 0x001E        # ---------- ThermostatRunningMode ----------
        return tlv_solo.set(TLV.U1, self.shadow_thermostat_mode)
      end
    end

    return super(self).read_attribute(session, ctx, tlv_solo)
  end

end

matter.Plugin_Thermostat = Matter_Plugin_Thermostat