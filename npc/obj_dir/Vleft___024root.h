// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vleft.h for the primary calling header

#ifndef VERILATED_VLEFT___024ROOT_H_
#define VERILATED_VLEFT___024ROOT_H_  // guard

#include "verilated.h"

class Vleft__Syms;

class Vleft___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactContinue;
    VL_IN(a,31,0);
    VL_IN(b,31,0);
    VL_OUT(c,31,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vleft__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vleft___024root(Vleft__Syms* symsp, const char* v__name);
    ~Vleft___024root();
    VL_UNCOPYABLE(Vleft___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
