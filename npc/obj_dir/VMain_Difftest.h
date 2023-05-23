// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMain.h for the primary calling header

#ifndef VERILATED_VMAIN_DIFFTEST_H_
#define VERILATED_VMAIN_DIFFTEST_H_  // guard

#include "verilated.h"

class VMain__Syms;

class VMain_Difftest final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN(__PVT__rf_0,31,0);
    VL_IN(__PVT__rf_1,31,0);
    VL_IN(__PVT__rf_2,31,0);
    VL_IN(__PVT__rf_3,31,0);
    VL_IN(__PVT__rf_4,31,0);
    VL_IN(__PVT__rf_5,31,0);
    VL_IN(__PVT__rf_6,31,0);
    VL_IN(__PVT__rf_7,31,0);
    VL_IN(__PVT__rf_8,31,0);
    VL_IN(__PVT__rf_9,31,0);
    VL_IN(__PVT__rf_10,31,0);
    VL_IN(__PVT__rf_11,31,0);
    VL_IN(__PVT__rf_12,31,0);
    VL_IN(__PVT__rf_13,31,0);
    VL_IN(__PVT__rf_14,31,0);
    VL_IN(__PVT__rf_15,31,0);
    VL_IN(__PVT__rf_16,31,0);
    VL_IN(__PVT__rf_17,31,0);
    VL_IN(__PVT__rf_18,31,0);
    VL_IN(__PVT__rf_19,31,0);
    VL_IN(__PVT__rf_20,31,0);
    VL_IN(__PVT__rf_21,31,0);
    VL_IN(__PVT__rf_22,31,0);
    VL_IN(__PVT__rf_23,31,0);
    VL_IN(__PVT__rf_24,31,0);
    VL_IN(__PVT__rf_25,31,0);
    VL_IN(__PVT__rf_26,31,0);
    VL_IN(__PVT__rf_27,31,0);
    VL_IN(__PVT__rf_28,31,0);
    VL_IN(__PVT__rf_29,31,0);
    VL_IN(__PVT__rf_30,31,0);
    VL_IN(__PVT__rf_31,31,0);
    VlUnpacked<IData/*31:0*/, 32> __PVT__regs;

    // INTERNAL VARIABLES
    VMain__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMain_Difftest(VMain__Syms* symsp, const char* v__name);
    ~VMain_Difftest();
    VL_UNCOPYABLE(VMain_Difftest);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
