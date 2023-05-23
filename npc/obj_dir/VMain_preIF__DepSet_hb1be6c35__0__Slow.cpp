// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_preIF.h"

VL_ATTR_COLD void VMain_preIF___eval_initial__TOP__Main__cpucore__pIF(VMain_preIF* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_preIF___eval_initial__TOP__Main__cpucore__pIF\n"); );
}

VL_ATTR_COLD void VMain_preIF___stl_sequent__TOP__Main__cpucore__pIF__0(VMain_preIF* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_preIF___stl_sequent__TOP__Main__cpucore__pIF__0\n"); );
    // Body
    vlSelf->__PVT__snpc = ((IData)(4U) + vlSelf->__PVT__pc);
    vlSelf->__PVT__tofs_bits_pc = vlSelf->__PVT__pc;
    vlSelf->__PVT__inst_sram_addr = vlSelf->__PVT__pc;
}

VL_ATTR_COLD void VMain_preIF___stl_sequent__TOP__Main__cpucore__pIF__1(VMain_preIF* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_preIF___stl_sequent__TOP__Main__cpucore__pIF__1\n"); );
    // Body
    vlSelf->__PVT__inst_sram_en = (1U & (~ (IData)(vlSelf->__PVT__reset)));
}

VL_ATTR_COLD void VMain_preIF___ctor_var_reset(VMain_preIF* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_preIF___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__br_taken = VL_RAND_RESET_I(1);
    vlSelf->__PVT__br_target = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_sram_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_sram_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tofs_bits_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__snpc = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__pc = VL_RAND_RESET_I(32);
}
