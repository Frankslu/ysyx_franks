// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_Exec.h"

void VMain_Exec____Vdpiimwrap_inst_exec_once_TOP__Main__cpucore__ID__reg___inst_exec_once(CData/*7:0*/ valid, IData/*31:0*/ inst, IData/*31:0*/ pc);

VL_ATTR_COLD void VMain_Exec___stl_sequent__TOP__Main__cpucore__ID__reg___inst_exec_once__0(VMain_Exec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VMain_Exec___stl_sequent__TOP__Main__cpucore__ID__reg___inst_exec_once__0\n"); );
    // Body
    VMain_Exec____Vdpiimwrap_inst_exec_once_TOP__Main__cpucore__ID__reg___inst_exec_once(
                                                                                VL_EXTEND_II(8,1, (IData)(vlSelf->__PVT__valid)), vlSelf->__PVT__inst, vlSelf->__PVT__pc);
}

VL_ATTR_COLD void VMain_Exec___ctor_var_reset(VMain_Exec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VMain_Exec___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst = VL_RAND_RESET_I(32);
}
