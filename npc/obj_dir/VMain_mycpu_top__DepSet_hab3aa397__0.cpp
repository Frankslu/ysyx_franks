// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_mycpu_top.h"

VL_INLINE_OPT void VMain_mycpu_top___nba_sequent__TOP__Main__cpucore__0(VMain_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMain_mycpu_top___nba_sequent__TOP__Main__cpucore__0\n"); );
    // Body
    vlSelf->__PVT__pIF_reset = vlSelf->__PVT__reset;
}
