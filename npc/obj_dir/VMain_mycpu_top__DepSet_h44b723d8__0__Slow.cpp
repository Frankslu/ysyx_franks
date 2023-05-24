// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain_mycpu_top.h"

VL_ATTR_COLD void VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__0(VMain_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__0\n"); );
    // Body
    vlSelf->__PVT__pIF_tofs_bits_pc = vlSymsp->TOP__Main__cpucore__pIF.__PVT__tofs_bits_pc;
    vlSelf->__PVT__pIF_inst_sram_en = vlSymsp->TOP__Main__cpucore__pIF.__PVT__inst_sram_en;
    vlSelf->__PVT__pIF_inst_sram_addr = vlSymsp->TOP__Main__cpucore__pIF.__PVT__inst_sram_addr;
    vlSelf->__PVT__pIF_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__ID_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__pIF_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__IF_fs_bits_pc = vlSelf->__PVT__pIF_tofs_bits_pc;
    vlSelf->__PVT__inst_sram_en = vlSelf->__PVT__pIF_inst_sram_en;
    vlSelf->__PVT__inst_sram_addr = vlSelf->__PVT__pIF_inst_sram_addr;
    vlSymsp->TOP__Main__cpucore__pIF.__PVT__clock = vlSelf->__PVT__pIF_clock;
    vlSymsp->TOP__Main__cpucore__ID.__PVT__clock = vlSelf->__PVT__ID_clock;
    vlSymsp->TOP__Main__cpucore__pIF.__PVT__reset = vlSelf->__PVT__pIF_reset;
    vlSymsp->TOP__Main__cpucore__IF.__PVT__fs_bits_pc 
        = vlSelf->__PVT__IF_fs_bits_pc;
}

VL_ATTR_COLD void VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__1(VMain_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__1\n"); );
    // Body
    vlSelf->__PVT__pIF_tofs_valid = vlSymsp->TOP__Main__cpucore__pIF.__PVT__tofs_valid;
    vlSelf->__PVT__IF_tods_bits_pc = vlSymsp->TOP__Main__cpucore__IF.__PVT__tods_bits_pc;
    vlSelf->__PVT__IF_fs_valid = vlSelf->__PVT__pIF_tofs_valid;
    vlSelf->__PVT__ID_ds_bits_pc = vlSelf->__PVT__IF_tods_bits_pc;
    vlSymsp->TOP__Main__cpucore__IF.__PVT__fs_valid 
        = vlSelf->__PVT__IF_fs_valid;
    vlSymsp->TOP__Main__cpucore__ID.__PVT__ds_bits_pc 
        = vlSelf->__PVT__ID_ds_bits_pc;
}

VL_ATTR_COLD void VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__2(VMain_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__2\n"); );
    // Body
    vlSelf->__PVT__IF_inst_sram_rdata = vlSelf->__PVT__inst_sram_rdata;
    vlSelf->__PVT__IF_tods_valid = vlSymsp->TOP__Main__cpucore__IF.__PVT__tods_valid;
    vlSymsp->TOP__Main__cpucore__IF.__PVT__inst_sram_rdata 
        = vlSelf->__PVT__IF_inst_sram_rdata;
    vlSelf->__PVT__ID_ds_valid = vlSelf->__PVT__IF_tods_valid;
    vlSymsp->TOP__Main__cpucore__ID.__PVT__ds_valid 
        = vlSelf->__PVT__ID_ds_valid;
}

VL_ATTR_COLD void VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__3(VMain_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__3\n"); );
    // Body
    vlSelf->__PVT__IF_tods_bits_inst = vlSymsp->TOP__Main__cpucore__IF.__PVT__tods_bits_inst;
    vlSelf->__PVT__ID_toes_valid = vlSymsp->TOP__Main__cpucore__ID.__PVT__toes_valid;
    vlSelf->__PVT__ID_ds_bits_inst = vlSelf->__PVT__IF_tods_bits_inst;
    vlSelf->__PVT__EXE_es_valid = vlSelf->__PVT__ID_toes_valid;
    vlSymsp->TOP__Main__cpucore__ID.__PVT__ds_bits_inst 
        = vlSelf->__PVT__ID_ds_bits_inst;
    vlSymsp->TOP__Main__cpucore__EXE.__PVT__es_valid 
        = vlSelf->__PVT__EXE_es_valid;
}

