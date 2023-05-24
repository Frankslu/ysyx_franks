// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMain.h for the primary calling header

#ifndef VERILATED_VMAIN_D_MEM_H_
#define VERILATED_VMAIN_D_MEM_H_  // guard

#include "verilated.h"

class VMain__Syms;

class VMain_d_mem final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__en,0,0);
    VL_IN8(__PVT__wr,0,0);
    VL_IN8(__PVT__wstrb,3,0);
    VL_IN(__PVT__addr,31,0);
    VL_IN(__PVT__wdata,31,0);
    VL_OUT(__PVT__rdata,31,0);
    IData/*31:0*/ __Vtask_vaddr_write__0__rdata;
    IData/*31:0*/ __Vtask_vaddr_read__1__rdata;

    // INTERNAL VARIABLES
    VMain__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMain_d_mem(VMain__Syms* symsp, const char* v__name);
    ~VMain_d_mem();
    VL_UNCOPYABLE(VMain_d_mem);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
