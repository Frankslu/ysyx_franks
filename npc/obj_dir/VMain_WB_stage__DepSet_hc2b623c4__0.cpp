// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_WB_stage.h"

VL_INLINE_OPT void VMain_WB_stage___nba_sequent__TOP__Main__cpucore__WB__0(VMain_WB_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_WB_stage___nba_sequent__TOP__Main__cpucore__WB__0\n"); );
    // Body
    vlSelf->__PVT__torf_pc = vlSelf->__PVT__ws_bits_pc;
}

VL_INLINE_OPT void VMain_WB_stage___nba_sequent__TOP__Main__cpucore__WB__1(VMain_WB_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_WB_stage___nba_sequent__TOP__Main__cpucore__WB__1\n"); );
    // Body
    vlSelf->__PVT__torf_valid = vlSelf->__PVT__ws_valid;
}

VL_INLINE_OPT void VMain_WB_stage___nba_comb__TOP__Main__cpucore__WB__0(VMain_WB_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_WB_stage___nba_comb__TOP__Main__cpucore__WB__0\n"); );
    // Body
    vlSelf->__PVT__torf_inst = vlSelf->__PVT__ws_bits_inst;
    vlSelf->__PVT__torf_rf_waddr = vlSelf->__PVT__ws_bits_rf_waddr;
    vlSelf->__PVT__torf_is_break = vlSelf->__PVT__ws_bits_is_break;
}

VL_INLINE_OPT void VMain_WB_stage___nba_comb__TOP__Main__cpucore__WB__1(VMain_WB_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_WB_stage___nba_comb__TOP__Main__cpucore__WB__1\n"); );
    // Body
    vlSelf->__PVT__torf_rf_wdata = vlSelf->__PVT__ws_bits_rf_wdata;
}
