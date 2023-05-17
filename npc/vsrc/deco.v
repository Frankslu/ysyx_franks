module deco(
  input         clock,
  input         reset,
  input  [31:0] in, // @[src/src/cpucore/Unit/decoder.scala 12:16]
  output [15:0] out // @[src/src/cpucore/Unit/decoder.scala 13:17]
);
  wire [31:0] out_invInputs = ~in; // @[src/main/scala/chisel3/util/pla.scala 78:21]
  wire  out_andMatrixInput_0 = out_invInputs[15]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  out_andMatrixInput_1 = out_invInputs[16]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  out_andMatrixInput_2 = out_invInputs[17]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  out_andMatrixInput_3 = in[20]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire  out_andMatrixInput_4 = out_invInputs[21]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  out_andMatrixInput_5 = out_invInputs[22]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  out_andMatrixInput_6 = out_invInputs[23]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  out_andMatrixInput_7 = out_invInputs[24]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  out_andMatrixInput_8 = out_invInputs[25]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  out_andMatrixInput_9 = out_invInputs[26]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  out_andMatrixInput_10 = out_invInputs[27]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  out_andMatrixInput_11 = out_invInputs[28]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  out_andMatrixInput_12 = out_invInputs[29]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  out_andMatrixInput_13 = out_invInputs[30]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  out_andMatrixInput_14 = out_invInputs[31]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire [6:0] out_lo = {out_andMatrixInput_8,out_andMatrixInput_9,out_andMatrixInput_10,out_andMatrixInput_11,
    out_andMatrixInput_12,out_andMatrixInput_13,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire [14:0] _out_T = {out_andMatrixInput_0,out_andMatrixInput_1,out_andMatrixInput_2,out_andMatrixInput_3,
    out_andMatrixInput_4,out_andMatrixInput_5,out_andMatrixInput_6,out_andMatrixInput_7,out_lo}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_1 = &_out_T; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  out_andMatrixInput_3_1 = out_invInputs[18]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire [7:0] out_lo_1 = {out_andMatrixInput_7,out_andMatrixInput_8,out_andMatrixInput_9,out_andMatrixInput_10,
    out_andMatrixInput_11,out_andMatrixInput_12,out_andMatrixInput_13,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire [15:0] _out_T_2 = {out_andMatrixInput_0,out_andMatrixInput_1,out_andMatrixInput_2,out_andMatrixInput_3_1,
    out_andMatrixInput_3,out_andMatrixInput_4,out_andMatrixInput_5,out_andMatrixInput_6,out_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_3 = &_out_T_2; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  out_andMatrixInput_2_2 = out_invInputs[19]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire [14:0] _out_T_4 = {out_andMatrixInput_0,out_andMatrixInput_2,out_andMatrixInput_2_2,out_andMatrixInput_3,
    out_andMatrixInput_4,out_andMatrixInput_5,out_andMatrixInput_6,out_andMatrixInput_7,out_lo}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_5 = &_out_T_4; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [15:0] _out_T_6 = {out_andMatrixInput_0,out_andMatrixInput_1,out_andMatrixInput_3_1,out_andMatrixInput_2_2,
    out_andMatrixInput_3,out_andMatrixInput_4,out_andMatrixInput_5,out_andMatrixInput_6,out_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_7 = &_out_T_6; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [15:0] _out_T_8 = {out_andMatrixInput_0,out_andMatrixInput_2,out_andMatrixInput_3_1,out_andMatrixInput_2_2,
    out_andMatrixInput_3,out_andMatrixInput_4,out_andMatrixInput_5,out_andMatrixInput_6,out_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_9 = &_out_T_8; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  out_andMatrixInput_1_5 = in[17]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [15:0] _out_T_10 = {out_andMatrixInput_1,out_andMatrixInput_1_5,out_andMatrixInput_3_1,out_andMatrixInput_2_2,
    out_andMatrixInput_3,out_andMatrixInput_4,out_andMatrixInput_5,out_andMatrixInput_6,out_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_11 = &_out_T_10; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  out_andMatrixInput_2_6 = in[18]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [14:0] _out_T_12 = {out_andMatrixInput_0,out_andMatrixInput_2,out_andMatrixInput_2_6,out_andMatrixInput_3,
    out_andMatrixInput_4,out_andMatrixInput_5,out_andMatrixInput_6,out_andMatrixInput_7,out_lo}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_13 = &_out_T_12; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [14:0] _out_T_14 = {out_andMatrixInput_1,out_andMatrixInput_2,out_andMatrixInput_2_6,out_andMatrixInput_3,
    out_andMatrixInput_4,out_andMatrixInput_5,out_andMatrixInput_6,out_andMatrixInput_7,out_lo}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_15 = &_out_T_14; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  out_andMatrixInput_0_8 = in[15]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [16:0] _out_T_16 = {out_andMatrixInput_0_8,out_andMatrixInput_1,out_andMatrixInput_2,out_andMatrixInput_2_6,
    out_andMatrixInput_2_2,out_andMatrixInput_3,out_andMatrixInput_4,out_andMatrixInput_5,out_andMatrixInput_6,out_lo_1}
    ; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_17 = &_out_T_16; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  out_andMatrixInput_0_9 = in[16]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [14:0] _out_T_18 = {out_andMatrixInput_0_9,out_andMatrixInput_2_6,out_andMatrixInput_2_2,out_andMatrixInput_3,
    out_andMatrixInput_4,out_andMatrixInput_5,out_andMatrixInput_6,out_andMatrixInput_7,out_lo}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_19 = &_out_T_18; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [15:0] _out_T_20 = {out_andMatrixInput_0,out_andMatrixInput_0_9,out_andMatrixInput_2_6,out_andMatrixInput_2_2,
    out_andMatrixInput_3,out_andMatrixInput_4,out_andMatrixInput_5,out_andMatrixInput_6,out_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_21 = &_out_T_20; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [15:0] _out_T_22 = {out_andMatrixInput_0_9,out_andMatrixInput_1_5,out_andMatrixInput_2_6,out_andMatrixInput_2_2,
    out_andMatrixInput_3,out_andMatrixInput_4,out_andMatrixInput_5,out_andMatrixInput_6,out_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_23 = &_out_T_22; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  out_andMatrixInput_3_12 = in[19]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [15:0] _out_T_24 = {out_andMatrixInput_0,out_andMatrixInput_1,out_andMatrixInput_2,out_andMatrixInput_3_12,
    out_andMatrixInput_3,out_andMatrixInput_4,out_andMatrixInput_5,out_andMatrixInput_6,out_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_25 = &_out_T_24; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [15:0] _out_T_26 = {out_andMatrixInput_0,out_andMatrixInput_2,out_andMatrixInput_2_6,out_andMatrixInput_3_12,
    out_andMatrixInput_3,out_andMatrixInput_4,out_andMatrixInput_5,out_andMatrixInput_6,out_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_27 = &_out_T_26; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [15:0] _out_T_28 = {out_andMatrixInput_1,out_andMatrixInput_2,out_andMatrixInput_2_6,out_andMatrixInput_3_12,
    out_andMatrixInput_3,out_andMatrixInput_4,out_andMatrixInput_5,out_andMatrixInput_6,out_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_29 = &_out_T_28; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [16:0] _out_T_30 = {out_andMatrixInput_0,out_andMatrixInput_0_9,out_andMatrixInput_2,out_andMatrixInput_2_6,
    out_andMatrixInput_3_12,out_andMatrixInput_3,out_andMatrixInput_4,out_andMatrixInput_5,out_andMatrixInput_6,out_lo_1
    }; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_31 = &_out_T_30; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  out_andMatrixInput_3_16 = out_invInputs[20]; // @[src/main/scala/chisel3/util/pla.scala 91:29]
  wire  out_andMatrixInput_4_16 = in[21]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [14:0] _out_T_32 = {out_andMatrixInput_2,out_andMatrixInput_3_1,out_andMatrixInput_2_2,out_andMatrixInput_3_16,
    out_andMatrixInput_4_16,out_andMatrixInput_5,out_andMatrixInput_6,out_andMatrixInput_7,out_lo}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_33 = &_out_T_32; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [16:0] _out_T_34 = {out_andMatrixInput_0_8,out_andMatrixInput_1,out_andMatrixInput_2,out_andMatrixInput_3_1,
    out_andMatrixInput_2_2,out_andMatrixInput_3_16,out_andMatrixInput_4_16,out_andMatrixInput_5,out_andMatrixInput_6,
    out_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_35 = &_out_T_34; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [15:0] _out_T_36 = {out_andMatrixInput_0_9,out_andMatrixInput_2,out_andMatrixInput_3_1,out_andMatrixInput_2_2,
    out_andMatrixInput_3_16,out_andMatrixInput_4_16,out_andMatrixInput_5,out_andMatrixInput_6,out_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_37 = &_out_T_36; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [16:0] _out_T_38 = {out_andMatrixInput_0,out_andMatrixInput_0_9,out_andMatrixInput_2,out_andMatrixInput_3_1,
    out_andMatrixInput_2_2,out_andMatrixInput_3_16,out_andMatrixInput_4_16,out_andMatrixInput_5,out_andMatrixInput_6,
    out_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_39 = &_out_T_38; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [16:0] _out_T_40 = {out_andMatrixInput_0_8,out_andMatrixInput_0_9,out_andMatrixInput_2,out_andMatrixInput_3_1,
    out_andMatrixInput_2_2,out_andMatrixInput_3_16,out_andMatrixInput_4_16,out_andMatrixInput_5,out_andMatrixInput_6,
    out_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_41 = &_out_T_40; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [16:0] _out_T_42 = {out_andMatrixInput_0,out_andMatrixInput_1,out_andMatrixInput_1_5,out_andMatrixInput_3_1,
    out_andMatrixInput_3_12,out_andMatrixInput_3_16,out_andMatrixInput_4_16,out_andMatrixInput_5,out_andMatrixInput_6,
    out_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_43 = &_out_T_42; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  out_andMatrixInput_6_22 = in[22]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [15:0] _out_T_44 = {out_andMatrixInput_0_8,out_andMatrixInput_1,out_andMatrixInput_2,out_andMatrixInput_3_1,
    out_andMatrixInput_3_16,out_andMatrixInput_4,out_andMatrixInput_6_22,out_andMatrixInput_6,out_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_45 = &_out_T_44; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [15:0] _out_T_46 = {out_andMatrixInput_0_8,out_andMatrixInput_1,out_andMatrixInput_2,out_andMatrixInput_2_2,
    out_andMatrixInput_3_16,out_andMatrixInput_4,out_andMatrixInput_6_22,out_andMatrixInput_6,out_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_47 = &_out_T_46; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [16:0] _out_T_48 = {out_andMatrixInput_0_8,out_andMatrixInput_1,out_andMatrixInput_2,out_andMatrixInput_3_1,
    out_andMatrixInput_3_12,out_andMatrixInput_3_16,out_andMatrixInput_4,out_andMatrixInput_6_22,out_andMatrixInput_6,
    out_lo_1}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_49 = &_out_T_48; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  out_andMatrixInput_2_25 = in[25]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [8:0] _out_T_50 = {out_andMatrixInput_5,out_andMatrixInput_7,out_andMatrixInput_2_25,out_andMatrixInput_9,
    out_andMatrixInput_10,out_andMatrixInput_11,out_andMatrixInput_12,out_andMatrixInput_13,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_51 = &_out_T_50; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [8:0] _out_T_52 = {out_andMatrixInput_6,out_andMatrixInput_7,out_andMatrixInput_2_25,out_andMatrixInput_9,
    out_andMatrixInput_10,out_andMatrixInput_11,out_andMatrixInput_12,out_andMatrixInput_13,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_53 = &_out_T_52; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [8:0] _out_T_54 = {out_andMatrixInput_6_22,out_andMatrixInput_6,out_andMatrixInput_2_25,out_andMatrixInput_9,
    out_andMatrixInput_10,out_andMatrixInput_11,out_andMatrixInput_12,out_andMatrixInput_13,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_55 = &_out_T_54; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  out_andMatrixInput_1_28 = in[23]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [8:0] _out_T_56 = {out_andMatrixInput_5,out_andMatrixInput_1_28,out_andMatrixInput_2_25,out_andMatrixInput_9,
    out_andMatrixInput_10,out_andMatrixInput_11,out_andMatrixInput_12,out_andMatrixInput_13,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_57 = &_out_T_56; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [9:0] _out_T_58 = {out_andMatrixInput_5,out_andMatrixInput_1_28,out_andMatrixInput_7,out_andMatrixInput_2_25,
    out_andMatrixInput_9,out_andMatrixInput_10,out_andMatrixInput_11,out_andMatrixInput_12,out_andMatrixInput_13,
    out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_59 = &_out_T_58; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  out_andMatrixInput_1_30 = in[24]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [8:0] _out_T_60 = {out_andMatrixInput_6_22,out_andMatrixInput_1_30,out_andMatrixInput_2_25,out_andMatrixInput_9,
    out_andMatrixInput_10,out_andMatrixInput_11,out_andMatrixInput_12,out_andMatrixInput_13,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_61 = &_out_T_60; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [9:0] _out_T_62 = {out_andMatrixInput_6_22,out_andMatrixInput_6,out_andMatrixInput_1_30,out_andMatrixInput_2_25,
    out_andMatrixInput_9,out_andMatrixInput_10,out_andMatrixInput_11,out_andMatrixInput_12,out_andMatrixInput_13,
    out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_63 = &_out_T_62; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [8:0] _out_T_64 = {out_andMatrixInput_1_28,out_andMatrixInput_1_30,out_andMatrixInput_2_25,out_andMatrixInput_9,
    out_andMatrixInput_10,out_andMatrixInput_11,out_andMatrixInput_12,out_andMatrixInput_13,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_65 = &_out_T_64; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  out_andMatrixInput_1_33 = in[26]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire  out_andMatrixInput_2_33 = in[28]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [5:0] _out_T_66 = {out_andMatrixInput_8,out_andMatrixInput_1_33,out_andMatrixInput_2_33,out_andMatrixInput_12,
    out_andMatrixInput_13,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_67 = &_out_T_66; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [6:0] _out_T_68 = {out_andMatrixInput_8,out_andMatrixInput_1_33,out_andMatrixInput_10,out_andMatrixInput_2_33,
    out_andMatrixInput_12,out_andMatrixInput_13,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_69 = &_out_T_68; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  out_andMatrixInput_2_35 = in[27]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [6:0] _out_T_70 = {out_andMatrixInput_8,out_andMatrixInput_1_33,out_andMatrixInput_2_35,out_andMatrixInput_2_33,
    out_andMatrixInput_12,out_andMatrixInput_13,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_71 = &_out_T_70; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  out_andMatrixInput_5_36 = in[29]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [7:0] _out_T_72 = {out_andMatrixInput_6,out_andMatrixInput_7,out_andMatrixInput_9,out_andMatrixInput_2_35,
    out_andMatrixInput_11,out_andMatrixInput_5_36,out_andMatrixInput_13,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_73 = &_out_T_72; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [7:0] _out_T_74 = {out_andMatrixInput_5,out_andMatrixInput_8,out_andMatrixInput_9,out_andMatrixInput_2_35,
    out_andMatrixInput_11,out_andMatrixInput_5_36,out_andMatrixInput_13,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_75 = &_out_T_74; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [7:0] _out_T_76 = {out_andMatrixInput_6,out_andMatrixInput_8,out_andMatrixInput_9,out_andMatrixInput_2_35,
    out_andMatrixInput_11,out_andMatrixInput_5_36,out_andMatrixInput_13,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_77 = &_out_T_76; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [8:0] _out_T_78 = {out_andMatrixInput_5,out_andMatrixInput_7,out_andMatrixInput_8,out_andMatrixInput_9,
    out_andMatrixInput_2_35,out_andMatrixInput_11,out_andMatrixInput_5_36,out_andMatrixInput_13,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_79 = &_out_T_78; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [8:0] _out_T_80 = {out_andMatrixInput_6,out_andMatrixInput_7,out_andMatrixInput_8,out_andMatrixInput_9,
    out_andMatrixInput_2_35,out_andMatrixInput_11,out_andMatrixInput_5_36,out_andMatrixInput_13,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_81 = &_out_T_80; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [8:0] _out_T_82 = {out_andMatrixInput_6_22,out_andMatrixInput_6,out_andMatrixInput_8,out_andMatrixInput_9,
    out_andMatrixInput_2_35,out_andMatrixInput_11,out_andMatrixInput_5_36,out_andMatrixInput_13,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_83 = &_out_T_82; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [9:0] _out_T_84 = {out_andMatrixInput_6_22,out_andMatrixInput_6,out_andMatrixInput_7,out_andMatrixInput_8,
    out_andMatrixInput_9,out_andMatrixInput_2_35,out_andMatrixInput_11,out_andMatrixInput_5_36,out_andMatrixInput_13,
    out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_85 = &_out_T_84; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [8:0] _out_T_86 = {out_andMatrixInput_5,out_andMatrixInput_1_28,out_andMatrixInput_8,out_andMatrixInput_9,
    out_andMatrixInput_2_35,out_andMatrixInput_11,out_andMatrixInput_5_36,out_andMatrixInput_13,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_87 = &_out_T_86; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [8:0] _out_T_88 = {out_andMatrixInput_5,out_andMatrixInput_1_30,out_andMatrixInput_8,out_andMatrixInput_9,
    out_andMatrixInput_2_35,out_andMatrixInput_11,out_andMatrixInput_5_36,out_andMatrixInput_13,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_89 = &_out_T_88; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [8:0] _out_T_90 = {out_andMatrixInput_6,out_andMatrixInput_1_30,out_andMatrixInput_8,out_andMatrixInput_9,
    out_andMatrixInput_2_35,out_andMatrixInput_11,out_andMatrixInput_5_36,out_andMatrixInput_13,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_91 = &_out_T_90; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [9:0] _out_T_92 = {out_andMatrixInput_6_22,out_andMatrixInput_6,out_andMatrixInput_1_30,out_andMatrixInput_8,
    out_andMatrixInput_9,out_andMatrixInput_2_35,out_andMatrixInput_11,out_andMatrixInput_5_36,out_andMatrixInput_13,
    out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_93 = &_out_T_92; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [9:0] _out_T_94 = {out_andMatrixInput_5,out_andMatrixInput_1_28,out_andMatrixInput_1_30,out_andMatrixInput_8,
    out_andMatrixInput_9,out_andMatrixInput_2_35,out_andMatrixInput_11,out_andMatrixInput_5_36,out_andMatrixInput_13,
    out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_95 = &_out_T_94; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [8:0] _out_T_96 = {out_andMatrixInput_6,out_andMatrixInput_7,out_andMatrixInput_2_25,out_andMatrixInput_9,
    out_andMatrixInput_2_35,out_andMatrixInput_11,out_andMatrixInput_5_36,out_andMatrixInput_13,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_97 = &_out_T_96; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [9:0] _out_T_98 = {out_andMatrixInput_5,out_andMatrixInput_6,out_andMatrixInput_7,out_andMatrixInput_2_25,
    out_andMatrixInput_9,out_andMatrixInput_2_35,out_andMatrixInput_11,out_andMatrixInput_5_36,out_andMatrixInput_13,
    out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_99 = &_out_T_98; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire  out_andMatrixInput_3_50 = in[30]; // @[src/main/scala/chisel3/util/pla.scala 90:45]
  wire [4:0] _out_T_100 = {out_andMatrixInput_1_33,out_andMatrixInput_2_35,out_andMatrixInput_12,out_andMatrixInput_3_50
    ,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_101 = &_out_T_100; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [5:0] _out_T_102 = {out_andMatrixInput_1_33,out_andMatrixInput_2_35,out_andMatrixInput_11,out_andMatrixInput_12,
    out_andMatrixInput_3_50,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_103 = &_out_T_102; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [3:0] _out_T_104 = {out_andMatrixInput_2_33,out_andMatrixInput_12,out_andMatrixInput_3_50,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_105 = &_out_T_104; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [4:0] _out_T_106 = {out_andMatrixInput_10,out_andMatrixInput_2_33,out_andMatrixInput_12,out_andMatrixInput_3_50,
    out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_107 = &_out_T_106; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [4:0] _out_T_108 = {out_andMatrixInput_1_33,out_andMatrixInput_2_33,out_andMatrixInput_12,out_andMatrixInput_3_50
    ,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_109 = &_out_T_108; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [5:0] _out_T_110 = {out_andMatrixInput_1_33,out_andMatrixInput_10,out_andMatrixInput_2_33,out_andMatrixInput_12,
    out_andMatrixInput_3_50,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_111 = &_out_T_110; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [4:0] _out_T_112 = {out_andMatrixInput_2_35,out_andMatrixInput_2_33,out_andMatrixInput_12,out_andMatrixInput_3_50
    ,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_113 = &_out_T_112; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [3:0] _out_T_114 = {out_andMatrixInput_11,out_andMatrixInput_5_36,out_andMatrixInput_3_50,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_115 = &_out_T_114; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [4:0] _out_T_116 = {out_andMatrixInput_1_33,out_andMatrixInput_11,out_andMatrixInput_5_36,out_andMatrixInput_3_50
    ,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_117 = &_out_T_116; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [4:0] _out_T_118 = {out_andMatrixInput_2_35,out_andMatrixInput_11,out_andMatrixInput_5_36,out_andMatrixInput_3_50
    ,out_andMatrixInput_14}; // @[src/main/scala/chisel3/util/pla.scala 98:53]
  wire  _out_T_119 = &_out_T_118; // @[src/main/scala/chisel3/util/pla.scala 98:70]
  wire [7:0] out_orMatrixOutputs_lo = {_out_T_53,_out_T_57,_out_T_61,_out_T_67,_out_T_73,_out_T_79,_out_T_103,_out_T_111
    }; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire [16:0] _out_orMatrixOutputs_T = {_out_T_1,_out_T_5,_out_T_11,_out_T_13,_out_T_15,_out_T_19,_out_T_33,_out_T_45,
    _out_T_47,out_orMatrixOutputs_lo}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _out_orMatrixOutputs_T_1 = |_out_orMatrixOutputs_T; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [5:0] _out_orMatrixOutputs_T_2 = {_out_T_71,_out_T_85,_out_T_89,_out_T_99,_out_T_109,_out_T_117}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _out_orMatrixOutputs_T_3 = |_out_orMatrixOutputs_T_2; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [6:0] _out_orMatrixOutputs_T_4 = {_out_T_71,_out_T_87,_out_T_93,_out_T_99,_out_T_101,_out_T_113,_out_T_119}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _out_orMatrixOutputs_T_5 = |_out_orMatrixOutputs_T_4; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [4:0] _out_orMatrixOutputs_T_6 = {_out_T_81,_out_T_83,_out_T_95,_out_T_107,_out_T_119}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _out_orMatrixOutputs_T_7 = |_out_orMatrixOutputs_T_6; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [3:0] _out_orMatrixOutputs_T_8 = {_out_T_87,_out_T_91,_out_T_97,_out_T_107}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _out_orMatrixOutputs_T_9 = |_out_orMatrixOutputs_T_8; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [2:0] out_orMatrixOutputs_hi_5 = {_out_T_73,_out_T_75,_out_T_77}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire [4:0] _out_orMatrixOutputs_T_10 = {_out_T_73,_out_T_75,_out_T_77,_out_T_105,_out_T_115}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _out_orMatrixOutputs_T_11 = |_out_orMatrixOutputs_T_10; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire  _out_orMatrixOutputs_T_13 = |out_orMatrixOutputs_hi_5; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [6:0] out_orMatrixOutputs_lo_6 = {_out_T_43,_out_T_51,_out_T_53,_out_T_67,_out_T_73,_out_T_75,_out_T_77}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire [13:0] _out_orMatrixOutputs_T_14 = {_out_T_1,_out_T_5,_out_T_11,_out_T_13,_out_T_15,_out_T_19,_out_T_33,
    out_orMatrixOutputs_lo_6}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _out_orMatrixOutputs_T_15 = |_out_orMatrixOutputs_T_14; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [8:0] _out_orMatrixOutputs_T_16 = {_out_T_43,_out_T_45,_out_T_47,_out_T_51,_out_T_53,_out_T_73,_out_T_75,
    _out_T_77,_out_T_107}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _out_orMatrixOutputs_T_17 = |_out_orMatrixOutputs_T_16; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [4:0] _out_orMatrixOutputs_T_18 = {_out_T_43,_out_T_67,_out_T_101,_out_T_105,_out_T_115}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _out_orMatrixOutputs_T_19 = |_out_orMatrixOutputs_T_18; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [1:0] _out_orMatrixOutputs_T_20 = {_out_T_61,_out_T_65}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _out_orMatrixOutputs_T_21 = |_out_orMatrixOutputs_T_20; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [7:0] out_orMatrixOutputs_lo_9 = {_out_T_57,_out_T_63,_out_T_71,_out_T_73,_out_T_75,_out_T_77,_out_T_103,
    _out_T_111}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire [15:0] _out_orMatrixOutputs_T_22 = {_out_T_3,_out_T_7,_out_T_17,_out_T_21,_out_T_27,_out_T_37,_out_T_45,_out_T_51
    ,out_orMatrixOutputs_lo_9}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _out_orMatrixOutputs_T_23 = |_out_orMatrixOutputs_T_22; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [6:0] out_orMatrixOutputs_lo_10 = {_out_T_63,_out_T_71,_out_T_73,_out_T_75,_out_T_77,_out_T_103,_out_T_111}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire [13:0] _out_orMatrixOutputs_T_24 = {_out_T_9,_out_T_15,_out_T_23,_out_T_35,_out_T_39,_out_T_47,_out_T_59,
    out_orMatrixOutputs_lo_10}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _out_orMatrixOutputs_T_25 = |_out_orMatrixOutputs_T_24; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [7:0] _out_orMatrixOutputs_T_26 = {_out_T_11,_out_T_15,_out_T_25,_out_T_41,_out_T_49,_out_T_53,_out_T_55,
    _out_T_69}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _out_orMatrixOutputs_T_27 = |_out_orMatrixOutputs_T_26; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [6:0] _out_orMatrixOutputs_T_28 = {_out_T_19,_out_T_25,_out_T_29,_out_T_45,_out_T_47,_out_T_65,_out_T_69}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _out_orMatrixOutputs_T_29 = |_out_orMatrixOutputs_T_28; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [1:0] _out_orMatrixOutputs_T_30 = {_out_T_31,_out_T_33}; // @[src/main/scala/chisel3/util/pla.scala 114:19]
  wire  _out_orMatrixOutputs_T_31 = |_out_orMatrixOutputs_T_30; // @[src/main/scala/chisel3/util/pla.scala 114:36]
  wire [7:0] out_orMatrixOutputs_lo_13 = {_out_orMatrixOutputs_T_15,_out_orMatrixOutputs_T_13,_out_orMatrixOutputs_T_11,
    _out_orMatrixOutputs_T_9,_out_orMatrixOutputs_T_7,_out_orMatrixOutputs_T_5,_out_orMatrixOutputs_T_3,
    _out_orMatrixOutputs_T_1}; // @[src/main/scala/chisel3/util/pla.scala 102:36]
  wire [15:0] out_orMatrixOutputs = {_out_orMatrixOutputs_T_31,_out_orMatrixOutputs_T_29,_out_orMatrixOutputs_T_27,
    _out_orMatrixOutputs_T_25,_out_orMatrixOutputs_T_23,_out_orMatrixOutputs_T_21,_out_orMatrixOutputs_T_19,
    _out_orMatrixOutputs_T_17,out_orMatrixOutputs_lo_13}; // @[src/main/scala/chisel3/util/pla.scala 102:36]
  wire  _out_invMatrixOutputs_T_3 = ~out_orMatrixOutputs[2]; // @[src/main/scala/chisel3/util/pla.scala 123:40]
  wire  _out_invMatrixOutputs_T_7 = ~out_orMatrixOutputs[5]; // @[src/main/scala/chisel3/util/pla.scala 123:40]
  wire  _out_invMatrixOutputs_T_9 = ~out_orMatrixOutputs[6]; // @[src/main/scala/chisel3/util/pla.scala 123:40]
  wire  _out_invMatrixOutputs_T_15 = ~out_orMatrixOutputs[11]; // @[src/main/scala/chisel3/util/pla.scala 123:40]
  wire [7:0] out_invMatrixOutputs_lo = {out_orMatrixOutputs[7],_out_invMatrixOutputs_T_9,_out_invMatrixOutputs_T_7,
    out_orMatrixOutputs[4],out_orMatrixOutputs[3],_out_invMatrixOutputs_T_3,out_orMatrixOutputs[1],out_orMatrixOutputs[0
    ]}; // @[src/main/scala/chisel3/util/pla.scala 120:37]
  wire [7:0] out_invMatrixOutputs_hi = {out_orMatrixOutputs[15],out_orMatrixOutputs[14],out_orMatrixOutputs[13],
    out_orMatrixOutputs[12],_out_invMatrixOutputs_T_15,out_orMatrixOutputs[10],out_orMatrixOutputs[9],
    out_orMatrixOutputs[8]}; // @[src/main/scala/chisel3/util/pla.scala 120:37]
  assign out = {out_invMatrixOutputs_hi,out_invMatrixOutputs_lo}; // @[src/main/scala/chisel3/util/pla.scala 120:37]
endmodule
