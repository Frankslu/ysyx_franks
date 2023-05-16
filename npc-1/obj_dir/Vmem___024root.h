// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmem.h for the primary calling header

#ifndef VERILATED_VMEM___024ROOT_H_
#define VERILATED_VMEM___024ROOT_H_  // guard

#include "verilated.h"

class Vmem__Syms;

class Vmem___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_r_en,0,0);
    VL_IN8(io_r_wr,0,0);
    VL_IN8(io_r_wstrb,3,0);
    CData/*0:0*/ __VactContinue;
    VL_IN(io_r_addr,31,0);
    VL_IN(io_r_wdata,31,0);
    VL_OUT(io_w_rdata,31,0);
    IData/*31:0*/ mem__DOT__Memory_w_rdata;
    IData/*31:0*/ __Vtask_mem__DOT__Memory__DOT__pmem_read__0__rdata;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmem__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmem___024root(Vmem__Syms* symsp, const char* v__name);
    ~Vmem___024root();
    VL_UNCOPYABLE(Vmem___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
