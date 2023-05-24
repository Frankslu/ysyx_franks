// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_regfile.h"

VL_ATTR_COLD void VMain_regfile___eval_initial__TOP__Main__cpucore__ID__reg_(VMain_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VMain_regfile___eval_initial__TOP__Main__cpucore__ID__reg_\n"); );
    // Body
    vlSelf->__PVT__rf_io_rdata1_MPORT_en = 1U;
    vlSelf->__PVT__rf_io_rdata2_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_1_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_1_MPORT_addr = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_2_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_2_MPORT_addr = 2U;
    vlSelf->__PVT__rf_difftest_io_rf_3_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_3_MPORT_addr = 3U;
    vlSelf->__PVT__rf_difftest_io_rf_4_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_4_MPORT_addr = 4U;
    vlSelf->__PVT__rf_difftest_io_rf_5_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_5_MPORT_addr = 5U;
    vlSelf->__PVT__rf_difftest_io_rf_6_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_6_MPORT_addr = 6U;
    vlSelf->__PVT__rf_difftest_io_rf_7_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_7_MPORT_addr = 7U;
    vlSelf->__PVT__rf_difftest_io_rf_8_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_8_MPORT_addr = 8U;
    vlSelf->__PVT__rf_difftest_io_rf_9_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_9_MPORT_addr = 9U;
    vlSelf->__PVT__rf_difftest_io_rf_10_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_10_MPORT_addr = 0xaU;
    vlSelf->__PVT__rf_difftest_io_rf_11_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_11_MPORT_addr = 0xbU;
    vlSelf->__PVT__rf_difftest_io_rf_12_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_12_MPORT_addr = 0xcU;
    vlSelf->__PVT__rf_difftest_io_rf_13_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_13_MPORT_addr = 0xdU;
    vlSelf->__PVT__rf_difftest_io_rf_14_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_14_MPORT_addr = 0xeU;
    vlSelf->__PVT__rf_difftest_io_rf_15_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_15_MPORT_addr = 0xfU;
    vlSelf->__PVT__rf_difftest_io_rf_16_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_16_MPORT_addr = 0x10U;
    vlSelf->__PVT__rf_difftest_io_rf_17_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_17_MPORT_addr = 0x11U;
    vlSelf->__PVT__rf_difftest_io_rf_18_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_18_MPORT_addr = 0x12U;
    vlSelf->__PVT__rf_difftest_io_rf_19_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_19_MPORT_addr = 0x13U;
    vlSelf->__PVT__rf_difftest_io_rf_20_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_20_MPORT_addr = 0x14U;
    vlSelf->__PVT__rf_difftest_io_rf_21_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_21_MPORT_addr = 0x15U;
    vlSelf->__PVT__rf_difftest_io_rf_22_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_22_MPORT_addr = 0x16U;
    vlSelf->__PVT__rf_difftest_io_rf_23_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_23_MPORT_addr = 0x17U;
    vlSelf->__PVT__rf_difftest_io_rf_24_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_24_MPORT_addr = 0x18U;
    vlSelf->__PVT__rf_difftest_io_rf_25_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_25_MPORT_addr = 0x19U;
    vlSelf->__PVT__rf_difftest_io_rf_26_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_26_MPORT_addr = 0x1aU;
    vlSelf->__PVT__rf_difftest_io_rf_27_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_27_MPORT_addr = 0x1bU;
    vlSelf->__PVT__rf_difftest_io_rf_28_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_28_MPORT_addr = 0x1cU;
    vlSelf->__PVT__rf_difftest_io_rf_29_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_29_MPORT_addr = 0x1dU;
    vlSelf->__PVT__rf_difftest_io_rf_30_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_30_MPORT_addr = 0x1eU;
    vlSelf->__PVT__rf_difftest_io_rf_31_MPORT_en = 1U;
    vlSelf->__PVT__rf_difftest_io_rf_31_MPORT_addr = 0x1fU;
    vlSelf->__PVT__rf_MPORT_mask = 1U;
    vlSelf->__PVT__rf_MPORT_en = 1U;
    vlSelf->__PVT__difftest_rf_0 = 0U;
}

VL_ATTR_COLD void VMain_regfile___stl_sequent__TOP__Main__cpucore__ID__reg___1(VMain_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VMain_regfile___stl_sequent__TOP__Main__cpucore__ID__reg___1\n"); );
    // Body
    vlSelf->__PVT__rf_io_rdata1_MPORT_addr = vlSelf->__PVT__io_raddr1;
    vlSelf->__PVT__rf_io_rdata2_MPORT_addr = vlSelf->__PVT__io_raddr2;
    vlSelf->__PVT__rf_io_rdata1_MPORT_data = vlSelf->__PVT__rf
        [vlSelf->__PVT__rf_io_rdata1_MPORT_addr];
    vlSelf->__PVT__rf_io_rdata2_MPORT_data = vlSelf->__PVT__rf
        [vlSelf->__PVT__rf_io_rdata2_MPORT_addr];
    vlSelf->__PVT__io_rdata1 = ((0U == (IData)(vlSelf->__PVT__io_raddr1))
                                 ? 0U : vlSelf->__PVT__rf_io_rdata1_MPORT_data);
    vlSelf->__PVT__io_rdata2 = ((0U == (IData)(vlSelf->__PVT__io_raddr2))
                                 ? 0U : vlSelf->__PVT__rf_io_rdata2_MPORT_data);
}

VL_ATTR_COLD void VMain_regfile___ctor_var_reset(VMain_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VMain_regfile___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_raddr1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__io_raddr2 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__io_rdata1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_rdata2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_waddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__io_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_rf_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_is_break = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_inst = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__rf_io_rdata1_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_io_rdata1_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_io_rdata1_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_io_rdata2_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_io_rdata2_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_io_rdata2_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_1_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_1_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_1_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_2_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_2_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_2_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_3_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_3_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_3_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_4_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_4_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_4_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_5_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_5_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_5_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_6_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_6_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_6_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_7_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_7_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_7_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_8_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_8_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_8_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_9_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_9_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_9_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_10_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_10_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_10_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_11_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_11_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_11_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_12_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_12_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_12_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_13_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_13_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_13_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_14_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_14_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_14_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_15_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_15_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_15_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_16_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_16_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_16_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_17_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_17_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_17_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_18_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_18_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_18_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_19_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_19_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_19_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_20_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_20_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_20_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_21_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_21_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_21_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_22_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_22_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_22_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_23_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_23_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_23_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_24_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_24_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_24_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_25_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_25_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_25_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_26_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_26_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_26_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_27_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_27_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_27_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_28_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_28_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_28_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_29_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_29_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_29_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_30_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_30_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_30_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_difftest_io_rf_31_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_difftest_io_rf_31_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_difftest_io_rf_31_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_MPORT_mask = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__difftest_rf_0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_6 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_7 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_8 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_9 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_10 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_11 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_12 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_13 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_14 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_15 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_16 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_17 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_18 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_19 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_20 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_21 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_22 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_23 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_24 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_25 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_26 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_27 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_28 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_29 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_30 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__difftest_rf_31 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__npc_brk_is_break = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_exec_once_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_exec_once_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_exec_once_pc = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__rf__v0 = 0;
    vlSelf->__Vdlyvval__rf__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__rf__v0 = 0;
}
