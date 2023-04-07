// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VGCD.h for the primary calling header

#ifndef VERILATED_VGCD___024ROOT_H_
#define VERILATED_VGCD___024ROOT_H_  // guard

#include "verilated.h"

class VGCD__Syms;

class VGCD___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_loadingValues,0,0);
    VL_OUT8(io_outputValid,0,0);
    CData/*0:0*/ __Vtrigrprev__TOP__clock;
    CData/*0:0*/ __VactContinue;
    VL_IN16(io_value1,15,0);
    VL_IN16(io_value2,15,0);
    VL_OUT16(io_outputGCD,15,0);
    SData/*15:0*/ GCD__DOT__x;
    SData/*15:0*/ GCD__DOT__y;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VGCD__Syms* const vlSymsp;

    // CONSTRUCTORS
    VGCD___024root(VGCD__Syms* symsp, const char* v__name);
    ~VGCD___024root();
    VL_UNCOPYABLE(VGCD___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
