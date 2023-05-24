// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_Main.h"

VL_ATTR_COLD void VMain_Main___eval_initial__TOP__Main(VMain_Main* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMain_Main___eval_initial__TOP__Main\n"); );
    // Body
    vlSelf->__PVT__iram_wr = 0U;
    vlSelf->__PVT__iram_wdata = 0U;
    vlSelf->__PVT__iram_wstrb = 0U;
}

VL_ATTR_COLD void VMain_Main___ctor_var_reset(VMain_Main* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMain_Main___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpucore_clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpucore_reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpucore_inst_sram_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpucore_inst_sram_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpucore_inst_sram_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpucore_data_sram_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpucore_data_sram_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpucore_data_sram_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpucore_data_sram_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpucore_data_sram_wstrb = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cpucore_data_sram_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dram_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dram_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dram_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dram_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dram_wstrb = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dram_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__iram_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iram_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iram_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__iram_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__iram_wstrb = VL_RAND_RESET_I(4);
    vlSelf->__PVT__iram_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpucore_reset_REG = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cpucore_reset_REG = VL_RAND_RESET_I(1);
}
