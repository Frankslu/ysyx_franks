// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_EX_stage.h"
#include "VMain__Syms.h"

VL_INLINE_OPT void VMain_EX_stage___ico_sequent__TOP__Main__cpucore__EXE__0(VMain_EX_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_EX_stage___ico_sequent__TOP__Main__cpucore__EXE__0\n"); );
    // Body
    vlSelf->__PVT__toms_bits_inst = vlSelf->__PVT__es_bits_inst;
    vlSelf->__PVT__toms_bits_res_from_mem = (1U == (IData)(vlSelf->__PVT__es_bits_mem_we));
    vlSelf->__PVT__data_sram_en = (2U != (IData)(vlSelf->__PVT__es_bits_mem_we));
    vlSelf->__PVT__data_sram_wr = (0U == (IData)(vlSelf->__PVT__es_bits_mem_we));
    vlSelf->__PVT__toms_bits_inst_name = vlSelf->__PVT__es_bits_inst_name;
    vlSelf->__PVT___data_sram_wstrb_T_1 = ((0xbU == (IData)(vlSelf->__PVT__es_bits_inst_name))
                                            ? 1U : 0xdeadU);
    vlSelf->__PVT__alu_io_alu_op = vlSelf->__PVT__es_bits_alu_op;
    vlSelf->__PVT__toms_bits_rf_waddr = vlSelf->__PVT__es_bits_rf_waddr;
    vlSelf->__PVT__toms_bits_is_break = vlSelf->__PVT__es_bits_is_break;
    vlSelf->__PVT___data_sram_wstrb_T_3 = ((0xcU == (IData)(vlSelf->__PVT__es_bits_inst_name))
                                            ? 3U : (IData)(vlSelf->__PVT___data_sram_wstrb_T_1));
    vlSymsp->TOP__Main__cpucore__EXE__alu.__PVT__io_alu_op 
        = vlSelf->__PVT__alu_io_alu_op;
    vlSelf->__PVT___data_sram_wstrb_T_5 = ((0xdU == (IData)(vlSelf->__PVT__es_bits_inst_name))
                                            ? 7U : (IData)(vlSelf->__PVT___data_sram_wstrb_T_3));
    vlSelf->__PVT__data_sram_wstrb = (0xfU & VL_SEL_IIII(16, (IData)(vlSelf->__PVT___data_sram_wstrb_T_5), 0U, 4U));
}

VL_INLINE_OPT void VMain_EX_stage___ico_sequent__TOP__Main__cpucore__EXE__1(VMain_EX_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_EX_stage___ico_sequent__TOP__Main__cpucore__EXE__1\n"); );
    // Body
    vlSelf->__PVT__data_sram_wdata = vlSelf->__PVT__es_bits_mem_wdata;
    vlSelf->__PVT__alu_io_src2 = vlSelf->__PVT__es_bits_alu_src2;
    vlSymsp->TOP__Main__cpucore__EXE__alu.__PVT__io_src2 
        = vlSelf->__PVT__alu_io_src2;
}

VL_INLINE_OPT void VMain_EX_stage___ico_sequent__TOP__Main__cpucore__EXE__2(VMain_EX_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_EX_stage___ico_sequent__TOP__Main__cpucore__EXE__2\n"); );
    // Body
    vlSelf->__PVT__alu_io_res = vlSymsp->TOP__Main__cpucore__EXE__alu.__PVT__io_res;
    vlSelf->__PVT__toms_bits_alu_res = vlSelf->__PVT__alu_io_res;
    vlSelf->__PVT__data_sram_addr = vlSelf->__PVT__alu_io_res;
}

VL_INLINE_OPT void VMain_EX_stage___nba_sequent__TOP__Main__cpucore__EXE__0(VMain_EX_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_EX_stage___nba_sequent__TOP__Main__cpucore__EXE__0\n"); );
    // Body
    vlSelf->__PVT__toms_bits_pc = vlSelf->__PVT__es_bits_pc;
    vlSelf->__PVT__alu_io_src1 = vlSelf->__PVT__es_bits_alu_src1;
    vlSymsp->TOP__Main__cpucore__EXE__alu.__PVT__io_src1 
        = vlSelf->__PVT__alu_io_src1;
}

VL_INLINE_OPT void VMain_EX_stage___nba_sequent__TOP__Main__cpucore__EXE__1(VMain_EX_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_EX_stage___nba_sequent__TOP__Main__cpucore__EXE__1\n"); );
    // Body
    vlSelf->__PVT__toms_bits_inst = vlSelf->__PVT__es_bits_inst;
    vlSelf->__PVT__toms_bits_res_from_mem = (1U == (IData)(vlSelf->__PVT__es_bits_mem_we));
    vlSelf->__PVT__data_sram_en = (2U != (IData)(vlSelf->__PVT__es_bits_mem_we));
    vlSelf->__PVT__data_sram_wr = (0U == (IData)(vlSelf->__PVT__es_bits_mem_we));
    vlSelf->__PVT__toms_bits_inst_name = vlSelf->__PVT__es_bits_inst_name;
    vlSelf->__PVT___data_sram_wstrb_T_1 = ((0xbU == (IData)(vlSelf->__PVT__es_bits_inst_name))
                                            ? 1U : 0xdeadU);
    vlSelf->__PVT__alu_io_alu_op = vlSelf->__PVT__es_bits_alu_op;
    vlSelf->__PVT__toms_bits_rf_waddr = vlSelf->__PVT__es_bits_rf_waddr;
    vlSelf->__PVT__toms_bits_is_break = vlSelf->__PVT__es_bits_is_break;
    vlSelf->__PVT___data_sram_wstrb_T_3 = ((0xcU == (IData)(vlSelf->__PVT__es_bits_inst_name))
                                            ? 3U : (IData)(vlSelf->__PVT___data_sram_wstrb_T_1));
    vlSymsp->TOP__Main__cpucore__EXE__alu.__PVT__io_alu_op 
        = vlSelf->__PVT__alu_io_alu_op;
    vlSelf->__PVT___data_sram_wstrb_T_5 = ((0xdU == (IData)(vlSelf->__PVT__es_bits_inst_name))
                                            ? 7U : (IData)(vlSelf->__PVT___data_sram_wstrb_T_3));
    vlSelf->__PVT__data_sram_wstrb = (0xfU & VL_SEL_IIII(16, (IData)(vlSelf->__PVT___data_sram_wstrb_T_5), 0U, 4U));
}

VL_INLINE_OPT void VMain_EX_stage___nba_comb__TOP__Main__cpucore__EXE__0(VMain_EX_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_EX_stage___nba_comb__TOP__Main__cpucore__EXE__0\n"); );
    // Body
    vlSelf->__PVT__data_sram_wdata = vlSelf->__PVT__es_bits_mem_wdata;
    vlSelf->__PVT__alu_io_src2 = vlSelf->__PVT__es_bits_alu_src2;
    vlSymsp->TOP__Main__cpucore__EXE__alu.__PVT__io_src2 
        = vlSelf->__PVT__alu_io_src2;
}

VL_INLINE_OPT void VMain_EX_stage___nba_comb__TOP__Main__cpucore__EXE__1(VMain_EX_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_EX_stage___nba_comb__TOP__Main__cpucore__EXE__1\n"); );
    // Body
    vlSelf->__PVT__alu_io_res = vlSymsp->TOP__Main__cpucore__EXE__alu.__PVT__io_res;
    vlSelf->__PVT__toms_bits_alu_res = vlSelf->__PVT__alu_io_res;
    vlSelf->__PVT__data_sram_addr = vlSelf->__PVT__alu_io_res;
}