VL_ATTR_COLD void VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__4(VMain_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__4\n"); );
    // Body
    vlSelf->__PVT__ID_toes_bits_dpi_c_inst = vlSymsp->TOP__Main__cpucore__ID.__PVT__toes_bits_dpi_c_inst;
    vlSelf->__PVT__ID_toes_bits_rf_we = vlSymsp->TOP__Main__cpucore__ID.__PVT__toes_bits_rf_we;
    vlSelf->__PVT__ID_toes_bits_mem_we = vlSymsp->TOP__Main__cpucore__ID.__PVT__toes_bits_mem_we;
    vlSelf->__PVT__ID_toes_bits_inst_name = vlSymsp->TOP__Main__cpucore__ID.__PVT__toes_bits_inst_name;
    vlSelf->__PVT__ID_toes_bits_alu_op = vlSymsp->TOP__Main__cpucore__ID.__PVT__toes_bits_alu_op;
    vlSelf->__PVT__ID_toes_bits_rf_waddr = vlSymsp->TOP__Main__cpucore__ID.__PVT__toes_bits_rf_waddr;
    vlSelf->__PVT__ID_toes_bits_dpi_c_is_break = vlSymsp->TOP__Main__cpucore__ID.__PVT__toes_bits_dpi_c_is_break;
    vlSelf->__PVT__EXE_toms_valid = vlSymsp->TOP__Main__cpucore__EXE.__PVT__toms_valid;
    vlSelf->__PVT__EXE_es_bits_dpi_c_inst = vlSelf->__PVT__ID_toes_bits_dpi_c_inst;
    vlSelf->__PVT__EXE_es_bits_rf_we = vlSelf->__PVT__ID_toes_bits_rf_we;
    vlSelf->__PVT__EXE_es_bits_mem_we = vlSelf->__PVT__ID_toes_bits_mem_we;
    vlSelf->__PVT__EXE_es_bits_inst_name = vlSelf->__PVT__ID_toes_bits_inst_name;
    vlSelf->__PVT__EXE_es_bits_alu_op = vlSelf->__PVT__ID_toes_bits_alu_op;
    vlSelf->__PVT__EXE_es_bits_rf_waddr = vlSelf->__PVT__ID_toes_bits_rf_waddr;
    vlSelf->__PVT__EXE_es_bits_dpi_c_is_break = vlSelf->__PVT__ID_toes_bits_dpi_c_is_break;
    vlSelf->__PVT__MEM_ms_valid = vlSelf->__PVT__EXE_toms_valid;
    vlSymsp->TOP__Main__cpucore__EXE.__PVT__es_bits_dpi_c_inst 
        = vlSelf->__PVT__EXE_es_bits_dpi_c_inst;
    vlSymsp->TOP__Main__cpucore__EXE.__PVT__es_bits_rf_we 
        = vlSelf->__PVT__EXE_es_bits_rf_we;
    vlSymsp->TOP__Main__cpucore__EXE.__PVT__es_bits_mem_we 
        = vlSelf->__PVT__EXE_es_bits_mem_we;
    vlSymsp->TOP__Main__cpucore__EXE.__PVT__es_bits_inst_name 
        = vlSelf->__PVT__EXE_es_bits_inst_name;
    vlSymsp->TOP__Main__cpucore__EXE.__PVT__es_bits_alu_op 
        = vlSelf->__PVT__EXE_es_bits_alu_op;
    vlSymsp->TOP__Main__cpucore__EXE.__PVT__es_bits_rf_waddr 
        = vlSelf->__PVT__EXE_es_bits_rf_waddr;
    vlSymsp->TOP__Main__cpucore__EXE.__PVT__es_bits_dpi_c_is_break 
        = vlSelf->__PVT__EXE_es_bits_dpi_c_is_break;
    vlSymsp->TOP__Main__cpucore__MEM.__PVT__ms_valid 
        = vlSelf->__PVT__MEM_ms_valid;
}

