// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_Main.h"
#include "VMain__Syms.h"

VL_INLINE_OPT void VMain_Main___ico_sequent__TOP__Main__0(VMain_Main* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMain_Main___ico_sequent__TOP__Main__0\n"); );
    // Body
    vlSelf->__PVT__cpucore_clock = vlSelf->clock;
    vlSymsp->TOP__Main__cpucore.__PVT__clock = vlSelf->__PVT__cpucore_clock;
}

VL_INLINE_OPT void VMain_Main___nba_sequent__TOP__Main__0(VMain_Main* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMain_Main___nba_sequent__TOP__Main__0\n"); );
    // Body
    vlSelf->__Vdly__cpucore_reset_REG = vlSelf->__PVT__cpucore_reset_REG;
    vlSelf->__Vdly__cpucore_reset_REG = vlSelf->reset;
    vlSelf->__PVT__cpucore_reset_REG = vlSelf->__Vdly__cpucore_reset_REG;
    vlSelf->__PVT__cpucore_reset = vlSelf->__PVT__cpucore_reset_REG;
    vlSymsp->TOP__Main__cpucore.__PVT__reset = vlSelf->__PVT__cpucore_reset;
}

VL_INLINE_OPT void VMain_Main___nba_sequent__TOP__Main__1(VMain_Main* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMain_Main___nba_sequent__TOP__Main__1\n"); );
    // Body
    vlSelf->__PVT__cpucore_inst_sram_addr = vlSymsp->TOP__Main__cpucore.__PVT__inst_sram_addr;
    vlSelf->__PVT__iram_addr = vlSelf->__PVT__cpucore_inst_sram_addr;
    vlSymsp->TOP__Main__iram.__PVT__addr = vlSelf->__PVT__iram_addr;
}

VL_INLINE_OPT void VMain_Main___nba_sequent__TOP__Main__2(VMain_Main* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMain_Main___nba_sequent__TOP__Main__2\n"); );
    // Body
    vlSelf->__PVT__cpucore_inst_sram_en = vlSymsp->TOP__Main__cpucore.__PVT__inst_sram_en;
    vlSelf->__PVT__iram_en = vlSelf->__PVT__cpucore_inst_sram_en;
    vlSymsp->TOP__Main__iram.__PVT__en = vlSelf->__PVT__iram_en;
}

VL_INLINE_OPT void VMain_Main___nba_comb__TOP__Main__0(VMain_Main* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMain_Main___nba_comb__TOP__Main__0\n"); );
    // Body
    vlSelf->__PVT__iram_rdata = vlSymsp->TOP__Main__iram.__PVT__rdata;
    vlSelf->__PVT__cpucore_inst_sram_rdata = vlSelf->__PVT__iram_rdata;
    vlSymsp->TOP__Main__cpucore.__PVT__inst_sram_rdata 
        = vlSelf->__PVT__cpucore_inst_sram_rdata;
}

VL_INLINE_OPT void VMain_Main___nba_comb__TOP__Main__1(VMain_Main* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMain_Main___nba_comb__TOP__Main__1\n"); );
    // Body
    vlSelf->__PVT__cpucore_data_sram_en = vlSymsp->TOP__Main__cpucore.__PVT__data_sram_en;
    vlSelf->__PVT__cpucore_data_sram_wr = vlSymsp->TOP__Main__cpucore.__PVT__data_sram_wr;
    vlSelf->__PVT__cpucore_data_sram_wstrb = vlSymsp->TOP__Main__cpucore.__PVT__data_sram_wstrb;
    vlSelf->__PVT__dram_en = vlSelf->__PVT__cpucore_data_sram_en;
    vlSelf->__PVT__dram_wr = vlSelf->__PVT__cpucore_data_sram_wr;
    vlSelf->__PVT__dram_wstrb = vlSelf->__PVT__cpucore_data_sram_wstrb;
    vlSymsp->TOP__Main__dram.__PVT__en = vlSelf->__PVT__dram_en;
    vlSymsp->TOP__Main__dram.__PVT__wr = vlSelf->__PVT__dram_wr;
    vlSymsp->TOP__Main__dram.__PVT__wstrb = vlSelf->__PVT__dram_wstrb;
}

VL_INLINE_OPT void VMain_Main___nba_comb__TOP__Main__2(VMain_Main* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMain_Main___nba_comb__TOP__Main__2\n"); );
    // Body
    vlSelf->__PVT__cpucore_data_sram_wdata = vlSymsp->TOP__Main__cpucore.__PVT__data_sram_wdata;
    vlSelf->__PVT__dram_wdata = vlSelf->__PVT__cpucore_data_sram_wdata;
    vlSymsp->TOP__Main__dram.__PVT__wdata = vlSelf->__PVT__dram_wdata;
}

VL_INLINE_OPT void VMain_Main___nba_comb__TOP__Main__3(VMain_Main* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMain_Main___nba_comb__TOP__Main__3\n"); );
    // Body
    vlSelf->__PVT__cpucore_data_sram_addr = vlSymsp->TOP__Main__cpucore.__PVT__data_sram_addr;
    vlSelf->__PVT__dram_addr = vlSelf->__PVT__cpucore_data_sram_addr;
    vlSymsp->TOP__Main__dram.__PVT__addr = vlSelf->__PVT__dram_addr;
}

VL_INLINE_OPT void VMain_Main___nba_comb__TOP__Main__4(VMain_Main* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMain_Main___nba_comb__TOP__Main__4\n"); );
    // Body
    vlSelf->__PVT__dram_rdata = vlSymsp->TOP__Main__dram.__PVT__rdata;
    vlSelf->__PVT__cpucore_data_sram_rdata = vlSelf->__PVT__dram_rdata;
    vlSymsp->TOP__Main__cpucore.__PVT__data_sram_rdata 
        = vlSelf->__PVT__cpucore_data_sram_rdata;
}
