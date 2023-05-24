// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMain.h for the primary calling header

#ifndef VERILATED_VMAIN_WB_STAGE_H_
#define VERILATED_VMAIN_WB_STAGE_H_  // guard

#include "verilated.h"

class VMain__Syms;

class VMain_WB_stage final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__ws_valid,0,0);
    VL_IN8(__PVT__ws_bits_rf_waddr,4,0);
    VL_IN8(__PVT__ws_bits_dpi_c_is_break,0,0);
    VL_OUT8(__PVT__torf_rf_waddr,4,0);
    VL_OUT8(__PVT__torf_valid,0,0);
    VL_OUT8(__PVT__torf_dpi_c_is_break,0,0);
    VL_IN(__PVT__ws_bits_rf_wdata,31,0);
    VL_IN(__PVT__ws_bits_dpi_c_inst,31,0);
    VL_IN(__PVT__ws_bits_dpi_c_next_pc,31,0);
    VL_OUT(__PVT__torf_rf_wdata,31,0);
    VL_OUT(__PVT__torf_dpi_c_inst,31,0);
    VL_OUT(__PVT__torf_dpi_c_next_pc,31,0);

    // INTERNAL VARIABLES
    VMain__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMain_WB_stage(VMain__Syms* symsp, const char* v__name);
    ~VMain_WB_stage();
    VL_UNCOPYABLE(VMain_WB_stage);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
