// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_Difftest.h"

void VMain_Difftest____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP__Main__cpucore__ID__reg___difftest(const VlUnpacked<IData/*31:0*/, 32> &regs);

VL_ATTR_COLD void VMain_Difftest___eval_initial__TOP__Main__cpucore__ID__reg___difftest(VMain_Difftest* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VMain_Difftest___eval_initial__TOP__Main__cpucore__ID__reg___difftest\n"); );
    // Body
    VMain_Difftest____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP__Main__cpucore__ID__reg___difftest(vlSelf->__PVT__regs);
}

VL_ATTR_COLD void VMain_Difftest___stl_sequent__TOP__Main__cpucore__ID__reg___difftest__0(VMain_Difftest* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VMain_Difftest___stl_sequent__TOP__Main__cpucore__ID__reg___difftest__0\n"); );
    // Body
    vlSelf->__PVT__regs[0U] = vlSelf->__PVT__rf_0;
}

VL_ATTR_COLD void VMain_Difftest___stl_sequent__TOP__Main__cpucore__ID__reg___difftest__1(VMain_Difftest* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VMain_Difftest___stl_sequent__TOP__Main__cpucore__ID__reg___difftest__1\n"); );
    // Body
    vlSelf->__PVT__regs[1U] = vlSelf->__PVT__rf_1;
    vlSelf->__PVT__regs[2U] = vlSelf->__PVT__rf_2;
    vlSelf->__PVT__regs[3U] = vlSelf->__PVT__rf_3;
    vlSelf->__PVT__regs[4U] = vlSelf->__PVT__rf_4;
    vlSelf->__PVT__regs[5U] = vlSelf->__PVT__rf_5;
    vlSelf->__PVT__regs[6U] = vlSelf->__PVT__rf_6;
    vlSelf->__PVT__regs[7U] = vlSelf->__PVT__rf_7;
    vlSelf->__PVT__regs[8U] = vlSelf->__PVT__rf_8;
    vlSelf->__PVT__regs[9U] = vlSelf->__PVT__rf_9;
    vlSelf->__PVT__regs[0xaU] = vlSelf->__PVT__rf_10;
    vlSelf->__PVT__regs[0xbU] = vlSelf->__PVT__rf_11;
    vlSelf->__PVT__regs[0xcU] = vlSelf->__PVT__rf_12;
    vlSelf->__PVT__regs[0xdU] = vlSelf->__PVT__rf_13;
    vlSelf->__PVT__regs[0xeU] = vlSelf->__PVT__rf_14;
    vlSelf->__PVT__regs[0xfU] = vlSelf->__PVT__rf_15;
    vlSelf->__PVT__regs[0x10U] = vlSelf->__PVT__rf_16;
    vlSelf->__PVT__regs[0x11U] = vlSelf->__PVT__rf_17;
    vlSelf->__PVT__regs[0x12U] = vlSelf->__PVT__rf_18;
    vlSelf->__PVT__regs[0x13U] = vlSelf->__PVT__rf_19;
    vlSelf->__PVT__regs[0x14U] = vlSelf->__PVT__rf_20;
    vlSelf->__PVT__regs[0x15U] = vlSelf->__PVT__rf_21;
    vlSelf->__PVT__regs[0x16U] = vlSelf->__PVT__rf_22;
    vlSelf->__PVT__regs[0x17U] = vlSelf->__PVT__rf_23;
    vlSelf->__PVT__regs[0x18U] = vlSelf->__PVT__rf_24;
    vlSelf->__PVT__regs[0x19U] = vlSelf->__PVT__rf_25;
    vlSelf->__PVT__regs[0x1aU] = vlSelf->__PVT__rf_26;
    vlSelf->__PVT__regs[0x1bU] = vlSelf->__PVT__rf_27;
    vlSelf->__PVT__regs[0x1cU] = vlSelf->__PVT__rf_28;
    vlSelf->__PVT__regs[0x1dU] = vlSelf->__PVT__rf_29;
    vlSelf->__PVT__regs[0x1eU] = vlSelf->__PVT__rf_30;
    vlSelf->__PVT__regs[0x1fU] = vlSelf->__PVT__rf_31;
}

VL_ATTR_COLD void VMain_Difftest___ctor_var_reset(VMain_Difftest* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VMain_Difftest___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__rf_0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_6 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_7 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_8 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_9 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_10 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_11 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_12 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_13 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_14 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_15 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_16 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_17 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_18 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_19 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_20 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_21 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_22 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_23 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_24 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_25 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_26 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_27 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_28 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_29 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_30 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_31 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
}
