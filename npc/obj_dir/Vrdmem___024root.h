// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrdmem.h for the primary calling header

#ifndef VERILATED_VRDMEM___024ROOT_H_
#define VERILATED_VRDMEM___024ROOT_H_  // guard

#include "verilated.h"

class Vrdmem__Syms;

class Vrdmem___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(mem_io_r_en,0,0);
    VL_IN8(mem_io_r_wr,0,0);
    VL_IN8(mem_io_r_wstrb,3,0);
    CData/*0:0*/ __VactContinue;
    VL_OUT(mem_io_w_rdata,31,0);
    VL_IN(mem_io_r_addr,31,0);
    VL_IN(mem_io_r_wdata,31,0);
    IData/*31:0*/ __Vtask_rdmem__DOT__mem__DOT__pmem_read__0__rdata;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vrdmem__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrdmem___024root(Vrdmem__Syms* symsp, const char* v__name);
    ~Vrdmem___024root();
    VL_UNCOPYABLE(Vrdmem___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
