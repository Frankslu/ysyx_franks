// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMain.h for the primary calling header

#ifndef VERILATED_VMAIN_EXEC_H_
#define VERILATED_VMAIN_EXEC_H_  // guard

#include "verilated.h"

class VMain__Syms;

class VMain_Exec final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__valid,0,0);
    VL_IN(__PVT__pc,31,0);
    VL_IN(__PVT__inst,31,0);

    // INTERNAL VARIABLES
    VMain__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMain_Exec(VMain__Syms* symsp, const char* v__name);
    ~VMain_Exec();
    VL_UNCOPYABLE(VMain_Exec);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
