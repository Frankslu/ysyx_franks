// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP___024ROOT_H_
#define VERILATED_VMYCPU_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vmycpu_top__Syms;

class Vmycpu_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(resetn,0,0);
    VL_OUT8(inst_sram_we,0,0);
    VL_OUT8(data_sram_we,0,0);
    VL_OUT8(debug_wb_rf_we,3,0);
    VL_OUT8(debug_wb_rf_wnum,4,0);
    CData/*0:0*/ mycpu_top__DOT__res_from_mem;
    CData/*0:0*/ mycpu_top__DOT__inst_slli_w;
    CData/*0:0*/ mycpu_top__DOT__inst_srli_w;
    CData/*0:0*/ mycpu_top__DOT__inst_addi_w;
    CData/*0:0*/ mycpu_top__DOT__need_si20;
    CData/*0:0*/ mycpu_top__DOT__src2_is_4;
    CData/*4:0*/ mycpu_top__DOT__rf_raddr2;
    CData/*0:0*/ mycpu_top__DOT__rf_we;
    CData/*0:0*/ mycpu_top__DOT____VdfgTmp_h1c4a3e54__0;
    CData/*0:0*/ mycpu_top__DOT____VdfgTmp_h19962199__0;
    CData/*0:0*/ mycpu_top__DOT____VdfgTmp_h78773bd0__0;
    CData/*0:0*/ mycpu_top__DOT__u_alu__DOT__op_sub;
    CData/*0:0*/ mycpu_top__DOT__u_alu__DOT__op_slt;
    CData/*0:0*/ mycpu_top__DOT__u_alu__DOT__op_sltu;
    CData/*0:0*/ mycpu_top__DOT__u_alu__DOT__op_sra;
    CData/*0:0*/ mycpu_top__DOT__u_alu__DOT__adder_cin;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    VL_OUT(inst_sram_addr,31,0);
    VL_OUT(inst_sram_wdata,31,0);
    VL_IN(inst_sram_rdata,31,0);
    VL_OUT(data_sram_addr,31,0);
    VL_OUT(data_sram_wdata,31,0);
    VL_IN(data_sram_rdata,31,0);
    VL_OUT(debug_wb_pc,31,0);
    VL_OUT(debug_wb_rf_wdata,31,0);
    IData/*31:0*/ mycpu_top__DOT__nextpc;
    IData/*31:0*/ mycpu_top__DOT__pc;
    IData/*31:0*/ mycpu_top__DOT__jirl_offs;
    IData/*31:0*/ mycpu_top__DOT__rf_rdata1;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ mycpu_top__DOT__op_31_26_d;
    VlUnpacked<IData/*31:0*/, 32> mycpu_top__DOT__u_regfile__DOT__rf;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top___024root(Vmycpu_top__Syms* symsp, const char* v__name);
    ~Vmycpu_top___024root();
    VL_UNCOPYABLE(Vmycpu_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
