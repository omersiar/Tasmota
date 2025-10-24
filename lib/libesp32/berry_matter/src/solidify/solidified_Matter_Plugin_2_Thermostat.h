/* Solidification of Matter_Plugin_2_Thermostat.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"
// compact class 'Matter_Plugin_Thermostat' ktab size: 33, total: 49 (saved 128 bytes)
static const bvalue be_ktab_class_Matter_Plugin_Thermostat[33] = {
  /* K0   */  be_nested_str_weak(matter),
  /* K1   */  be_nested_str_weak(TLV),
  /* K2   */  be_nested_str_weak(cluster),
  /* K3   */  be_nested_str_weak(attribute),
  /* K4   */  be_const_int(0),
  /* K5   */  be_nested_str_weak(set_or_nil),
  /* K6   */  be_nested_str_weak(I2),
  /* K7   */  be_nested_str_weak(shadow_value),
  /* K8   */  be_nested_str_weak(set),
  /* K9   */  be_nested_str_weak(shadow_thermostat_settemp),
  /* K10  */  be_nested_str_weak(U1),
  /* K11  */  be_nested_str_weak(shadow_thermostat_mode),
  /* K12  */  be_nested_str_weak(read_attribute),
  /* K13  */  be_nested_str_weak(attribute_updated),
  /* K14  */  be_nested_str_weak(tasmota),
  /* K15  */  be_nested_str_weak(cmd),
  /* K16  */  be_nested_str_weak(THERMOSTATMODESET_X200),
  /* K17  */  be_nested_str_weak(THERMOSTATMODESET_X201),
  /* K18  */  be_const_real_hex(0x42C80000),
  /* K19  */  be_nested_str_weak(TEMPTARGETSET_X20),
  /* K20  */  be_nested_str_weak(init),
  /* K21  */  be_nested_str_weak(update_shadow_lazy),
  /* K22  */  be_nested_str_weak(int),
  /* K23  */  be_nested_str_weak(set_thermostat_targettemp),
  /* K24  */  be_nested_str_weak(status),
  /* K25  */  be_nested_str_weak(CONSTRAINT_ERROR),
  /* K26  */  be_nested_str_weak(set_thermostat_mode),
  /* K27  */  be_nested_str_weak(BRIDGE),
  /* K28  */  be_nested_str_weak(temp_unit),
  /* K29  */  be_nested_str_weak(TEMP_F),
  /* K30  */  be_const_real_hex(0x3FE66666),
  /* K31  */  be_nested_str_weak(get_option),
  /* K32  */  be_const_int(1),
};


extern const bclass be_class_Matter_Plugin_Thermostat;

