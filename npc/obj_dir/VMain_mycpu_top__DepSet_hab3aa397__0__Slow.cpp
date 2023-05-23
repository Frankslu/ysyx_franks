// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_mycpu_top.h"

VL_ATTR_COLD void VMain_mycpu_top___ctor_var_reset(VMain_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMain_mycpu_top___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_sram_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_sram_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_sram_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__data_sram_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_sram_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_sram_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__data_sram_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__data_sram_wstrb = VL_RAND_RESET_I(4);
    vlSelf->__PVT__data_sram_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pIF_clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pIF_reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pIF_br_taken = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pIF_br_target = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pIF_inst_sram_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pIF_inst_sram_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pIF_tofs_bits_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IF_tods_bits_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IF_tods_bits_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IF_inst_sram_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IF_fs_bits_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ID_clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ID_reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ID_toes_bits_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ID_toes_bits_alu_src1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ID_toes_bits_alu_src2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ID_toes_bits_alu_op = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ID_toes_bits_rf_waddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ID_toes_bits_mem_we = VL_RAND_RESET_I(2);
    vlSelf->__PVT__ID_toes_bits_inst_name = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ID_toes_bits_mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ID_toes_bits_is_break = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ID_toes_bits_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ID_ds_bits_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ID_ds_bits_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ID_torf_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ID_torf_rf_waddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ID_torf_rf_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ID_torf_is_break = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ID_torf_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ID_br_taken = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ID_br_target = VL_RAND_RESET_I(32);
    vlSelf->__PVT__EXE_es_bits_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__EXE_es_bits_alu_src1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__EXE_es_bits_alu_src2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__EXE_es_bits_alu_op = VL_RAND_RESET_I(5);
    vlSelf->__PVT__EXE_es_bits_rf_waddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__EXE_es_bits_mem_we = VL_RAND_RESET_I(2);
    vlSelf->__PVT__EXE_es_bits_inst_name = VL_RAND_RESET_I(5);
    vlSelf->__PVT__EXE_es_bits_mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__EXE_es_bits_is_break = VL_RAND_RESET_I(1);
    vlSelf->__PVT__EXE_es_bits_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__EXE_toms_bits_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__EXE_toms_bits_alu_res = VL_RAND_RESET_I(32);
    vlSelf->__PVT__EXE_toms_bits_inst_name = VL_RAND_RESET_I(5);
    vlSelf->__PVT__EXE_toms_bits_res_from_mem = VL_RAND_RESET_I(1);
    vlSelf->__PVT__EXE_toms_bits_rf_waddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__EXE_toms_bits_is_break = VL_RAND_RESET_I(1);
    vlSelf->__PVT__EXE_toms_bits_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__EXE_data_sram_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__EXE_data_sram_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__EXE_data_sram_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__EXE_data_sram_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__EXE_data_sram_wstrb = VL_RAND_RESET_I(4);
    vlSelf->__PVT__MEM_ms_bits_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__MEM_ms_bits_alu_res = VL_RAND_RESET_I(32);
    vlSelf->__PVT__MEM_ms_bits_inst_name = VL_RAND_RESET_I(5);
    vlSelf->__PVT__MEM_ms_bits_res_from_mem = VL_RAND_RESET_I(1);
    vlSelf->__PVT__MEM_ms_bits_rf_waddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__MEM_ms_bits_is_break = VL_RAND_RESET_I(1);
    vlSelf->__PVT__MEM_ms_bits_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__MEM_tows_bits_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__MEM_tows_bits_rf_waddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__MEM_tows_bits_rf_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__MEM_tows_bits_is_break = VL_RAND_RESET_I(1);
    vlSelf->__PVT__MEM_tows_bits_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__MEM_data_sram_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__WB_ws_bits_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__WB_ws_bits_rf_waddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__WB_ws_bits_rf_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__WB_ws_bits_is_break = VL_RAND_RESET_I(1);
    vlSelf->__PVT__WB_ws_bits_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__WB_torf_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__WB_torf_rf_waddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__WB_torf_rf_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__WB_torf_is_break = VL_RAND_RESET_I(1);
    vlSelf->__PVT__WB_torf_inst = VL_RAND_RESET_I(32);
}
