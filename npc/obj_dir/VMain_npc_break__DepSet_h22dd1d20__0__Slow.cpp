// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_npc_break.h"

void VMain_npc_break____Vdpiimwrap_npc_break_TOP__Main__cpucore__ID__reg___npc_brk(CData/*7:0*/ is_break);

VL_ATTR_COLD void VMain_npc_break___stl_sequent__TOP__Main__cpucore__ID__reg___npc_brk__0(VMain_npc_break* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VMain_npc_break___stl_sequent__TOP__Main__cpucore__ID__reg___npc_brk__0\n"); );
    // Body
    VMain_npc_break____Vdpiimwrap_npc_break_TOP__Main__cpucore__ID__reg___npc_brk(
                                                                                VL_EXTEND_II(8,1, (IData)(vlSelf->__PVT__is_break)));
}

VL_ATTR_COLD void VMain_npc_break___ctor_var_reset(VMain_npc_break* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VMain_npc_break___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__is_break = VL_RAND_RESET_I(1);
}
