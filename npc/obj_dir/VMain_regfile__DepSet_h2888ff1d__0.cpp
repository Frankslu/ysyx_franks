// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_regfile.h"

VL_INLINE_OPT void VMain_regfile___nba_comb__TOP__Main__cpucore__ID__reg___0(VMain_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VMain_regfile___nba_comb__TOP__Main__cpucore__ID__reg___0\n"); );
    // Body
    vlSelf->__PVT__rf_io_rdata1_MPORT_addr = vlSelf->__PVT__io_raddr1;
    vlSelf->__PVT__rf_io_rdata2_MPORT_addr = vlSelf->__PVT__io_raddr2;
}

VL_INLINE_OPT void VMain_regfile___nba_comb__TOP__Main__cpucore__ID__reg___2(VMain_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VMain_regfile___nba_comb__TOP__Main__cpucore__ID__reg___2\n"); );
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

VL_INLINE_OPT void VMain_regfile___nba_comb__TOP__Main__cpucore__ID__reg___3(VMain_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VMain_regfile___nba_comb__TOP__Main__cpucore__ID__reg___3\n"); );
    // Body
    vlSelf->__PVT__rf_MPORT_data = vlSelf->__PVT__io_wdata;
}
