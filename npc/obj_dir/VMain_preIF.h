// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMain.h for the primary calling header

#ifndef VERILATED_VMAIN_PREIF_H_
#define VERILATED_VMAIN_PREIF_H_  // guard

#include "verilated.h"

class VMain__Syms;

class VMain_preIF final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__br_taken,0,0);
    VL_OUT8(__PVT__inst_sram_en,0,0);
    VL_OUT8(__PVT__tofs_valid,0,0);
    CData/*0:0*/ __PVT__inst_sram_en_REG;
    CData/*0:0*/ __Vdly__inst_sram_en_REG;
    VL_IN(__PVT__br_target,31,0);
    VL_OUT(__PVT__inst_sram_addr,31,0);
    VL_OUT(__PVT__tofs_bits_pc,31,0);
    VL_OUT(__PVT__tofs_bits_next_pc,31,0);
    IData/*31:0*/ __PVT__pc;
    IData/*31:0*/ __PVT__snpc;
    IData/*31:0*/ __Vdly__pc;

    // INTERNAL VARIABLES
    VMain__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMain_preIF(VMain__Syms* symsp, const char* v__name);
    ~VMain_preIF();
    VL_UNCOPYABLE(VMain_preIF);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
