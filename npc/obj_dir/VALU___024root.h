// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VALU.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"

class VALU__Syms;

class VALU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_alu_op,4,0);
    CData/*0:0*/ ALU__DOT__add_sub;
    CData/*0:0*/ __VactContinue;
    VL_IN(io_src1,31,0);
    VL_IN(io_src2,31,0);
    VL_OUT(io_res,31,0);
    IData/*31:0*/ ALU__DOT__or_res;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    QData/*32:0*/ ALU__DOT__add_res;
    QData/*63:0*/ ALU__DOT__mul_pre;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VALU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VALU___024root(VALU__Syms* symsp, const char* v__name);
    ~VALU___024root();
    VL_UNCOPYABLE(VALU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