VL_ATTR_COLD void VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__5(VMain_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__5\n"); );
    // Body
    vlSelf->__PVT__EXE_toms_bits_dpi_c_inst = vlSymsp->TOP__Main__cpucore__EXE.__PVT__toms_bits_dpi_c_inst;
    vlSelf->__PVT__EXE_toms_bits_rf_we = vlSymsp->TOP__Main__cpucore__EXE.__PVT__toms_bits_rf_we;
    vlSelf->__PVT__EXE_toms_bits_res_from_mem = vlSymsp->TOP__Main__cpucore__EXE.__PVT__toms_bits_res_from_mem;
    vlSelf->__PVT__EXE_data_sram_en = vlSymsp->TOP__Main__cpucore__EXE.__PVT__data_sram_en;
    vlSelf->__PVT__EXE_data_sram_wr = vlSymsp->TOP__Main__cpucore__EXE.__PVT__data_sram_wr;
    vlSelf->__PVT__EXE_toms_bits_inst_name = vlSymsp->TOP__Main__cpucore__EXE.__PVT__toms_bits_inst_name;
    vlSelf->__PVT__EXE_toms_bits_rf_waddr = vlSymsp->TOP__Main__cpucore__EXE.__PVT__toms_bits_rf_waddr;
    vlSelf->__PVT__EXE_toms_bits_dpi_c_is_break = vlSymsp->TOP__Main__cpucore__EXE.__PVT__toms_bits_dpi_c_is_break;
    vlSelf->__PVT__EXE_data_sram_wstrb = vlSymsp->TOP__Main__cpucore__EXE.__PVT__data_sram_wstrb;
    vlSelf->__PVT__MEM_tows_valid = vlSymsp->TOP__Main__cpucore__MEM.__PVT__tows_valid;
    vlSelf->__PVT__ID_toes_bits_alu_src1 = vlSymsp->TOP__Main__cpucore__ID.__PVT__toes_bits_alu_src1;
    vlSelf->__PVT__ID_toes_bits_mem_wdata = vlSymsp->TOP__Main__cpucore__ID.__PVT__toes_bits_mem_wdata;
    vlSelf->__PVT__ID_toes_bits_alu_src2 = vlSymsp->TOP__Main__cpucore__ID.__PVT__toes_bits_alu_src2;
    vlSelf->__PVT__ID_br_target = vlSymsp->TOP__Main__cpucore__ID.__PVT__br_target;
    vlSelf->__PVT__ID_br_taken = vlSymsp->TOP__Main__cpucore__ID.__PVT__br_taken;
    vlSelf->__PVT__MEM_ms_bits_dpi_c_inst = vlSelf->__PVT__EXE_toms_bits_dpi_c_inst;
    vlSelf->__PVT__MEM_ms_bits_rf_we = vlSelf->__PVT__EXE_toms_bits_rf_we;
    vlSelf->__PVT__MEM_ms_bits_res_from_mem = vlSelf->__PVT__EXE_toms_bits_res_from_mem;
    vlSelf->__PVT__data_sram_en = vlSelf->__PVT__EXE_data_sram_en;
    vlSelf->__PVT__data_sram_wr = vlSelf->__PVT__EXE_data_sram_wr;
    vlSelf->__PVT__MEM_ms_bits_inst_name = vlSelf->__PVT__EXE_toms_bits_inst_name;
    vlSelf->__PVT__MEM_ms_bits_rf_waddr = vlSelf->__PVT__EXE_toms_bits_rf_waddr;
    vlSelf->__PVT__MEM_ms_bits_dpi_c_is_break = vlSelf->__PVT__EXE_toms_bits_dpi_c_is_break;
    vlSelf->__PVT__data_sram_wstrb = vlSelf->__PVT__EXE_data_sram_wstrb;
    vlSelf->__PVT__WB_ws_valid = vlSelf->__PVT__MEM_tows_valid;
    vlSelf->__PVT__EXE_es_bits_alu_src1 = vlSelf->__PVT__ID_toes_bits_alu_src1;
    vlSelf->__PVT__EXE_es_bits_mem_wdata = vlSelf->__PVT__ID_toes_bits_mem_wdata;
    vlSelf->__PVT__EXE_es_bits_alu_src2 = vlSelf->__PVT__ID_toes_bits_alu_src2;
    vlSelf->__PVT__pIF_br_target = vlSelf->__PVT__ID_br_target;
    vlSelf->__PVT__pIF_br_taken = vlSelf->__PVT__ID_br_taken;
    vlSymsp->TOP__Main__cpucore__MEM.__PVT__ms_bits_dpi_c_inst 
        = vlSelf->__PVT__MEM_ms_bits_dpi_c_inst;
    vlSymsp->TOP__Main__cpucore__MEM.__PVT__ms_bits_rf_we 
        = vlSelf->__PVT__MEM_ms_bits_rf_we;
    vlSymsp->TOP__Main__cpucore__MEM.__PVT__ms_bits_res_from_mem 
        = vlSelf->__PVT__MEM_ms_bits_res_from_mem;
    vlSymsp->TOP__Main__cpucore__MEM.__PVT__ms_bits_inst_name 
        = vlSelf->__PVT__MEM_ms_bits_inst_name;
    vlSymsp->TOP__Main__cpucore__MEM.__PVT__ms_bits_rf_waddr 
        = vlSelf->__PVT__MEM_ms_bits_rf_waddr;
    vlSymsp->TOP__Main__cpucore__MEM.__PVT__ms_bits_dpi_c_is_break 
        = vlSelf->__PVT__MEM_ms_bits_dpi_c_is_break;
    vlSymsp->TOP__Main__cpucore__WB.__PVT__ws_valid 
        = vlSelf->__PVT__WB_ws_valid;
    vlSymsp->TOP__Main__cpucore__EXE.__PVT__es_bits_alu_src1 
        = vlSelf->__PVT__EXE_es_bits_alu_src1;
    vlSymsp->TOP__Main__cpucore__EXE.__PVT__es_bits_mem_wdata 
        = vlSelf->__PVT__EXE_es_bits_mem_wdata;
    vlSymsp->TOP__Main__cpucore__EXE.__PVT__es_bits_alu_src2 
        = vlSelf->__PVT__EXE_es_bits_alu_src2;
    vlSymsp->TOP__Main__cpucore__pIF.__PVT__br_target 
        = vlSelf->__PVT__pIF_br_target;
    vlSymsp->TOP__Main__cpucore__pIF.__PVT__br_taken 
        = vlSelf->__PVT__pIF_br_taken;
}

