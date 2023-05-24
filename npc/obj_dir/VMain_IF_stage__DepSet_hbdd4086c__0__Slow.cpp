// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_IF_stage.h"

VL_ATTR_COLD void VMain_IF_stage___stl_sequent__TOP__Main__cpucore__IF__0(VMain_IF_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_IF_stage___stl_sequent__TOP__Main__cpucore__IF__0\n"); );
    // Body
    vlSelf->__PVT__tods_bits_pc = vlSelf->__PVT__fs_bits_pc;
}

VL_ATTR_COLD void VMain_IF_stage___stl_sequent__TOP__Main__cpucore__IF__1(VMain_IF_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_IF_stage___stl_sequent__TOP__Main__cpucore__IF__1\n"); );
    // Body
    vlSelf->__PVT__tods_bits_inst = vlSelf->__PVT__inst_sram_rdata;
    vlSelf->__PVT__tods_valid = vlSelf->__PVT__fs_valid;
}

VL_ATTR_COLD void VMain_IF_stage___ctor_var_reset(VMain_IF_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_IF_stage___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__tods_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tods_bits_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tods_bits_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_sram_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fs_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fs_bits_pc = VL_RAND_RESET_I(32);
}
