// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain_regfile.h"

VL_ATTR_COLD void VMain_regfile___stl_sequent__TOP__Main__cpucore__ID__reg___0(VMain_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VMain_regfile___stl_sequent__TOP__Main__cpucore__ID__reg___0\n"); );
    // Body
    vlSelf->__PVT__npc_brk_is_break = vlSelf->__PVT__is_break;
    vlSelf->__PVT__inst_exec_once_valid = vlSelf->__PVT__valid;
    vlSelf->__PVT__inst_exec_once_inst = vlSelf->__PVT__inst;
    vlSelf->__PVT__inst_exec_once_pc = vlSelf->__PVT__pc;
    vlSelf->__PVT__rf_difftest_io_rf_0_MPORT_data = 
        vlSelf->__PVT__rf[vlSelf->__PVT__rf_difftest_io_rf_0_MPORT_addr];
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
    vlSymsp->TOP__Main__cpucore__ID__reg___npc_brk.__PVT__is_break 
        = vlSelf->__PVT__npc_brk_is_break;
    vlSymsp->TOP__Main__cpucore__ID__reg___inst_exec_once.__PVT__valid 
        = vlSelf->__PVT__inst_exec_once_valid;
    vlSymsp->TOP__Main__cpucore__ID__reg___inst_exec_once.__PVT__inst 
        = vlSelf->__PVT__inst_exec_once_inst;
    vlSymsp->TOP__Main__cpucore__ID__reg___inst_exec_once.__PVT__pc 
        = vlSelf->__PVT__inst_exec_once_pc;
    vlSelf->__PVT__difftest_rf_0 = vlSelf->__PVT__rf_difftest_io_rf_0_MPORT_data;
    vlSelf->__PVT__difftest_rf_1 = vlSelf->__PVT__rf_difftest_io_rf_1_MPORT_data;
    vlSelf->__PVT__difftest_rf_2 = vlSelf->__PVT__rf_difftest_io_rf_2_MPORT_data;
    vlSelf->__PVT__difftest_rf_3 = vlSelf->__PVT__rf_difftest_io_rf_3_MPORT_data;
    vlSelf->__PVT__difftest_rf_4 = vlSelf->__PVT__rf_difftest_io_rf_4_MPORT_data;
    vlSelf->__PVT__difftest_rf_5 = vlSelf->__PVT__rf_difftest_io_rf_5_MPORT_data;
    vlSelf->__PVT__difftest_rf_6 = vlSelf->__PVT__rf_difftest_io_rf_6_MPORT_data;
    vlSelf->__PVT__difftest_rf_7 = vlSelf->__PVT__rf_difftest_io_rf_7_MPORT_data;
    vlSelf->__PVT__difftest_rf_8 = vlSelf->__PVT__rf_difftest_io_rf_8_MPORT_data;
    vlSelf->__PVT__difftest_rf_9 = vlSelf->__PVT__rf_difftest_io_rf_9_MPORT_data;
    vlSelf->__PVT__difftest_rf_10 = vlSelf->__PVT__rf_difftest_io_rf_10_MPORT_data;
    vlSelf->__PVT__difftest_rf_11 = vlSelf->__PVT__rf_difftest_io_rf_11_MPORT_data;
    vlSelf->__PVT__difftest_rf_12 = vlSelf->__PVT__rf_difftest_io_rf_12_MPORT_data;
    vlSelf->__PVT__difftest_rf_13 = vlSelf->__PVT__rf_difftest_io_rf_13_MPORT_data;
    vlSelf->__PVT__difftest_rf_14 = vlSelf->__PVT__rf_difftest_io_rf_14_MPORT_data;
    vlSelf->__PVT__difftest_rf_15 = vlSelf->__PVT__rf_difftest_io_rf_15_MPORT_data;
    vlSelf->__PVT__difftest_rf_16 = vlSelf->__PVT__rf_difftest_io_rf_16_MPORT_data;
    vlSelf->__PVT__difftest_rf_17 = vlSelf->__PVT__rf_difftest_io_rf_17_MPORT_data;
    vlSelf->__PVT__difftest_rf_18 = vlSelf->__PVT__rf_difftest_io_rf_18_MPORT_data;
    vlSelf->__PVT__difftest_rf_19 = vlSelf->__PVT__rf_difftest_io_rf_19_MPORT_data;
    vlSelf->__PVT__difftest_rf_20 = vlSelf->__PVT__rf_difftest_io_rf_20_MPORT_data;
    vlSelf->__PVT__difftest_rf_21 = vlSelf->__PVT__rf_difftest_io_rf_21_MPORT_data;
    vlSelf->__PVT__difftest_rf_22 = vlSelf->__PVT__rf_difftest_io_rf_22_MPORT_data;
    vlSelf->__PVT__difftest_rf_23 = vlSelf->__PVT__rf_difftest_io_rf_23_MPORT_data;
    vlSelf->__PVT__difftest_rf_24 = vlSelf->__PVT__rf_difftest_io_rf_24_MPORT_data;
    vlSelf->__PVT__difftest_rf_25 = vlSelf->__PVT__rf_difftest_io_rf_25_MPORT_data;
    vlSelf->__PVT__difftest_rf_26 = vlSelf->__PVT__rf_difftest_io_rf_26_MPORT_data;
    vlSelf->__PVT__difftest_rf_27 = vlSelf->__PVT__rf_difftest_io_rf_27_MPORT_data;
    vlSelf->__PVT__difftest_rf_28 = vlSelf->__PVT__rf_difftest_io_rf_28_MPORT_data;
    vlSelf->__PVT__difftest_rf_29 = vlSelf->__PVT__rf_difftest_io_rf_29_MPORT_data;
    vlSelf->__PVT__difftest_rf_30 = vlSelf->__PVT__rf_difftest_io_rf_30_MPORT_data;
    vlSelf->__PVT__difftest_rf_31 = vlSelf->__PVT__rf_difftest_io_rf_31_MPORT_data;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_0 
        = vlSelf->__PVT__difftest_rf_0;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_1 
        = vlSelf->__PVT__difftest_rf_1;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_2 
        = vlSelf->__PVT__difftest_rf_2;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_3 
        = vlSelf->__PVT__difftest_rf_3;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_4 
        = vlSelf->__PVT__difftest_rf_4;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_5 
        = vlSelf->__PVT__difftest_rf_5;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_6 
        = vlSelf->__PVT__difftest_rf_6;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_7 
        = vlSelf->__PVT__difftest_rf_7;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_8 
        = vlSelf->__PVT__difftest_rf_8;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_9 
        = vlSelf->__PVT__difftest_rf_9;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_10 
        = vlSelf->__PVT__difftest_rf_10;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_11 
        = vlSelf->__PVT__difftest_rf_11;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_12 
        = vlSelf->__PVT__difftest_rf_12;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_13 
        = vlSelf->__PVT__difftest_rf_13;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_14 
        = vlSelf->__PVT__difftest_rf_14;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_15 
        = vlSelf->__PVT__difftest_rf_15;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_16 
        = vlSelf->__PVT__difftest_rf_16;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_17 
        = vlSelf->__PVT__difftest_rf_17;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_18 
        = vlSelf->__PVT__difftest_rf_18;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_19 
        = vlSelf->__PVT__difftest_rf_19;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_20 
        = vlSelf->__PVT__difftest_rf_20;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_21 
        = vlSelf->__PVT__difftest_rf_21;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_22 
        = vlSelf->__PVT__difftest_rf_22;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_23 
        = vlSelf->__PVT__difftest_rf_23;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_24 
        = vlSelf->__PVT__difftest_rf_24;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_25 
        = vlSelf->__PVT__difftest_rf_25;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_26 
        = vlSelf->__PVT__difftest_rf_26;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_27 
        = vlSelf->__PVT__difftest_rf_27;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_28 
        = vlSelf->__PVT__difftest_rf_28;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_29 
        = vlSelf->__PVT__difftest_rf_29;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_30 
        = vlSelf->__PVT__difftest_rf_30;
    vlSymsp->TOP__Main__cpucore__ID__reg___difftest.__PVT__rf_31 
        = vlSelf->__PVT__difftest_rf_31;
}
