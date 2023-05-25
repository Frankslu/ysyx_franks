// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_ID_stage.h"

VL_INLINE_OPT void VMain_ID_stage___ico_sequent__TOP__Main__cpucore__ID__1(VMain_ID_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_ID_stage___ico_sequent__TOP__Main__cpucore__ID__1\n"); );
    // Body
    vlSelf->__PVT__toes_valid = vlSelf->__PVT__ds_valid;
}

VL_INLINE_OPT void VMain_ID_stage___nba_comb__TOP__Main__cpucore__ID__1(VMain_ID_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_ID_stage___nba_comb__TOP__Main__cpucore__ID__1\n"); );
    // Body
    vlSelf->__PVT__toes_bits_dpi_c_next_pc = vlSelf->__PVT__ds_bits_next_pc;
}
