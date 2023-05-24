// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_EX_stage.h"

VL_ATTR_COLD void VMain_EX_stage___stl_sequent__TOP__Main__cpucore__EXE__0(VMain_EX_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_EX_stage___stl_sequent__TOP__Main__cpucore__EXE__0\n"); );
    // Body
    vlSelf->__PVT__toms_valid = vlSelf->__PVT__es_valid;
}

VL_ATTR_COLD void VMain_EX_stage___stl_sequent__TOP__Main__cpucore__EXE__4(VMain_EX_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_EX_stage___stl_sequent__TOP__Main__cpucore__EXE__4\n"); );
    // Body
    vlSelf->__PVT__toms_bits_dpi_c_next_pc = vlSelf->__PVT__es_bits_dpi_c_next_pc;
}

VL_ATTR_COLD void VMain_EX_stage___ctor_var_reset(VMain_EX_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMain_EX_stage___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__es_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__es_bits_alu_src1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__es_bits_alu_src2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__es_bits_alu_op = VL_RAND_RESET_I(5);
    vlSelf->__PVT__es_bits_rf_waddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__es_bits_rf_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__es_bits_mem_we = VL_RAND_RESET_I(2);
    vlSelf->__PVT__es_bits_inst_name = VL_RAND_RESET_I(5);
    vlSelf->__PVT__es_bits_mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__es_bits_dpi_c_is_break = VL_RAND_RESET_I(1);
    vlSelf->__PVT__es_bits_dpi_c_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__es_bits_dpi_c_next_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__toms_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__toms_bits_alu_res = VL_RAND_RESET_I(32);
    vlSelf->__PVT__toms_bits_inst_name = VL_RAND_RESET_I(5);
    vlSelf->__PVT__toms_bits_res_from_mem = VL_RAND_RESET_I(1);
    vlSelf->__PVT__toms_bits_rf_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__toms_bits_rf_waddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__toms_bits_dpi_c_is_break = VL_RAND_RESET_I(1);
    vlSelf->__PVT__toms_bits_dpi_c_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__toms_bits_dpi_c_next_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__data_sram_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_sram_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_sram_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__data_sram_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__data_sram_wstrb = VL_RAND_RESET_I(4);
    vlSelf->__PVT__alu_io_alu_op = VL_RAND_RESET_I(5);
    vlSelf->__PVT__alu_io_src1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__alu_io_src2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__alu_io_res = VL_RAND_RESET_I(32);
    vlSelf->__PVT___data_sram_wstrb_T_1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT___data_sram_wstrb_T_3 = VL_RAND_RESET_I(16);
    vlSelf->__PVT___data_sram_wstrb_T_5 = VL_RAND_RESET_I(16);
}
