// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_preIF.h"

VL_INLINE_OPT void VMain_preIF___nba_sequent__TOP__Main__cpucore__pIF__0(VMain_preIF* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_preIF___nba_sequent__TOP__Main__cpucore__pIF__0\n"); );
    // Body
    vlSelf->__Vdly__pc = vlSelf->__PVT__pc;
    vlSelf->__Vdly__pc = ((IData)(vlSelf->__PVT__reset)
                           ? 0x1c000000U : ((IData)(vlSelf->__PVT__br_taken)
                                             ? vlSelf->__PVT__br_target
                                             : vlSelf->__PVT__snpc));
    vlSelf->__PVT__pc = vlSelf->__Vdly__pc;
    vlSelf->__PVT__snpc = ((IData)(4U) + vlSelf->__PVT__pc);
    vlSelf->__PVT__tofs_bits_pc = vlSelf->__PVT__pc;
    vlSelf->__PVT__inst_sram_addr = vlSelf->__PVT__pc;
}

VL_INLINE_OPT void VMain_preIF___nba_sequent__TOP__Main__cpucore__pIF__1(VMain_preIF* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_preIF___nba_sequent__TOP__Main__cpucore__pIF__1\n"); );
    // Body
    vlSelf->__PVT__tofs_valid = (1U & (~ (IData)(vlSelf->__PVT__reset)));
    vlSelf->__PVT__inst_sram_en = (1U & (~ (IData)(vlSelf->__PVT__reset)));
}
