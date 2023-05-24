// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_EX_stage.h"

VL_INLINE_OPT void VMain_EX_stage___nba_sequent__TOP__Main__cpucore__EXE__0(VMain_EX_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_EX_stage___nba_sequent__TOP__Main__cpucore__EXE__0\n"); );
    // Body
    vlSelf->__PVT__toms_bits_pc = vlSelf->__PVT__es_bits_pc;
}

VL_INLINE_OPT void VMain_EX_stage___nba_sequent__TOP__Main__cpucore__EXE__1(VMain_EX_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_EX_stage___nba_sequent__TOP__Main__cpucore__EXE__1\n"); );
    // Body
    vlSelf->__PVT__toms_valid = vlSelf->__PVT__es_valid;
}
