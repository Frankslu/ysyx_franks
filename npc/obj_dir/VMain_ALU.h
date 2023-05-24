// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMain.h for the primary calling header

#ifndef VERILATED_VMAIN_ALU_H_
#define VERILATED_VMAIN_ALU_H_  // guard

#include "verilated.h"

class VMain__Syms;

class VMain_ALU final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__io_alu_op,4,0);
        CData/*0:0*/ __PVT__op_add;
        CData/*0:0*/ __PVT__op_sub;
        CData/*0:0*/ __PVT__op_slt;
        CData/*0:0*/ __PVT__op_sltu;
        CData/*0:0*/ __PVT__op_and;
        CData/*0:0*/ __PVT__op_nor;
        CData/*0:0*/ __PVT__op_or;
        CData/*0:0*/ __PVT__op_xor;
        CData/*0:0*/ __PVT__op_sll;
        CData/*0:0*/ __PVT__op_srl;
        CData/*0:0*/ __PVT__op_sra;
        CData/*0:0*/ __PVT__op_lui;
        CData/*0:0*/ __PVT__op_mul;
        CData/*0:0*/ __PVT__op_mulh;
        CData/*0:0*/ __PVT__op_mulhu;
        CData/*0:0*/ __PVT__op_div;
        CData/*0:0*/ __PVT__op_mod;
        CData/*0:0*/ __PVT__op_divu;
        CData/*0:0*/ __PVT__op_modu;
        CData/*0:0*/ __PVT__add_sub;
        CData/*0:0*/ __PVT__slt_res;
        CData/*0:0*/ __PVT__sltu_res;
        CData/*0:0*/ __PVT___io_res_T;
        CData/*0:0*/ __PVT___io_res_T_1;
        VL_IN(__PVT__io_src1,31,0);
        VL_IN(__PVT__io_src2,31,0);
        VL_OUT(__PVT__io_res,31,0);
        IData/*31:0*/ __PVT___add_res_T;
        IData/*31:0*/ __PVT___add_res_T_1;
        IData/*31:0*/ __PVT__and_res;
        IData/*31:0*/ __PVT__or_res;
        IData/*31:0*/ __PVT__nor_res;
        IData/*31:0*/ __PVT__xor_res;
        IData/*31:0*/ __PVT___sr_T_3;
        IData/*31:0*/ __PVT__mul_res;
        IData/*31:0*/ __PVT__mulhu_res;
        IData/*31:0*/ __PVT__mulh_res;
        IData/*31:0*/ __PVT__divu_res;
        IData/*31:0*/ __PVT__modu_res;
        IData/*31:0*/ __PVT__mod_res;
        IData/*31:0*/ __PVT___io_res_T_2;
        IData/*31:0*/ __PVT___io_res_T_3;
        IData/*31:0*/ __PVT___io_res_T_4;
        IData/*31:0*/ __PVT__div_res;
        IData/*31:0*/ __PVT___io_res_T_5;
        IData/*31:0*/ __PVT___io_res_T_6;
        IData/*31:0*/ __PVT___io_res_T_7;
        IData/*31:0*/ __PVT___io_res_T_8;
        IData/*31:0*/ __PVT___io_res_T_9;
        QData/*32:0*/ __PVT___add_res_T_2;
        QData/*32:0*/ __PVT___GEN_0;
        QData/*32:0*/ __PVT__add_res;
        QData/*62:0*/ __PVT___GEN_1;
        QData/*62:0*/ __PVT__sll_res;
        QData/*63:0*/ __PVT__sr;
        QData/*63:0*/ __PVT__sr_res;
        QData/*63:0*/ __PVT__mul_pre;
        QData/*63:0*/ __PVT___mulh_res_T_2;
        QData/*32:0*/ __PVT___div_res_T_3;
        QData/*63:0*/ __PVT___io_res_T_10;
        QData/*63:0*/ __PVT___io_res_T_11;
        QData/*63:0*/ __PVT___io_res_T_12;
        QData/*63:0*/ __PVT___io_res_T_13;
    };
    struct {
        QData/*63:0*/ __PVT___io_res_T_14;
        QData/*63:0*/ __PVT___io_res_T_15;
        QData/*63:0*/ __PVT___io_res_T_16;
        QData/*63:0*/ __PVT___io_res_T_17;
        QData/*63:0*/ __PVT___io_res_T_18;
    };

    // INTERNAL VARIABLES
    VMain__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMain_ALU(VMain__Syms* symsp, const char* v__name);
    ~VMain_ALU();
    VL_UNCOPYABLE(VMain_ALU);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