VL_ATTR_COLD void VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__6(VMain_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__6\n"); );
    // Body
    vlSelf->__PVT__MEM_tows_bits_dpi_c_inst = vlSymsp->TOP__Main__cpucore__MEM.__PVT__tows_bits_dpi_c_inst;
    vlSelf->__PVT__MEM_tows_bits_rf_we = vlSymsp->TOP__Main__cpucore__MEM.__PVT__tows_bits_rf_we;
    vlSelf->__PVT__MEM_tows_bits_rf_waddr = vlSymsp->TOP__Main__cpucore__MEM.__PVT__tows_bits_rf_waddr;
    vlSelf->__PVT__MEM_tows_bits_dpi_c_is_break = vlSymsp->TOP__Main__cpucore__MEM.__PVT__tows_bits_dpi_c_is_break;
    vlSelf->__PVT__WB_torf_valid = vlSymsp->TOP__Main__cpucore__WB.__PVT__torf_valid;
    vlSelf->__PVT__EXE_data_sram_wdata = vlSymsp->TOP__Main__cpucore__EXE.__PVT__data_sram_wdata;
    vlSelf->__PVT__pIF_tofs_bits_next_pc = vlSymsp->TOP__Main__cpucore__pIF.__PVT__tofs_bits_next_pc;
    vlSelf->__PVT__WB_ws_bits_dpi_c_inst = vlSelf->__PVT__MEM_tows_bits_dpi_c_inst;
    vlSelf->__PVT__WB_ws_bits_rf_we = vlSelf->__PVT__MEM_tows_bits_rf_we;
    vlSelf->__PVT__WB_ws_bits_rf_waddr = vlSelf->__PVT__MEM_tows_bits_rf_waddr;
    vlSelf->__PVT__WB_ws_bits_dpi_c_is_break = vlSelf->__PVT__MEM_tows_bits_dpi_c_is_break;
    vlSelf->__PVT__ID_torf_valid = vlSelf->__PVT__WB_torf_valid;
    vlSelf->__PVT__data_sram_wdata = vlSelf->__PVT__EXE_data_sram_wdata;
    vlSelf->__PVT__IF_fs_bits_next_pc = vlSelf->__PVT__pIF_tofs_bits_next_pc;
    vlSymsp->TOP__Main__cpucore__WB.__PVT__ws_bits_dpi_c_inst 
        = vlSelf->__PVT__WB_ws_bits_dpi_c_inst;
    vlSymsp->TOP__Main__cpucore__WB.__PVT__ws_bits_rf_we 
        = vlSelf->__PVT__WB_ws_bits_rf_we;
    vlSymsp->TOP__Main__cpucore__WB.__PVT__ws_bits_rf_waddr 
        = vlSelf->__PVT__WB_ws_bits_rf_waddr;
    vlSymsp->TOP__Main__cpucore__WB.__PVT__ws_bits_dpi_c_is_break 
        = vlSelf->__PVT__WB_ws_bits_dpi_c_is_break;
    vlSymsp->TOP__Main__cpucore__ID.__PVT__torf_valid 
        = vlSelf->__PVT__ID_torf_valid;
    vlSymsp->TOP__Main__cpucore__IF.__PVT__fs_bits_next_pc 
        = vlSelf->__PVT__IF_fs_bits_next_pc;
}