/********************************************************************
** Solidified function: read_attribute
********************************************************************/
be_local_closure(class_Matter_Plugin_Thermostat_read_attribute,   /* name */
  be_nested_proto(
    12,                          /* nstack */
    4,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Plugin_Thermostat,     /* shared constants */
    be_str_weak(read_attribute),
    &be_const_str_solidified,
    ( &(const binstruction[50]) {  /* code */
      0xB8120000,  //  0000  GETNGBL	R4	K0
      0x88100901,  //  0001  GETMBR	R4	R4	K1
      0x88140502,  //  0002  GETMBR	R5	R2	K2
      0x88180503,  //  0003  GETMBR	R6	R2	K3
      0x541E0200,  //  0004  LDINT	R7	513
      0x1C1C0A07,  //  0005  EQ	R7	R5	R7
      0x781E0021,  //  0006  JMPF	R7	#0029
      0x1C1C0D04,  //  0007  EQ	R7	R6	K4
      0x781E0005,  //  0008  JMPF	R7	#000F
      0x8C1C0705,  //  0009  GETMET	R7	R3	K5
      0x88240906,  //  000A  GETMBR	R9	R4	K6
      0x88280107,  //  000B  GETMBR	R10	R0	K7
      0x7C1C0600,  //  000C  CALL	R7	3
      0x80040E00,  //  000D  RET	1	R7
      0x70020019,  //  000E  JMP		#0029
      0x541E0011,  //  000F  LDINT	R7	18
      0x1C1C0C07,  //  0010  EQ	R7	R6	R7
      0x781E0005,  //  0011  JMPF	R7	#0018
      0x8C1C0708,  //  0012  GETMET	R7	R3	K8
      0x88240906,  //  0013  GETMBR	R9	R4	K6
      0x88280109,  //  0014  GETMBR	R10	R0	K9
      0x7C1C0600,  //  0015  CALL	R7	3
      0x80040E00,  //  0016  RET	1	R7
      0x70020010,  //  0017  JMP		#0029
      0x541E001B,  //  0018  LDINT	R7	28
      0x1C1C0C07,  //  0019  EQ	R7	R6	R7
      0x781E0005,  //  001A  JMPF	R7	#0021
      0x8C1C0708,  //  001B  GETMET	R7	R3	K8
      0x8824090A,  //  001C  GETMBR	R9	R4	K10
      0x8828010B,  //  001D  GETMBR	R10	R0	K11
      0x7C1C0600,  //  001E  CALL	R7	3
      0x80040E00,  //  001F  RET	1	R7
      0x70020007,  //  0020  JMP		#0029
      0x541E001D,  //  0021  LDINT	R7	30
      0x1C1C0C07,  //  0022  EQ	R7	R6	R7
      0x781E0004,  //  0023  JMPF	R7	#0029
      0x8C1C0708,  //  0024  GETMET	R7	R3	K8
      0x8824090A,  //  0025  GETMBR	R9	R4	K10
      0x8828010B,  //  0026  GETMBR	R10	R0	K11
      0x7C1C0600,  //  0027  CALL	R7	3
      0x80040E00,  //  0028  RET	1	R7
      0x601C0003,  //  0029  GETGBL	R7	G3
      0x5C200000,  //  002A  MOVE	R8	R0
      0x7C1C0200,  //  002B  CALL	R7	1
      0x8C1C0F0C,  //  002C  GETMET	R7	R7	K12
      0x5C240200,  //  002D  MOVE	R9	R1
      0x5C280400,  //  002E  MOVE	R10	R2
      0x5C2C0600,  //  002F  MOVE	R11	R3
      0x7C1C0800,  //  0030  CALL	R7	4
      0x80040E00,  //  0031  RET	1	R7
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: set_thermostat_mode
********************************************************************/
be_local_closure(class_Matter_Plugin_Thermostat_set_thermostat_mode,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Plugin_Thermostat,     /* shared constants */
    be_str_weak(set_thermostat_mode),
    &be_const_str_solidified,
    ( &(const binstruction[38]) {  /* code */
      0x60080009,  //  0000  GETGBL	R2	G9
      0x5C0C0200,  //  0001  MOVE	R3	R1
      0x7C080200,  //  0002  CALL	R2	1
      0x140C0504,  //  0003  LT	R3	R2	K4
      0x780E0000,  //  0004  JMPF	R3	#0006
      0x58080004,  //  0005  LDCONST	R2	K4
      0x880C010B,  //  0006  GETMBR	R3	R0	K11
      0x200C0403,  //  0007  NE	R3	R2	R3
      0x780E001B,  //  0008  JMPF	R3	#0025
      0x8C0C010D,  //  0009  GETMET	R3	R0	K13
      0x54160200,  //  000A  LDINT	R5	513
      0x541A001B,  //  000B  LDINT	R6	28
      0x7C0C0600,  //  000C  CALL	R3	3
      0x8C0C010D,  //  000D  GETMET	R3	R0	K13
      0x54160200,  //  000E  LDINT	R5	513
      0x541A001D,  //  000F  LDINT	R6	30
      0x7C0C0600,  //  0010  CALL	R3	3
      0x600C0009,  //  0011  GETGBL	R3	G9
      0x5C100200,  //  0012  MOVE	R4	R1
      0x7C0C0200,  //  0013  CALL	R3	1
      0x90021603,  //  0014  SETMBR	R0	K11	R3
      0x880C010B,  //  0015  GETMBR	R3	R0	K11
      0x1C0C0704,  //  0016  EQ	R3	R3	K4
      0x780E0004,  //  0017  JMPF	R3	#001D
      0xB80E1C00,  //  0018  GETNGBL	R3	K14
      0x8C0C070F,  //  0019  GETMET	R3	R3	K15
      0x58140010,  //  001A  LDCONST	R5	K16
      0x7C0C0400,  //  001B  CALL	R3	2
      0x70020007,  //  001C  JMP		#0025
      0x880C010B,  //  001D  GETMBR	R3	R0	K11
      0x54120003,  //  001E  LDINT	R4	4
      0x1C0C0604,  //  001F  EQ	R3	R3	R4
      0x780E0003,  //  0020  JMPF	R3	#0025
      0xB80E1C00,  //  0021  GETNGBL	R3	K14
      0x8C0C070F,  //  0022  GETMET	R3	R3	K15
      0x58140011,  //  0023  LDCONST	R5	K17
      0x7C0C0400,  //  0024  CALL	R3	2
      0x80000000,  //  0025  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: <lambda>
********************************************************************/
be_local_closure(class_Matter_Plugin_Thermostat__X3Clambda_X3E,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    8,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Plugin_Thermostat,     /* shared constants */
    be_str_weak(_X3Clambda_X3E),
    &be_const_str_solidified,
    ( &(const binstruction[ 4]) {  /* code */
      0x60040008,  //  0000  GETGBL	R1	G8
      0x5C080000,  //  0001  MOVE	R2	R0
      0x7C040200,  //  0002  CALL	R1	1
      0x80040200,  //  0003  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: value_changed
********************************************************************/
be_local_closure(class_Matter_Plugin_Thermostat_value_changed,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Plugin_Thermostat,     /* shared constants */
    be_str_weak(value_changed),
    &be_const_str_solidified,
    ( &(const binstruction[ 5]) {  /* code */
      0x8C04010D,  //  0000  GETMET	R1	R0	K13
      0x540E0200,  //  0001  LDINT	R3	513
      0x58100004,  //  0002  LDCONST	R4	K4
      0x7C040600,  //  0003  CALL	R1	3
      0x80000000,  //  0004  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: set_thermostat_targettemp
********************************************************************/
be_local_closure(class_Matter_Plugin_Thermostat_set_thermostat_targettemp,   /* name */
  be_nested_proto(
    8,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Plugin_Thermostat,     /* shared constants */
    be_str_weak(set_thermostat_targettemp),
    &be_const_str_solidified,
    ( &(const binstruction[24]) {  /* code */
      0x60080009,  //  0000  GETGBL	R2	G9
      0x5C0C0200,  //  0001  MOVE	R3	R1
      0x7C080200,  //  0002  CALL	R2	1
      0x880C0109,  //  0003  GETMBR	R3	R0	K9
      0x200C0403,  //  0004  NE	R3	R2	R3
      0x780E0010,  //  0005  JMPF	R3	#0017
      0x8C0C010D,  //  0006  GETMET	R3	R0	K13
      0x54160200,  //  0007  LDINT	R5	513
      0x541A0011,  //  0008  LDINT	R6	18
      0x7C0C0600,  //  0009  CALL	R3	3
      0x600C0009,  //  000A  GETGBL	R3	G9
      0x5C100400,  //  000B  MOVE	R4	R2
      0x7C0C0200,  //  000C  CALL	R3	1
      0x90021203,  //  000D  SETMBR	R0	K9	R3
      0x880C0109,  //  000E  GETMBR	R3	R0	K9
      0x0C0C0712,  //  000F  DIV	R3	R3	K18
      0xB8121C00,  //  0010  GETNGBL	R4	K14
      0x8C10090F,  //  0011  GETMET	R4	R4	K15
      0x60180008,  //  0012  GETGBL	R6	G8
      0x5C1C0600,  //  0013  MOVE	R7	R3
      0x7C180200,  //  0014  CALL	R6	1
      0x001A2606,  //  0015  ADD	R6	K19	R6
      0x7C100400,  //  0016  CALL	R4	2
      0x80000000,  //  0017  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(class_Matter_Plugin_Thermostat_init,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    4,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Plugin_Thermostat,     /* shared constants */
    be_str_weak(init),
    &be_const_str_solidified,
    ( &(const binstruction[12]) {  /* code */
      0x60100003,  //  0000  GETGBL	R4	G3
      0x5C140000,  //  0001  MOVE	R5	R0
      0x7C100200,  //  0002  CALL	R4	1
      0x8C100914,  //  0003  GETMET	R4	R4	K20
      0x5C180200,  //  0004  MOVE	R6	R1
      0x5C1C0400,  //  0005  MOVE	R7	R2
      0x5C200600,  //  0006  MOVE	R8	R3
      0x7C100800,  //  0007  CALL	R4	4
      0x541202BB,  //  0008  LDINT	R4	700
      0x90021204,  //  0009  SETMBR	R0	K9	R4
      0x90021704,  //  000A  SETMBR	R0	K11	K4
      0x80000000,  //  000B  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: write_attribute
********************************************************************/
be_local_closure(class_Matter_Plugin_Thermostat_write_attribute,   /* name */
  be_nested_proto(
    10,                          /* nstack */
    4,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Plugin_Thermostat,     /* shared constants */
    be_str_weak(write_attribute),
    &be_const_str_solidified,
    ( &(const binstruction[50]) {  /* code */
      0xB8120000,  //  0000  GETNGBL	R4	K0
      0x88100901,  //  0001  GETMBR	R4	R4	K1
      0x88140502,  //  0002  GETMBR	R5	R2	K2
      0x88180503,  //  0003  GETMBR	R6	R2	K3
      0x541E0200,  //  0004  LDINT	R7	513
      0x1C1C0A07,  //  0005  EQ	R7	R5	R7
      0x781E0028,  //  0006  JMPF	R7	#0030
      0x8C1C0115,  //  0007  GETMET	R7	R0	K21
      0x7C1C0200,  //  0008  CALL	R7	1
      0x541E0011,  //  0009  LDINT	R7	18
      0x1C1C0C07,  //  000A  EQ	R7	R6	R7
      0x781E0010,  //  000B  JMPF	R7	#001D
      0x601C0004,  //  000C  GETGBL	R7	G4
      0x5C200600,  //  000D  MOVE	R8	R3
      0x7C1C0200,  //  000E  CALL	R7	1
      0x1C1C0F16,  //  000F  EQ	R7	R7	K22
      0x781E0005,  //  0010  JMPF	R7	#0017
      0x8C1C0117,  //  0011  GETMET	R7	R0	K23
      0x5C240600,  //  0012  MOVE	R9	R3
      0x7C1C0400,  //  0013  CALL	R7	2
      0x501C0200,  //  0014  LDBOOL	R7	1	0
      0x80040E00,  //  0015  RET	1	R7
      0x70020004,  //  0016  JMP		#001C
      0xB81E0000,  //  0017  GETNGBL	R7	K0
      0x881C0F19,  //  0018  GETMBR	R7	R7	K25
      0x900A3007,  //  0019  SETMBR	R2	K24	R7
      0x501C0000,  //  001A  LDBOOL	R7	0	0
      0x80040E00,  //  001B  RET	1	R7
      0x70020012,  //  001C  JMP		#0030
      0x541E001B,  //  001D  LDINT	R7	28
      0x1C1C0C07,  //  001E  EQ	R7	R6	R7
      0x781E000F,  //  001F  JMPF	R7	#0030
      0x601C0004,  //  0020  GETGBL	R7	G4
      0x5C200600,  //  0021  MOVE	R8	R3
      0x7C1C0200,  //  0022  CALL	R7	1
      0x1C1C0F16,  //  0023  EQ	R7	R7	K22
      0x781E0005,  //  0024  JMPF	R7	#002B
      0x8C1C011A,  //  0025  GETMET	R7	R0	K26
      0x5C240600,  //  0026  MOVE	R9	R3
      0x7C1C0400,  //  0027  CALL	R7	2
      0x501C0200,  //  0028  LDBOOL	R7	1	0
      0x80040E00,  //  0029  RET	1	R7
      0x70020004,  //  002A  JMP		#0030
      0xB81E0000,  //  002B  GETNGBL	R7	K0
      0x881C0F19,  //  002C  GETMBR	R7	R7	K25
      0x900A3007,  //  002D  SETMBR	R2	K24	R7
      0x501C0000,  //  002E  LDBOOL	R7	0	0
      0x80040E00,  //  002F  RET	1	R7
      0x4C1C0000,  //  0030  LDNIL	R7
      0x80040E00,  //  0031  RET	1	R7
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: pre_value
********************************************************************/
be_local_closure(class_Matter_Plugin_Thermostat_pre_value,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Plugin_Thermostat,     /* shared constants */
    be_str_weak(pre_value),
    &be_const_str_solidified,
    ( &(const binstruction[42]) {  /* code */
      0x8808011B,  //  0000  GETMBR	R2	R0	K27
      0x780A0012,  //  0001  JMPF	R2	#0015
      0x8808011C,  //  0002  GETMBR	R2	R0	K28
      0x880C011D,  //  0003  GETMBR	R3	R0	K29
      0x1C080403,  //  0004  EQ	R2	R2	R3
      0x780A0003,  //  0005  JMPF	R2	#000A
      0x540A001F,  //  0006  LDINT	R2	32
      0x04080202,  //  0007  SUB	R2	R1	R2
      0x0C08051E,  //  0008  DIV	R2	R2	K30
      0x5C040400,  //  0009  MOVE	R1	R2
      0x4C080000,  //  000A  LDNIL	R2
      0x20080202,  //  000B  NE	R2	R1	R2
      0x780A0004,  //  000C  JMPF	R2	#0012
      0x60080009,  //  000D  GETGBL	R2	G9
      0x540E0063,  //  000E  LDINT	R3	100
      0x080C0203,  //  000F  MUL	R3	R1	R3
      0x7C080200,  //  0010  CALL	R2	1
      0x70020000,  //  0011  JMP		#0013
      0x4C080000,  //  0012  LDNIL	R2
      0x80040400,  //  0013  RET	1	R2
      0x70020013,  //  0014  JMP		#0029
      0xB80A1C00,  //  0015  GETNGBL	R2	K14
      0x8C08051F,  //  0016  GETMET	R2	R2	K31
      0x54120007,  //  0017  LDINT	R4	8
      0x7C080400,  //  0018  CALL	R2	2
      0x1C080520,  //  0019  EQ	R2	R2	K32
      0x780A0003,  //  001A  JMPF	R2	#001F
      0x540A001F,  //  001B  LDINT	R2	32
      0x04080202,  //  001C  SUB	R2	R1	R2
      0x0C08051E,  //  001D  DIV	R2	R2	K30
      0x5C040400,  //  001E  MOVE	R1	R2
      0x4C080000,  //  001F  LDNIL	R2
      0x20080202,  //  0020  NE	R2	R1	R2
      0x780A0004,  //  0021  JMPF	R2	#0027
      0x60080009,  //  0022  GETGBL	R2	G9
      0x540E0063,  //  0023  LDINT	R3	100
      0x080C0203,  //  0024  MUL	R3	R1	R3
      0x7C080200,  //  0025  CALL	R2	1
      0x70020000,  //  0026  JMP		#0028
      0x4C080000,  //  0027  LDNIL	R2
      0x80040400,  //  0028  RET	1	R2
      0x80000000,  //  0029  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Matter_Plugin_Thermostat
********************************************************************/
extern const bclass be_class_Matter_Plugin_Sensor;
be_local_class(Matter_Plugin_Thermostat,
    2,
    &be_class_Matter_Plugin_Sensor,
    be_nested_map(20,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(ARG, -1), be_nested_str_weak(filter) },
        { be_const_key_weak(DISPLAY_NAME, 17), be_nested_str_weak(Thermostat) },
        { be_const_key_weak(read_attribute, -1), be_const_closure(class_Matter_Plugin_Thermostat_read_attribute_closure) },
        { be_const_key_weak(JSON_NAME, 11), be_nested_str_weak(Temperature) },
        { be_const_key_weak(ARG_TYPE, -1), be_const_static_closure(class_Matter_Plugin_Thermostat__X3Clambda_X3E_closure) },
        { be_const_key_weak(set_thermostat_mode, 18), be_const_closure(class_Matter_Plugin_Thermostat_set_thermostat_mode_closure) },
        { be_const_key_weak(TYPE, -1), be_nested_str_weak(thermostat) },
        { be_const_key_weak(shadow_thermostat_mode, -1), be_const_var(1) },
        { be_const_key_weak(pre_value, 13), be_const_closure(class_Matter_Plugin_Thermostat_pre_value_closure) },
        { be_const_key_weak(set_thermostat_targettemp, 6), be_const_closure(class_Matter_Plugin_Thermostat_set_thermostat_targettemp_closure) },
        { be_const_key_weak(TYPES, 12), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(1,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(769, -1), be_const_int(9) },
    }))    ) } )) },
        { be_const_key_weak(write_attribute, -1), be_const_closure(class_Matter_Plugin_Thermostat_write_attribute_closure) },
        { be_const_key_weak(shadow_thermostat_settemp, -1), be_const_var(0) },
        { be_const_key_weak(UPDATE_TIME, -1), be_const_int(3000) },
        { be_const_key_weak(CLUSTERS, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(6,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(5, -1), be_const_bytes_instance(000000010002000300040005FFF8FFF9FFFAFFFBFFFCFFFD) },
        { be_const_key_int(3, -1), be_const_bytes_instance(00000001FFF8FFF9FFFAFFFBFFFCFFFD) },
        { be_const_key_int(57, 1), be_const_bytes_instance(00030005000A000F00110012FFF8FFF9FFFAFFFBFFFCFFFD) },
        { be_const_key_int(513, 2), be_const_bytes_instance(00000012001C001EFFF8FFF9FFFAFFFBFFFCFFFD) },
        { be_const_key_int(4, -1), be_const_bytes_instance(0000FFF8FFF9FFFAFFFBFFFCFFFD) },
        { be_const_key_int(29, 0), be_const_bytes_instance(0000000100020003FFF8FFF9FFFAFFFBFFFCFFFD) },
    }))    ) } )) },
        { be_const_key_weak(init, 3), be_const_closure(class_Matter_Plugin_Thermostat_init_closure) },
        { be_const_key_weak(BRIDGE, 8), be_const_bool(0) },
        { be_const_key_weak(value_changed, -1), be_const_closure(class_Matter_Plugin_Thermostat_value_changed_closure) },
        { be_const_key_weak(ARG_HINT, -1), be_nested_str_weak(Temp_X20Filter) },
        { be_const_key_weak(UPDATE_COMMANDS, 0), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(1,
    ( (struct bvalue*) &(const bvalue[]) {
        be_nested_str_weak(SetpointRaiseLower),
    }))    ) } )) },
    })),
    be_str_weak(Matter_Plugin_Thermostat)
);
/********************************************************************/
/* End of solidification */
