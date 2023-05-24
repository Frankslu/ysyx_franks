// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMain.h for the primary calling header

#ifndef VERILATED_VMAIN_IF_STAGE_H_
#define VERILATED_VMAIN_IF_STAGE_H_  // guard

#include "verilated.h"

class VMain__Syms;

class VMain_IF_stage final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(__PVT__tods_valid,0,0);
    VL_IN8(__PVT__fs_valid,0,0);
    VL_OUT(__PVT__tods_bits_pc,31,0);
    VL_OUT(__PVT__tods_bits_inst,31,0);
    VL_OUT(__PVT__tods_bits_next_pc,31,0);
    VL_IN(__PVT__inst_sram_rdata,31,0);
    VL_IN(__PVT__fs_bits_pc,31,0);
    VL_IN(__PVT__fs_bits_next_pc,31,0);

    // INTERNAL VARIABLES
    VMain__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMain_IF_stage(VMain__Syms* symsp, const char* v__name);
    ~VMain_IF_stage();
    VL_UNCOPYABLE(VMain_IF_stage);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