VL_ATTR_COLD void VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__7(VMain_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__7\n"); );
    // Body
    vlSelf->__PVT__WB_torf_dpi_c_inst = vlSymsp->TOP__Main__cpucore__WB.__PVT__torf_dpi_c_inst;
    vlSelf->__PVT__WB_torf_rf_we = vlSymsp->TOP__Main__cpucore__WB.__PVT__torf_rf_we;
    vlSelf->__PVT__WB_torf_rf_waddr = vlSymsp->TOP__Main__cpucore__WB.__PVT__torf_rf_waddr;
    vlSelf->__PVT__WB_torf_dpi_c_is_break = vlSymsp->TOP__Main__cpucore__WB.__PVT__torf_dpi_c_is_break;
    vlSelf->__PVT__IF_tods_bits_next_pc = vlSymsp->TOP__Main__cpucore__IF.__PVT__tods_bits_next_pc;
    vlSelf->__PVT__EXE_toms_bits_alu_res = vlSymsp->TOP__Main__cpucore__EXE.__PVT__toms_bits_alu_res;
    vlSelf->__PVT__EXE_data_sram_addr = vlSymsp->TOP__Main__cpucore__EXE.__PVT__data_sram_addr;
    vlSelf->__PVT__ID_torf_dpi_c_inst = vlSelf->__PVT__WB_torf_dpi_c_inst;
    vlSelf->__PVT__ID_torf_rf_we = vlSelf->__PVT__WB_torf_rf_we;
    vlSelf->__PVT__ID_torf_rf_waddr = vlSelf->__PVT__WB_torf_rf_waddr;
    vlSelf->__PVT__ID_torf_dpi_c_is_break = vlSelf->__PVT__WB_torf_dpi_c_is_break;
    vlSelf->__PVT__ID_ds_bits_next_pc = vlSelf->__PVT__IF_tods_bits_next_pc;
    vlSelf->__PVT__MEM_ms_bits_alu_res = vlSelf->__PVT__EXE_toms_bits_alu_res;
    vlSelf->__PVT__data_sram_addr = vlSelf->__PVT__EXE_data_sram_addr;
    vlSymsp->TOP__Main__cpucore__ID.__PVT__torf_dpi_c_inst 
        = vlSelf->__PVT__ID_torf_dpi_c_inst;
    vlSymsp->TOP__Main__cpucore__ID.__PVT__torf_rf_we 
        = vlSelf->__PVT__ID_torf_rf_we;
    vlSymsp->TOP__Main__cpucore__ID.__PVT__torf_rf_waddr 
        = vlSelf->__PVT__ID_torf_rf_waddr;
    vlSymsp->TOP__Main__cpucore__ID.__PVT__torf_dpi_c_is_break 
        = vlSelf->__PVT__ID_torf_dpi_c_is_break;
    vlSymsp->TOP__Main__cpucore__ID.__PVT__ds_bits_next_pc 
        = vlSelf->__PVT__ID_ds_bits_next_pc;
    vlSymsp->TOP__Main__cpucore__MEM.__PVT__ms_bits_alu_res 
        = vlSelf->__PVT__MEM_ms_bits_alu_res;
}

