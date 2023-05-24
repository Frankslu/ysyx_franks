// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_regfile.h"

VL_INLINE_OPT void VMain_regfile___nba_sequent__TOP__Main__cpucore__ID__reg___0(VMain_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VMain_regfile___nba_sequent__TOP__Main__cpucore__ID__reg___0\n"); );
    // Body
    vlSelf->__Vdlyvset__rf__v0 = 0U;
    if (((IData)(vlSelf->__PVT__rf_MPORT_en) & (IData)(vlSelf->__PVT__rf_MPORT_mask))) {
        vlSelf->__Vdlyvval__rf__v0 = vlSelf->__PVT__rf_MPORT_data;
        vlSelf->__Vdlyvset__rf__v0 = 1U;
        vlSelf->__Vdlyvdim0__rf__v0 = vlSelf->__PVT__rf_MPORT_addr;
    }
    if (vlSelf->__Vdlyvset__rf__v0) {
        vlSelf->__PVT__rf[vlSelf->__Vdlyvdim0__rf__v0] 
            = vlSelf->__Vdlyvval__rf__v0;
    }
    vlSelf->__PVT__rf_difftest_io_rf_1_MPORT_data = 
        vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_1_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_2_MPORT_data = 
        vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_2_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_3_MPORT_data = 
        vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_3_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_4_MPORT_data = 
        vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_4_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_5_MPORT_data = 
        vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_5_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_6_MPORT_data = 
        vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_6_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_7_MPORT_data = 
        vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_7_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_8_MPORT_data = 
        vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_8_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_9_MPORT_data = 
        vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_9_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_10_MPORT_data 
        = vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_10_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_11_MPORT_data 
        = vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_11_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_12_MPORT_data 
        = vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_12_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_13_MPORT_data 
        = vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_13_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_14_MPORT_data 
        = vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_14_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_15_MPORT_data 
        = vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_15_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_16_MPORT_data 
        = vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_16_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_17_MPORT_data 
        = vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_17_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_18_MPORT_data 
        = vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_18_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_19_MPORT_data 
        = vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_19_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_20_MPORT_data 
        = vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_20_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_21_MPORT_data 
        = vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_21_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_22_MPORT_data 
        = vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_22_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_23_MPORT_data 
        = vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_23_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_24_MPORT_data 
        = vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_24_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_25_MPORT_data 
        = vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_25_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_26_MPORT_data 
        = vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_26_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_27_MPORT_data 
        = vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_27_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_28_MPORT_data 
        = vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_28_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_29_MPORT_data 
        = vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_29_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_30_MPORT_data 
        = vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_30_MPORT_addr];
    vlSelf->__PVT__rf_difftest_io_rf_31_MPORT_data 
        = vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_31_MPORT_addr];
}

VL_INLINE_OPT void VMain_regfile___nba_sequent__TOP__Main__cpucore__ID__reg___1(VMain_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VMain_regfile___nba_sequent__TOP__Main__cpucore__ID__reg___1\n"); );
    // Body
    vlSelf->__PVT__rf_io_rdata1_MPORT_addr = vlSelf->__PVT__io_raddr1;
    vlSelf->__PVT__rf_io_rdata2_MPORT_addr = vlSelf->__PVT__io_raddr2;
}

VL_INLINE_OPT void VMain_regfile___nba_comb__TOP__Main__cpucore__ID__reg___0(VMain_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VMain_regfile___nba_comb__TOP__Main__cpucore__ID__reg___0\n"); );
    // Body
    vlSelf->__PVT__rf_io_rdata1_MPORT_data = vlSelf->__PVT__rf
        [vlSelf->__PVT__rf_io_rdata1_MPORT_addr];
    vlSelf->__PVT__rf_io_rdata2_MPORT_data = vlSelf->__PVT__rf
        [vlSelf->__PVT__rf_io_rdata2_MPORT_addr];
    vlSelf->__PVT__io_rdata1 = ((0U == (IData)(vlSelf->__PVT__io_raddr1))
                                 ? 0U : vlSelf->__PVT__rf_io_rdata1_MPORT_data);
    vlSelf->__PVT__io_rdata2 = ((0U == (IData)(vlSelf->__PVT__io_raddr2))
                                 ? 0U : vlSelf->__PVT__rf_io_rdata2_MPORT_data);
}
