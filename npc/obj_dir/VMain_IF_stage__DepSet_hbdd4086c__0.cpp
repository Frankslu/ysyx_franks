// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_IF_stage.h"

VL_INLINE_OPT void VMain_IF_stage___ico_sequent__TOP__Main__cpucore__IF__0(VMain_IF_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_IF_stage___ico_sequent__TOP__Main__cpucore__IF__0\n"); );
    // Body
    vlSelf->__PVT__tods_bits_inst = vlSelf->__PVT__inst_sram_rdata;
}

VL_INLINE_OPT void VMain_IF_stage___nba_sequent__TOP__Main__cpucore__IF__0(VMain_IF_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_IF_stage___nba_sequent__TOP__Main__cpucore__IF__0\n"); );
    // Body
    vlSelf->__PVT__tods_bits_pc = vlSelf->__PVT__fs_bits_pc;
}

VL_INLINE_OPT void VMain_IF_stage___nba_sequent__TOP__Main__cpucore__IF__1(VMain_IF_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_IF_stage___nba_sequent__TOP__Main__cpucore__IF__1\n"); );
    // Body
    vlSelf->__PVT__tods_bits_inst = vlSelf->__PVT__inst_sram_rdata;
}