VL_ATTR_COLD void VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__8(VMain_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__8\n"); );
    // Body
    vlSelf->__PVT__ID_toes_bits_dpi_c_next_pc = vlSymsp->TOP__Main__cpucore__ID.__PVT__toes_bits_dpi_c_next_pc;
    vlSelf->__PVT__EXE_es_bits_dpi_c_next_pc = vlSelf->__PVT__ID_toes_bits_dpi_c_next_pc;
    vlSymsp->TOP__Main__cpucore__EXE.__PVT__es_bits_dpi_c_next_pc 
        = vlSelf->__PVT__EXE_es_bits_dpi_c_next_pc;
}

VL_ATTR_COLD void VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__9(VMain_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__9\n"); );
    // Body
    vlSelf->__PVT__MEM_data_sram_rdata = vlSelf->__PVT__data_sram_rdata;
    vlSelf->__PVT__EXE_toms_bits_dpi_c_next_pc = vlSymsp->TOP__Main__cpucore__EXE.__PVT__toms_bits_dpi_c_next_pc;
    vlSymsp->TOP__Main__cpucore__MEM.__PVT__data_sram_rdata 
        = vlSelf->__PVT__MEM_data_sram_rdata;
    vlSelf->__PVT__MEM_ms_bits_dpi_c_next_pc = vlSelf->__PVT__EXE_toms_bits_dpi_c_next_pc;
    vlSymsp->TOP__Main__cpucore__MEM.__PVT__ms_bits_dpi_c_next_pc 
        = vlSelf->__PVT__MEM_ms_bits_dpi_c_next_pc;
}

VL_ATTR_COLD void VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__10(VMain_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__10\n"); );
    // Body
    vlSelf->__PVT__MEM_tows_bits_dpi_c_next_pc = vlSymsp->TOP__Main__cpucore__MEM.__PVT__tows_bits_dpi_c_next_pc;
    vlSelf->__PVT__MEM_tows_bits_rf_wdata = vlSymsp->TOP__Main__cpucore__MEM.__PVT__tows_bits_rf_wdata;
    vlSelf->__PVT__WB_ws_bits_dpi_c_next_pc = vlSelf->__PVT__MEM_tows_bits_dpi_c_next_pc;
    vlSelf->__PVT__WB_ws_bits_rf_wdata = vlSelf->__PVT__MEM_tows_bits_rf_wdata;
    vlSymsp->TOP__Main__cpucore__WB.__PVT__ws_bits_dpi_c_next_pc 
        = vlSelf->__PVT__WB_ws_bits_dpi_c_next_pc;
    vlSymsp->TOP__Main__cpucore__WB.__PVT__ws_bits_rf_wdata 
        = vlSelf->__PVT__WB_ws_bits_rf_wdata;
}

VL_ATTR_COLD void VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__11(VMain_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__11\n"); );
    // Body
    vlSelf->__PVT__WB_torf_dpi_c_next_pc = vlSymsp->TOP__Main__cpucore__WB.__PVT__torf_dpi_c_next_pc;
    vlSelf->__PVT__WB_torf_rf_wdata = vlSymsp->TOP__Main__cpucore__WB.__PVT__torf_rf_wdata;
    vlSelf->__PVT__ID_torf_dpi_c_next_pc = vlSelf->__PVT__WB_torf_dpi_c_next_pc;
    vlSelf->__PVT__ID_torf_rf_wdata = vlSelf->__PVT__WB_torf_rf_wdata;
    vlSymsp->TOP__Main__cpucore__ID.__PVT__torf_dpi_c_next_pc 
        = vlSelf->__PVT__ID_torf_dpi_c_next_pc;
    vlSymsp->TOP__Main__cpucore__ID.__PVT__torf_rf_wdata 
        = vlSelf->__PVT__ID_torf_rf_wdata;
}
