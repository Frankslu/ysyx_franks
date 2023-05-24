// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMain.h for the primary calling header

#ifndef VERILATED_VMAIN_ID_STAGE_H_
#define VERILATED_VMAIN_ID_STAGE_H_  // guard

#include "verilated.h"

class VMain__Syms;
class VMain_regfile;


class VMain_ID_stage final : public VerilatedModule {
  public:
    // CELLS
    VMain_regfile* __PVT__reg_;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clock,0,0);
        VL_OUT8(__PVT__toes_valid,0,0);
        VL_OUT8(__PVT__toes_bits_alu_op,4,0);
        VL_OUT8(__PVT__toes_bits_rf_waddr,4,0);
        VL_OUT8(__PVT__toes_bits_rf_we,0,0);
        VL_OUT8(__PVT__toes_bits_mem_we,1,0);
        VL_OUT8(__PVT__toes_bits_inst_name,4,0);
        VL_OUT8(__PVT__toes_bits_dpi_c_is_break,0,0);
        VL_IN8(__PVT__ds_valid,0,0);
        VL_IN8(__PVT__torf_rf_we,0,0);
        VL_IN8(__PVT__torf_rf_waddr,4,0);
        VL_IN8(__PVT__torf_valid,0,0);
        VL_IN8(__PVT__torf_dpi_c_is_break,0,0);
        VL_OUT8(__PVT__br_taken,0,0);
        CData/*0:0*/ __PVT__reg___05Fclock;
        CData/*4:0*/ __PVT__reg___05Fio_raddr1;
        CData/*4:0*/ __PVT__reg___05Fio_raddr2;
        CData/*4:0*/ __PVT__reg___05Fio_waddr;
        CData/*0:0*/ __PVT__reg___05Fio_wen;
        CData/*0:0*/ __PVT__reg___05Fio_is_break;
        CData/*0:0*/ __PVT__reg___05Fio_valid;
        CData/*4:0*/ __PVT__rj;
        CData/*4:0*/ __PVT__rd;
        CData/*4:0*/ __PVT__rk;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_0;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_1;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_2;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_3;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_4;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_5;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_6;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_7;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_8;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_9;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_10;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_11;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_12;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_13;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_14;
        CData/*6:0*/ __PVT__decode_res_lo;
        CData/*0:0*/ __PVT___decode_res_T_1;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_3_1;
        CData/*7:0*/ __PVT__decode_res_lo_1;
        CData/*0:0*/ __PVT___decode_res_T_3;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_2_2;
        CData/*0:0*/ __PVT___decode_res_T_5;
        CData/*0:0*/ __PVT___decode_res_T_7;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_1_4;
        CData/*0:0*/ __PVT___decode_res_T_9;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_1_5;
        CData/*0:0*/ __PVT___decode_res_T_11;
        CData/*0:0*/ __PVT___decode_res_T_13;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_0_7;
        CData/*0:0*/ __PVT___decode_res_T_15;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_2_8;
        CData/*0:0*/ __PVT___decode_res_T_17;
        CData/*0:0*/ __PVT___decode_res_T_19;
        CData/*0:0*/ __PVT___decode_res_T_21;
        CData/*0:0*/ __PVT___decode_res_T_23;
        CData/*0:0*/ __PVT___decode_res_T_25;
        CData/*0:0*/ __PVT___decode_res_T_27;
        CData/*0:0*/ __PVT___decode_res_T_29;
        CData/*0:0*/ __PVT___decode_res_T_31;
        CData/*0:0*/ __PVT___decode_res_T_33;
    };
    struct {
        CData/*0:0*/ __PVT___decode_res_T_35;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_3_18;
        CData/*0:0*/ __PVT___decode_res_T_37;
        CData/*0:0*/ __PVT___decode_res_T_39;
        CData/*0:0*/ __PVT___decode_res_T_41;
        CData/*0:0*/ __PVT___decode_res_T_43;
        CData/*0:0*/ __PVT___decode_res_T_45;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_3_23;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_4_23;
        CData/*0:0*/ __PVT___decode_res_T_47;
        CData/*0:0*/ __PVT___decode_res_T_49;
        CData/*0:0*/ __PVT___decode_res_T_51;
        CData/*0:0*/ __PVT___decode_res_T_53;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_6_27;
        CData/*0:0*/ __PVT___decode_res_T_55;
        CData/*0:0*/ __PVT___decode_res_T_57;
        CData/*0:0*/ __PVT___decode_res_T_59;
        CData/*0:0*/ __PVT___decode_res_T_61;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_2_31;
        CData/*0:0*/ __PVT___decode_res_T_63;
        CData/*0:0*/ __PVT___decode_res_T_65;
        CData/*0:0*/ __PVT___decode_res_T_67;
        CData/*0:0*/ __PVT___decode_res_T_69;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_1_35;
        CData/*0:0*/ __PVT___decode_res_T_71;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_1_36;
        CData/*0:0*/ __PVT___decode_res_T_73;
        CData/*0:0*/ __PVT___decode_res_T_75;
        CData/*0:0*/ __PVT___decode_res_T_77;
        CData/*0:0*/ __PVT___decode_res_T_79;
        CData/*0:0*/ __PVT___decode_res_T_81;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_1_41;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_2_41;
        CData/*5:0*/ __PVT___decode_res_T_82;
        CData/*0:0*/ __PVT___decode_res_T_83;
        CData/*6:0*/ __PVT___decode_res_T_84;
        CData/*0:0*/ __PVT___decode_res_T_85;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_2_43;
        CData/*6:0*/ __PVT___decode_res_T_86;
        CData/*0:0*/ __PVT___decode_res_T_87;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_5_44;
        CData/*7:0*/ __PVT___decode_res_T_88;
        CData/*0:0*/ __PVT___decode_res_T_89;
        CData/*7:0*/ __PVT___decode_res_T_90;
        CData/*0:0*/ __PVT___decode_res_T_91;
        CData/*7:0*/ __PVT___decode_res_T_92;
        CData/*0:0*/ __PVT___decode_res_T_93;
        CData/*0:0*/ __PVT___decode_res_T_95;
        CData/*0:0*/ __PVT___decode_res_T_97;
        CData/*0:0*/ __PVT___decode_res_T_99;
        CData/*0:0*/ __PVT___decode_res_T_101;
        CData/*0:0*/ __PVT___decode_res_T_103;
        CData/*0:0*/ __PVT___decode_res_T_105;
        CData/*0:0*/ __PVT___decode_res_T_107;
        CData/*0:0*/ __PVT___decode_res_T_109;
        CData/*0:0*/ __PVT___decode_res_T_111;
        CData/*0:0*/ __PVT___decode_res_T_113;
        CData/*0:0*/ __PVT__decode_res_andMatrixInput_3_57;
        CData/*4:0*/ __PVT___decode_res_T_114;
        CData/*0:0*/ __PVT___decode_res_T_115;
        CData/*5:0*/ __PVT___decode_res_T_116;
        CData/*0:0*/ __PVT___decode_res_T_117;
        CData/*3:0*/ __PVT___decode_res_T_118;
        CData/*0:0*/ __PVT___decode_res_T_119;
    };
    struct {
        CData/*4:0*/ __PVT___decode_res_T_120;
        CData/*0:0*/ __PVT___decode_res_T_121;
        CData/*4:0*/ __PVT___decode_res_T_122;
        CData/*0:0*/ __PVT___decode_res_T_123;
        CData/*5:0*/ __PVT___decode_res_T_124;
        CData/*0:0*/ __PVT___decode_res_T_125;
        CData/*4:0*/ __PVT___decode_res_T_126;
        CData/*0:0*/ __PVT___decode_res_T_127;
        CData/*3:0*/ __PVT___decode_res_T_128;
        CData/*0:0*/ __PVT___decode_res_T_129;
        CData/*4:0*/ __PVT___decode_res_T_130;
        CData/*0:0*/ __PVT___decode_res_T_131;
        CData/*4:0*/ __PVT___decode_res_T_132;
        CData/*0:0*/ __PVT___decode_res_T_133;
        CData/*7:0*/ __PVT__decode_res_orMatrixOutputs_lo;
        CData/*0:0*/ __PVT___decode_res_orMatrixOutputs_T_1;
        CData/*6:0*/ __PVT___decode_res_orMatrixOutputs_T_2;
        CData/*0:0*/ __PVT___decode_res_orMatrixOutputs_T_3;
        CData/*6:0*/ __PVT___decode_res_orMatrixOutputs_T_4;
        CData/*0:0*/ __PVT___decode_res_orMatrixOutputs_T_5;
        CData/*4:0*/ __PVT___decode_res_orMatrixOutputs_T_6;
        CData/*0:0*/ __PVT___decode_res_orMatrixOutputs_T_7;
        CData/*3:0*/ __PVT___decode_res_orMatrixOutputs_T_8;
        CData/*0:0*/ __PVT___decode_res_orMatrixOutputs_T_9;
        CData/*2:0*/ __PVT__decode_res_orMatrixOutputs_hi_5;
        CData/*4:0*/ __PVT___decode_res_orMatrixOutputs_T_10;
        CData/*0:0*/ __PVT___decode_res_orMatrixOutputs_T_11;
        CData/*1:0*/ __PVT___decode_res_orMatrixOutputs_T_12;
        CData/*0:0*/ __PVT___decode_res_orMatrixOutputs_T_13;
        CData/*0:0*/ __PVT___decode_res_orMatrixOutputs_T_15;
        CData/*6:0*/ __PVT__decode_res_orMatrixOutputs_lo_6;
        CData/*0:0*/ __PVT___decode_res_orMatrixOutputs_T_17;
        CData/*0:0*/ __PVT___decode_res_orMatrixOutputs_T_19;
        CData/*4:0*/ __PVT___decode_res_orMatrixOutputs_T_20;
        CData/*0:0*/ __PVT___decode_res_orMatrixOutputs_T_21;
        CData/*1:0*/ __PVT___decode_res_orMatrixOutputs_T_22;
        CData/*0:0*/ __PVT___decode_res_orMatrixOutputs_T_23;
        CData/*7:0*/ __PVT__decode_res_orMatrixOutputs_lo_9;
        CData/*0:0*/ __PVT___decode_res_orMatrixOutputs_T_25;
        CData/*5:0*/ __PVT__decode_res_orMatrixOutputs_lo_10;
        CData/*0:0*/ __PVT___decode_res_orMatrixOutputs_T_27;
        CData/*5:0*/ __PVT___decode_res_orMatrixOutputs_T_28;
        CData/*0:0*/ __PVT___decode_res_orMatrixOutputs_T_29;
        CData/*0:0*/ __PVT___decode_res_orMatrixOutputs_T_31;
        CData/*0:0*/ __PVT___decode_res_orMatrixOutputs_T_32;
        CData/*7:0*/ __PVT__decode_res_orMatrixOutputs_lo_13;
        CData/*0:0*/ __PVT___decode_res_invMatrixOutputs_T_2;
        CData/*0:0*/ __PVT___decode_res_invMatrixOutputs_T_4;
        CData/*0:0*/ __PVT___decode_res_invMatrixOutputs_T_8;
        CData/*0:0*/ __PVT___decode_res_invMatrixOutputs_T_11;
        CData/*7:0*/ __PVT__decode_res_invMatrixOutputs_lo;
        CData/*3:0*/ __PVT__inst_type;
        CData/*1:0*/ __PVT__mem_we;
        CData/*4:0*/ __PVT__inst_name;
        CData/*0:0*/ __PVT___imm_T;
        CData/*0:0*/ __PVT___imm_T_1;
        CData/*0:0*/ __PVT___imm_T_2;
        CData/*0:0*/ __PVT___imm_T_3;
        CData/*0:0*/ __PVT___imm_T_4;
        CData/*0:0*/ __PVT___imm_T_5;
        CData/*0:0*/ __PVT__rk_or_rd;
        CData/*0:0*/ __PVT___rf_waddr_T;
        CData/*0:0*/ __PVT__rj_eq_rd;
        CData/*0:0*/ __PVT__slt_res;
    };
    struct {
        CData/*0:0*/ __PVT__sltu_res;
        CData/*0:0*/ __PVT___br_taken_T_4;
        CData/*0:0*/ __PVT___br_taken_T_5;
        CData/*0:0*/ __PVT___br_taken_T_7;
        CData/*0:0*/ __PVT___br_taken_T_8;
        CData/*0:0*/ __PVT___br_taken_T_11;
        CData/*0:0*/ __PVT___br_taken_T_12;
        CData/*0:0*/ __PVT___br_taken_T_14;
        CData/*0:0*/ __PVT___br_taken_T_15;
        CData/*0:0*/ __PVT___br_taken_T_18;
        CData/*0:0*/ __PVT___br_taken_T_19;
        CData/*0:0*/ __PVT___br_taken_T_21;
        CData/*0:0*/ __PVT___br_taken_T_22;
        CData/*0:0*/ __PVT___br_taken_T_24;
        CData/*0:0*/ __PVT___br_taken_T_25;
        CData/*0:0*/ __PVT__src1_is_pc;
        SData/*11:0*/ __PVT__imm12u;
        SData/*11:0*/ __PVT___imm12_sign_T;
        SData/*14:0*/ __PVT___decode_res_T;
        SData/*15:0*/ __PVT___decode_res_T_2;
        SData/*14:0*/ __PVT___decode_res_T_4;
        SData/*15:0*/ __PVT___decode_res_T_6;
        SData/*15:0*/ __PVT___decode_res_T_8;
        SData/*15:0*/ __PVT___decode_res_T_10;
        SData/*14:0*/ __PVT___decode_res_T_16;
        SData/*14:0*/ __PVT___decode_res_T_18;
        SData/*15:0*/ __PVT___decode_res_T_20;
        SData/*15:0*/ __PVT___decode_res_T_24;
        SData/*14:0*/ __PVT___decode_res_T_26;
        SData/*15:0*/ __PVT___decode_res_T_28;
        SData/*15:0*/ __PVT___decode_res_T_30;
        SData/*15:0*/ __PVT___decode_res_T_32;
        SData/*15:0*/ __PVT___decode_res_T_36;
        SData/*15:0*/ __PVT___decode_res_T_40;
        SData/*15:0*/ __PVT___decode_res_T_42;
        SData/*14:0*/ __PVT___decode_res_T_46;
        SData/*15:0*/ __PVT___decode_res_T_48;
        SData/*15:0*/ __PVT___decode_res_T_50;
        SData/*15:0*/ __PVT___decode_res_T_54;
        SData/*15:0*/ __PVT___decode_res_T_56;
        SData/*8:0*/ __PVT___decode_res_T_62;
        SData/*8:0*/ __PVT___decode_res_T_64;
        SData/*9:0*/ __PVT___decode_res_T_66;
        SData/*8:0*/ __PVT___decode_res_T_68;
        SData/*8:0*/ __PVT___decode_res_T_70;
        SData/*8:0*/ __PVT___decode_res_T_72;
        SData/*9:0*/ __PVT___decode_res_T_74;
        SData/*8:0*/ __PVT___decode_res_T_76;
        SData/*9:0*/ __PVT___decode_res_T_78;
        SData/*9:0*/ __PVT___decode_res_T_80;
        SData/*8:0*/ __PVT___decode_res_T_94;
        SData/*8:0*/ __PVT___decode_res_T_96;
        SData/*8:0*/ __PVT___decode_res_T_98;
        SData/*8:0*/ __PVT___decode_res_T_100;
        SData/*8:0*/ __PVT___decode_res_T_102;
        SData/*9:0*/ __PVT___decode_res_T_104;
        SData/*9:0*/ __PVT___decode_res_T_106;
        SData/*8:0*/ __PVT___decode_res_T_108;
        SData/*9:0*/ __PVT___decode_res_T_110;
        SData/*9:0*/ __PVT___decode_res_T_112;
        SData/*13:0*/ __PVT___decode_res_orMatrixOutputs_T_16;
        SData/*8:0*/ __PVT___decode_res_orMatrixOutputs_T_18;
        SData/*15:0*/ __PVT___decode_res_orMatrixOutputs_T_24;
        SData/*11:0*/ __PVT___decode_res_orMatrixOutputs_T_26;
    };
    struct {
        SData/*8:0*/ __PVT___decode_res_orMatrixOutputs_T_30;
        VL_OUT(__PVT__toes_bits_alu_src1,31,0);
        VL_OUT(__PVT__toes_bits_alu_src2,31,0);
        VL_OUT(__PVT__toes_bits_mem_wdata,31,0);
        VL_OUT(__PVT__toes_bits_dpi_c_inst,31,0);
        VL_OUT(__PVT__toes_bits_dpi_c_next_pc,31,0);
        VL_IN(__PVT__ds_bits_pc,31,0);
        VL_IN(__PVT__ds_bits_inst,31,0);
        VL_IN(__PVT__ds_bits_next_pc,31,0);
        VL_IN(__PVT__torf_rf_wdata,31,0);
        VL_IN(__PVT__torf_dpi_c_inst,31,0);
        VL_IN(__PVT__torf_dpi_c_next_pc,31,0);
        VL_OUT(__PVT__br_target,31,0);
        IData/*31:0*/ __PVT__reg___05Fio_rdata1;
        IData/*31:0*/ __PVT__reg___05Fio_rdata2;
        IData/*31:0*/ __PVT__reg___05Fio_wdata;
        IData/*31:0*/ __PVT__reg___05Fio_rf_pc;
        IData/*31:0*/ __PVT__reg___05Fio_inst;
        IData/*31:0*/ __PVT__imm12;
        IData/*31:0*/ __PVT__imm20;
        IData/*25:0*/ __PVT__imm26;
        IData/*31:0*/ __PVT__decode_res_invInputs;
        IData/*16:0*/ __PVT___decode_res_T_12;
        IData/*16:0*/ __PVT___decode_res_T_14;
        IData/*16:0*/ __PVT___decode_res_T_22;
        IData/*16:0*/ __PVT___decode_res_T_34;
        IData/*16:0*/ __PVT___decode_res_T_38;
        IData/*16:0*/ __PVT___decode_res_T_44;
        IData/*16:0*/ __PVT___decode_res_T_52;
        IData/*16:0*/ __PVT___decode_res_T_58;
        IData/*16:0*/ __PVT___decode_res_T_60;
        IData/*16:0*/ __PVT___decode_res_orMatrixOutputs_T;
        IData/*16:0*/ __PVT__decode_res_orMatrixOutputs;
        IData/*16:0*/ __PVT__decode_res_invMatrixOutputs;
        IData/*31:0*/ __PVT___imm_T_6;
        IData/*31:0*/ __PVT___imm_T_7;
        IData/*31:0*/ __PVT___imm_T_8;
        IData/*31:0*/ __PVT___imm_T_9;
        IData/*31:0*/ __PVT___imm_T_10;
        IData/*31:0*/ __PVT__imm;
        IData/*31:0*/ __PVT___br_target_T_1;
        IData/*31:0*/ __PVT___br_target_T_3;
        IData/*31:0*/ __PVT___br_target_T_5;
        IData/*31:0*/ __PVT___br_target_T_7;
        IData/*31:0*/ __PVT___br_target_T_9;
        QData/*32:0*/ __PVT___rj_sub_rd_T;
        QData/*32:0*/ __PVT__rj_sub_rd;
    };

    // INTERNAL VARIABLES
    VMain__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMain_ID_stage(VMain__Syms* symsp, const char* v__name);
    ~VMain_ID_stage();
    VL_UNCOPYABLE(VMain_ID_stage);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
