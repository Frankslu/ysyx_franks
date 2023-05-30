// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMain__Syms.h"


VL_ATTR_COLD void VMain___024root__trace_init_sub__TOP__0(VMain___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+262,"clock", false,-1);
    tracep->declBit(c+263,"reset", false,-1);
    tracep->pushNamePrefix("Main ");
    tracep->declBit(c+262,"clock", false,-1);
    tracep->declBit(c+263,"reset", false,-1);
    tracep->declBit(c+262,"cpucore_clock", false,-1);
    tracep->declBit(c+263,"cpucore_reset", false,-1);
    tracep->declBit(c+1,"cpucore_inst_sram_en", false,-1);
    tracep->declBus(c+2,"cpucore_inst_sram_addr", false,-1, 31,0);
    tracep->declBus(c+3,"cpucore_inst_sram_rdata", false,-1, 31,0);
    tracep->declBit(c+4,"cpucore_data_sram_en", false,-1);
    tracep->declBit(c+5,"cpucore_data_sram_wr", false,-1);
    tracep->declBus(c+6,"cpucore_data_sram_addr", false,-1, 31,0);
    tracep->declBus(c+7,"cpucore_data_sram_wdata", false,-1, 31,0);
    tracep->declBus(c+8,"cpucore_data_sram_wstrb", false,-1, 3,0);
    tracep->declBus(c+9,"cpucore_data_sram_rdata", false,-1, 31,0);
    tracep->declBit(c+4,"dram_en", false,-1);
    tracep->declBit(c+5,"dram_wr", false,-1);
    tracep->declBus(c+6,"dram_addr", false,-1, 31,0);
    tracep->declBus(c+7,"dram_wdata", false,-1, 31,0);
    tracep->declBus(c+8,"dram_wstrb", false,-1, 3,0);
    tracep->declBus(c+9,"dram_rdata", false,-1, 31,0);
    tracep->declBit(c+1,"iram_en", false,-1);
    tracep->declBit(c+265,"iram_wr", false,-1);
    tracep->declBus(c+2,"iram_addr", false,-1, 31,0);
    tracep->declBus(c+266,"iram_wdata", false,-1, 31,0);
    tracep->declBus(c+267,"iram_wstrb", false,-1, 3,0);
    tracep->declBus(c+3,"iram_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("cpucore ");
    tracep->declBit(c+262,"clock", false,-1);
    tracep->declBit(c+263,"reset", false,-1);
    tracep->declBit(c+1,"inst_sram_en", false,-1);
    tracep->declBus(c+2,"inst_sram_addr", false,-1, 31,0);
    tracep->declBus(c+3,"inst_sram_rdata", false,-1, 31,0);
    tracep->declBit(c+4,"data_sram_en", false,-1);
    tracep->declBit(c+5,"data_sram_wr", false,-1);
    tracep->declBus(c+6,"data_sram_addr", false,-1, 31,0);
    tracep->declBus(c+7,"data_sram_wdata", false,-1, 31,0);
    tracep->declBus(c+8,"data_sram_wstrb", false,-1, 3,0);
    tracep->declBus(c+9,"data_sram_rdata", false,-1, 31,0);
    tracep->declBit(c+262,"pIF_clock", false,-1);
    tracep->declBit(c+263,"pIF_reset", false,-1);
    tracep->declBit(c+10,"pIF_br_taken", false,-1);
    tracep->declBus(c+11,"pIF_br_target", false,-1, 31,0);
    tracep->declBit(c+1,"pIF_inst_sram_en", false,-1);
    tracep->declBus(c+2,"pIF_inst_sram_addr", false,-1, 31,0);
    tracep->declBit(c+264,"pIF_tofs_valid", false,-1);
    tracep->declBus(c+2,"pIF_tofs_bits_pc", false,-1, 31,0);
    tracep->declBus(c+12,"pIF_tofs_bits_next_pc", false,-1, 31,0);
    tracep->declBit(c+264,"IF_tods_valid", false,-1);
    tracep->declBus(c+2,"IF_tods_bits_pc", false,-1, 31,0);
    tracep->declBus(c+3,"IF_tods_bits_inst", false,-1, 31,0);
    tracep->declBus(c+12,"IF_tods_bits_next_pc", false,-1, 31,0);
    tracep->declBus(c+3,"IF_inst_sram_rdata", false,-1, 31,0);
    tracep->declBit(c+264,"IF_fs_valid", false,-1);
    tracep->declBus(c+2,"IF_fs_bits_pc", false,-1, 31,0);
    tracep->declBus(c+12,"IF_fs_bits_next_pc", false,-1, 31,0);
    tracep->declBit(c+262,"ID_clock", false,-1);
    tracep->declBit(c+264,"ID_toes_valid", false,-1);
    tracep->declBus(c+13,"ID_toes_bits_alu_src1", false,-1, 31,0);
    tracep->declBus(c+14,"ID_toes_bits_alu_src2", false,-1, 31,0);
    tracep->declBus(c+15,"ID_toes_bits_alu_op", false,-1, 4,0);
    tracep->declBus(c+16,"ID_toes_bits_rf_waddr", false,-1, 4,0);
    tracep->declBit(c+17,"ID_toes_bits_rf_we", false,-1);
    tracep->declBus(c+18,"ID_toes_bits_mem_we", false,-1, 1,0);
    tracep->declBus(c+19,"ID_toes_bits_inst_name", false,-1, 4,0);
    tracep->declBus(c+7,"ID_toes_bits_mem_wdata", false,-1, 31,0);
    tracep->declBit(c+20,"ID_toes_bits_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"ID_toes_bits_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"ID_toes_bits_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+264,"ID_ds_valid", false,-1);
    tracep->declBus(c+2,"ID_ds_bits_pc", false,-1, 31,0);
    tracep->declBus(c+3,"ID_ds_bits_inst", false,-1, 31,0);
    tracep->declBus(c+12,"ID_ds_bits_next_pc", false,-1, 31,0);
    tracep->declBit(c+17,"ID_torf_rf_we", false,-1);
    tracep->declBus(c+16,"ID_torf_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+21,"ID_torf_rf_wdata", false,-1, 31,0);
    tracep->declBit(c+264,"ID_torf_valid", false,-1);
    tracep->declBit(c+20,"ID_torf_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"ID_torf_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"ID_torf_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+10,"ID_br_taken", false,-1);
    tracep->declBus(c+11,"ID_br_target", false,-1, 31,0);
    tracep->declBit(c+264,"EXE_es_valid", false,-1);
    tracep->declBus(c+13,"EXE_es_bits_alu_src1", false,-1, 31,0);
    tracep->declBus(c+14,"EXE_es_bits_alu_src2", false,-1, 31,0);
    tracep->declBus(c+15,"EXE_es_bits_alu_op", false,-1, 4,0);
    tracep->declBus(c+16,"EXE_es_bits_rf_waddr", false,-1, 4,0);
    tracep->declBit(c+17,"EXE_es_bits_rf_we", false,-1);
    tracep->declBus(c+18,"EXE_es_bits_mem_we", false,-1, 1,0);
    tracep->declBus(c+19,"EXE_es_bits_inst_name", false,-1, 4,0);
    tracep->declBus(c+7,"EXE_es_bits_mem_wdata", false,-1, 31,0);
    tracep->declBit(c+20,"EXE_es_bits_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"EXE_es_bits_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"EXE_es_bits_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+264,"EXE_toms_valid", false,-1);
    tracep->declBus(c+6,"EXE_toms_bits_alu_res", false,-1, 31,0);
    tracep->declBus(c+19,"EXE_toms_bits_inst_name", false,-1, 4,0);
    tracep->declBit(c+22,"EXE_toms_bits_res_from_mem", false,-1);
    tracep->declBit(c+17,"EXE_toms_bits_rf_we", false,-1);
    tracep->declBus(c+16,"EXE_toms_bits_rf_waddr", false,-1, 4,0);
    tracep->declBit(c+20,"EXE_toms_bits_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"EXE_toms_bits_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"EXE_toms_bits_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+4,"EXE_data_sram_en", false,-1);
    tracep->declBit(c+5,"EXE_data_sram_wr", false,-1);
    tracep->declBus(c+6,"EXE_data_sram_addr", false,-1, 31,0);
    tracep->declBus(c+7,"EXE_data_sram_wdata", false,-1, 31,0);
    tracep->declBus(c+8,"EXE_data_sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+264,"MEM_ms_valid", false,-1);
    tracep->declBus(c+6,"MEM_ms_bits_alu_res", false,-1, 31,0);
    tracep->declBus(c+19,"MEM_ms_bits_inst_name", false,-1, 4,0);
    tracep->declBit(c+22,"MEM_ms_bits_res_from_mem", false,-1);
    tracep->declBit(c+17,"MEM_ms_bits_rf_we", false,-1);
    tracep->declBus(c+16,"MEM_ms_bits_rf_waddr", false,-1, 4,0);
    tracep->declBit(c+20,"MEM_ms_bits_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"MEM_ms_bits_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"MEM_ms_bits_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+264,"MEM_tows_valid", false,-1);
    tracep->declBit(c+17,"MEM_tows_bits_rf_we", false,-1);
    tracep->declBus(c+16,"MEM_tows_bits_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+21,"MEM_tows_bits_rf_wdata", false,-1, 31,0);
    tracep->declBit(c+20,"MEM_tows_bits_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"MEM_tows_bits_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"MEM_tows_bits_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBus(c+9,"MEM_data_sram_rdata", false,-1, 31,0);
    tracep->declBit(c+264,"WB_ws_valid", false,-1);
    tracep->declBit(c+17,"WB_ws_bits_rf_we", false,-1);
    tracep->declBus(c+16,"WB_ws_bits_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+21,"WB_ws_bits_rf_wdata", false,-1, 31,0);
    tracep->declBit(c+20,"WB_ws_bits_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"WB_ws_bits_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"WB_ws_bits_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+17,"WB_torf_rf_we", false,-1);
    tracep->declBus(c+16,"WB_torf_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+21,"WB_torf_rf_wdata", false,-1, 31,0);
    tracep->declBit(c+264,"WB_torf_valid", false,-1);
    tracep->declBit(c+20,"WB_torf_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"WB_torf_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"WB_torf_dpi_c_next_pc", false,-1, 31,0);
    tracep->pushNamePrefix("EXE ");
    tracep->declBit(c+264,"es_valid", false,-1);
    tracep->declBus(c+13,"es_bits_alu_src1", false,-1, 31,0);
    tracep->declBus(c+14,"es_bits_alu_src2", false,-1, 31,0);
    tracep->declBus(c+15,"es_bits_alu_op", false,-1, 4,0);
    tracep->declBus(c+16,"es_bits_rf_waddr", false,-1, 4,0);
    tracep->declBit(c+17,"es_bits_rf_we", false,-1);
    tracep->declBus(c+18,"es_bits_mem_we", false,-1, 1,0);
    tracep->declBus(c+19,"es_bits_inst_name", false,-1, 4,0);
    tracep->declBus(c+7,"es_bits_mem_wdata", false,-1, 31,0);
    tracep->declBit(c+20,"es_bits_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"es_bits_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"es_bits_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+264,"toms_valid", false,-1);
    tracep->declBus(c+6,"toms_bits_alu_res", false,-1, 31,0);
    tracep->declBus(c+19,"toms_bits_inst_name", false,-1, 4,0);
    tracep->declBit(c+22,"toms_bits_res_from_mem", false,-1);
    tracep->declBit(c+17,"toms_bits_rf_we", false,-1);
    tracep->declBus(c+16,"toms_bits_rf_waddr", false,-1, 4,0);
    tracep->declBit(c+20,"toms_bits_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"toms_bits_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"toms_bits_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+4,"data_sram_en", false,-1);
    tracep->declBit(c+5,"data_sram_wr", false,-1);
    tracep->declBus(c+6,"data_sram_addr", false,-1, 31,0);
    tracep->declBus(c+7,"data_sram_wdata", false,-1, 31,0);
    tracep->declBus(c+8,"data_sram_wstrb", false,-1, 3,0);
    tracep->declBus(c+15,"alu_io_alu_op", false,-1, 4,0);
    tracep->declBus(c+13,"alu_io_src1", false,-1, 31,0);
    tracep->declBus(c+14,"alu_io_src2", false,-1, 31,0);
    tracep->declBus(c+6,"alu_io_res", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+15,"io_alu_op", false,-1, 4,0);
    tracep->declBus(c+13,"io_src1", false,-1, 31,0);
    tracep->declBus(c+14,"io_src2", false,-1, 31,0);
    tracep->declBus(c+6,"io_res", false,-1, 31,0);
    tracep->declBit(c+23,"op_add", false,-1);
    tracep->declBit(c+24,"op_sub", false,-1);
    tracep->declBit(c+25,"op_slt", false,-1);
    tracep->declBit(c+26,"op_sltu", false,-1);
    tracep->declBit(c+27,"op_and", false,-1);
    tracep->declBit(c+28,"op_nor", false,-1);
    tracep->declBit(c+29,"op_or", false,-1);
    tracep->declBit(c+30,"op_xor", false,-1);
    tracep->declBit(c+31,"op_sll", false,-1);
    tracep->declBit(c+32,"op_srl", false,-1);
    tracep->declBit(c+33,"op_sra", false,-1);
    tracep->declBit(c+34,"op_lui", false,-1);
    tracep->declBit(c+35,"op_mul", false,-1);
    tracep->declBit(c+36,"op_mulh", false,-1);
    tracep->declBit(c+37,"op_mulhu", false,-1);
    tracep->declBit(c+38,"op_div", false,-1);
    tracep->declBit(c+39,"op_mod", false,-1);
    tracep->declBit(c+40,"op_divu", false,-1);
    tracep->declBit(c+41,"op_modu", false,-1);
    tracep->declBit(c+42,"add_sub", false,-1);
    tracep->declQuad(c+43,"add_res", false,-1, 32,0);
    tracep->declBit(c+45,"slt_res", false,-1);
    tracep->declBit(c+46,"sltu_res", false,-1);
    tracep->declBus(c+47,"and_res", false,-1, 31,0);
    tracep->declBus(c+48,"or_res", false,-1, 31,0);
    tracep->declBus(c+49,"nor_res", false,-1, 31,0);
    tracep->declBus(c+50,"xor_res", false,-1, 31,0);
    tracep->declQuad(c+51,"sll_res", false,-1, 62,0);
    tracep->declQuad(c+53,"sr", false,-1, 63,0);
    tracep->declQuad(c+55,"sr_res", false,-1, 63,0);
    tracep->declQuad(c+57,"mul_pre", false,-1, 63,0);
    tracep->declBus(c+59,"mul_res", false,-1, 31,0);
    tracep->declBus(c+60,"mulhu_res", false,-1, 31,0);
    tracep->declBus(c+61,"mulh_res", false,-1, 31,0);
    tracep->declBus(c+62,"divu_res", false,-1, 31,0);
    tracep->declBus(c+63,"modu_res", false,-1, 31,0);
    tracep->declBus(c+64,"mod_res", false,-1, 31,0);
    tracep->declBus(c+65,"div_res", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+262,"clock", false,-1);
    tracep->declBit(c+264,"toes_valid", false,-1);
    tracep->declBus(c+13,"toes_bits_alu_src1", false,-1, 31,0);
    tracep->declBus(c+14,"toes_bits_alu_src2", false,-1, 31,0);
    tracep->declBus(c+15,"toes_bits_alu_op", false,-1, 4,0);
    tracep->declBus(c+16,"toes_bits_rf_waddr", false,-1, 4,0);
    tracep->declBit(c+17,"toes_bits_rf_we", false,-1);
    tracep->declBus(c+18,"toes_bits_mem_we", false,-1, 1,0);
    tracep->declBus(c+19,"toes_bits_inst_name", false,-1, 4,0);
    tracep->declBus(c+7,"toes_bits_mem_wdata", false,-1, 31,0);
    tracep->declBit(c+20,"toes_bits_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"toes_bits_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"toes_bits_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+264,"ds_valid", false,-1);
    tracep->declBus(c+2,"ds_bits_pc", false,-1, 31,0);
    tracep->declBus(c+3,"ds_bits_inst", false,-1, 31,0);
    tracep->declBus(c+12,"ds_bits_next_pc", false,-1, 31,0);
    tracep->declBit(c+17,"torf_rf_we", false,-1);
    tracep->declBus(c+16,"torf_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+21,"torf_rf_wdata", false,-1, 31,0);
    tracep->declBit(c+264,"torf_valid", false,-1);
    tracep->declBit(c+20,"torf_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"torf_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"torf_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+10,"br_taken", false,-1);
    tracep->declBus(c+11,"br_target", false,-1, 31,0);
    tracep->declBit(c+262,"reg__clock", false,-1);
    tracep->declBus(c+66,"reg__io_raddr1", false,-1, 4,0);
    tracep->declBus(c+67,"reg__io_raddr2", false,-1, 4,0);
    tracep->declBus(c+68,"reg__io_rdata1", false,-1, 31,0);
    tracep->declBus(c+7,"reg__io_rdata2", false,-1, 31,0);
    tracep->declBus(c+69,"reg__io_waddr", false,-1, 4,0);
    tracep->declBus(c+21,"reg__io_wdata", false,-1, 31,0);
    tracep->declBit(c+17,"reg__io_wen", false,-1);
    tracep->declBus(c+12,"reg__io_rf_pc", false,-1, 31,0);
    tracep->declBit(c+20,"reg__io_is_break", false,-1);
    tracep->declBit(c+264,"reg__io_valid", false,-1);
    tracep->declBus(c+3,"reg__io_inst", false,-1, 31,0);
    tracep->declBus(c+66,"rj", false,-1, 4,0);
    tracep->declBus(c+70,"rd", false,-1, 4,0);
    tracep->declBus(c+71,"rk", false,-1, 4,0);
    tracep->declBus(c+72,"imm12u", false,-1, 11,0);
    tracep->declBus(c+73,"imm12", false,-1, 31,0);
    tracep->declBus(c+74,"imm16", false,-1, 31,0);
    tracep->declBus(c+75,"imm20u", false,-1, 31,0);
    tracep->declBus(c+75,"imm20", false,-1, 31,0);
    tracep->declBus(c+76,"imm26", false,-1, 31,0);
    tracep->declBus(c+77,"decode_res_invInputs", false,-1, 31,0);
    tracep->declBit(c+78,"decode_res_andMatrixInput_0", false,-1);
    tracep->declBit(c+79,"decode_res_andMatrixInput_1", false,-1);
    tracep->declBit(c+80,"decode_res_andMatrixInput_2", false,-1);
    tracep->declBit(c+81,"decode_res_andMatrixInput_3", false,-1);
    tracep->declBit(c+82,"decode_res_andMatrixInput_4", false,-1);
    tracep->declBit(c+83,"decode_res_andMatrixInput_5", false,-1);
    tracep->declBit(c+84,"decode_res_andMatrixInput_6", false,-1);
    tracep->declBit(c+85,"decode_res_andMatrixInput_7", false,-1);
    tracep->declBit(c+86,"decode_res_andMatrixInput_8", false,-1);
    tracep->declBit(c+87,"decode_res_andMatrixInput_9", false,-1);
    tracep->declBit(c+88,"decode_res_andMatrixInput_10", false,-1);
    tracep->declBit(c+89,"decode_res_andMatrixInput_11", false,-1);
    tracep->declBit(c+90,"decode_res_andMatrixInput_12", false,-1);
    tracep->declBit(c+91,"decode_res_andMatrixInput_13", false,-1);
    tracep->declBit(c+92,"decode_res_andMatrixInput_14", false,-1);
    tracep->declBus(c+93,"decode_res_lo", false,-1, 6,0);
    tracep->declBit(c+94,"decode_res_andMatrixInput_3_1", false,-1);
    tracep->declBus(c+95,"decode_res_lo_1", false,-1, 7,0);
    tracep->declBit(c+96,"decode_res_andMatrixInput_2_2", false,-1);
    tracep->declBit(c+97,"decode_res_andMatrixInput_1_4", false,-1);
    tracep->declBit(c+98,"decode_res_andMatrixInput_1_5", false,-1);
    tracep->declBit(c+99,"decode_res_andMatrixInput_0_7", false,-1);
    tracep->declBit(c+100,"decode_res_andMatrixInput_2_8", false,-1);
    tracep->declBit(c+101,"decode_res_andMatrixInput_3_18", false,-1);
    tracep->declBit(c+102,"decode_res_andMatrixInput_3_23", false,-1);
    tracep->declBit(c+103,"decode_res_andMatrixInput_4_23", false,-1);
    tracep->declBit(c+104,"decode_res_andMatrixInput_6_27", false,-1);
    tracep->declBit(c+105,"decode_res_andMatrixInput_2_31", false,-1);
    tracep->declBit(c+106,"decode_res_andMatrixInput_1_35", false,-1);
    tracep->declBit(c+107,"decode_res_andMatrixInput_1_36", false,-1);
    tracep->declBit(c+108,"decode_res_andMatrixInput_1_41", false,-1);
    tracep->declBit(c+109,"decode_res_andMatrixInput_2_41", false,-1);
    tracep->declBit(c+110,"decode_res_andMatrixInput_2_43", false,-1);
    tracep->declBit(c+111,"decode_res_andMatrixInput_5_44", false,-1);
    tracep->declBit(c+112,"decode_res_andMatrixInput_3_57", false,-1);
    tracep->declBus(c+113,"decode_res_orMatrixOutputs_lo_lo_hi", false,-1, 1,0);
    tracep->declBus(c+114,"decode_res_orMatrixOutputs_lo", false,-1, 7,0);
    tracep->declBus(c+115,"decode_res_orMatrixOutputs_hi_5", false,-1, 2,0);
    tracep->declBus(c+116,"decode_res_orMatrixOutputs_lo_6", false,-1, 6,0);
    tracep->declBus(c+117,"decode_res_orMatrixOutputs_lo_9", false,-1, 7,0);
    tracep->declBus(c+118,"decode_res_orMatrixOutputs_lo_10", false,-1, 5,0);
    tracep->declBus(c+119,"decode_res_orMatrixOutputs_lo_13", false,-1, 7,0);
    tracep->declBus(c+120,"decode_res_orMatrixOutputs", false,-1, 16,0);
    tracep->declBus(c+121,"decode_res_invMatrixOutputs_lo", false,-1, 7,0);
    tracep->declBus(c+122,"decode_res_invMatrixOutputs", false,-1, 16,0);
    tracep->declBus(c+123,"inst_type", false,-1, 3,0);
    tracep->declBus(c+18,"mem_we", false,-1, 1,0);
    tracep->declBus(c+19,"inst_name", false,-1, 4,0);
    tracep->declBus(c+124,"imm", false,-1, 31,0);
    tracep->declBit(c+125,"src2_is_rd", false,-1);
    tracep->declBit(c+126,"rj_eq_rd", false,-1);
    tracep->declQuad(c+127,"rj_sub_rd", false,-1, 32,0);
    tracep->declBit(c+129,"slt_res", false,-1);
    tracep->declBit(c+130,"sltu_res", false,-1);
    tracep->declBit(c+131,"src1_is_pc", false,-1);
    tracep->pushNamePrefix("reg_ ");
    tracep->declBit(c+262,"clock", false,-1);
    tracep->declBus(c+66,"io_raddr1", false,-1, 4,0);
    tracep->declBus(c+67,"io_raddr2", false,-1, 4,0);
    tracep->declBus(c+68,"io_rdata1", false,-1, 31,0);
    tracep->declBus(c+7,"io_rdata2", false,-1, 31,0);
    tracep->declBus(c+69,"io_waddr", false,-1, 4,0);
    tracep->declBus(c+21,"io_wdata", false,-1, 31,0);
    tracep->declBit(c+17,"io_wen", false,-1);
    tracep->declBus(c+12,"io_rf_pc", false,-1, 31,0);
    tracep->declBit(c+20,"io_is_break", false,-1);
    tracep->declBit(c+264,"io_valid", false,-1);
    tracep->declBus(c+3,"io_inst", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+132+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBit(c+268,"rf_io_rdata1_MPORT_en", false,-1);
    tracep->declBus(c+66,"rf_io_rdata1_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+164,"rf_io_rdata1_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_io_rdata2_MPORT_en", false,-1);
    tracep->declBus(c+67,"rf_io_rdata2_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+165,"rf_io_rdata2_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+269,"rf_difftest_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+166,"rf_difftest_io_rf_1_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+270,"rf_difftest_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+167,"rf_difftest_io_rf_2_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+271,"rf_difftest_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+168,"rf_difftest_io_rf_3_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+272,"rf_difftest_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+169,"rf_difftest_io_rf_4_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+273,"rf_difftest_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+170,"rf_difftest_io_rf_5_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+274,"rf_difftest_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+171,"rf_difftest_io_rf_6_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+275,"rf_difftest_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+172,"rf_difftest_io_rf_7_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+276,"rf_difftest_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+173,"rf_difftest_io_rf_8_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+277,"rf_difftest_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+174,"rf_difftest_io_rf_9_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+278,"rf_difftest_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+175,"rf_difftest_io_rf_10_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+279,"rf_difftest_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+176,"rf_difftest_io_rf_11_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+280,"rf_difftest_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+177,"rf_difftest_io_rf_12_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+281,"rf_difftest_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+178,"rf_difftest_io_rf_13_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+282,"rf_difftest_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+179,"rf_difftest_io_rf_14_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+283,"rf_difftest_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+180,"rf_difftest_io_rf_15_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+284,"rf_difftest_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+181,"rf_difftest_io_rf_16_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+285,"rf_difftest_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+182,"rf_difftest_io_rf_17_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+286,"rf_difftest_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+183,"rf_difftest_io_rf_18_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+287,"rf_difftest_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+184,"rf_difftest_io_rf_19_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+288,"rf_difftest_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+185,"rf_difftest_io_rf_20_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+289,"rf_difftest_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+186,"rf_difftest_io_rf_21_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+290,"rf_difftest_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+187,"rf_difftest_io_rf_22_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+291,"rf_difftest_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+188,"rf_difftest_io_rf_23_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+292,"rf_difftest_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+189,"rf_difftest_io_rf_24_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+293,"rf_difftest_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+190,"rf_difftest_io_rf_25_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+294,"rf_difftest_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+191,"rf_difftest_io_rf_26_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+295,"rf_difftest_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+192,"rf_difftest_io_rf_27_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+296,"rf_difftest_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+193,"rf_difftest_io_rf_28_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+297,"rf_difftest_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+194,"rf_difftest_io_rf_29_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+298,"rf_difftest_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+195,"rf_difftest_io_rf_30_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+268,"rf_difftest_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+299,"rf_difftest_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+196,"rf_difftest_io_rf_31_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+21,"rf_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+69,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+268,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+17,"rf_MPORT_en", false,-1);
    tracep->declBus(c+266,"difftest_rf_0", false,-1, 31,0);
    tracep->declBus(c+197,"difftest_rf_1", false,-1, 31,0);
    tracep->declBus(c+198,"difftest_rf_2", false,-1, 31,0);
    tracep->declBus(c+199,"difftest_rf_3", false,-1, 31,0);
    tracep->declBus(c+200,"difftest_rf_4", false,-1, 31,0);
    tracep->declBus(c+201,"difftest_rf_5", false,-1, 31,0);
    tracep->declBus(c+202,"difftest_rf_6", false,-1, 31,0);
    tracep->declBus(c+203,"difftest_rf_7", false,-1, 31,0);
    tracep->declBus(c+204,"difftest_rf_8", false,-1, 31,0);
    tracep->declBus(c+205,"difftest_rf_9", false,-1, 31,0);
    tracep->declBus(c+206,"difftest_rf_10", false,-1, 31,0);
    tracep->declBus(c+207,"difftest_rf_11", false,-1, 31,0);
    tracep->declBus(c+208,"difftest_rf_12", false,-1, 31,0);
    tracep->declBus(c+209,"difftest_rf_13", false,-1, 31,0);
    tracep->declBus(c+210,"difftest_rf_14", false,-1, 31,0);
    tracep->declBus(c+211,"difftest_rf_15", false,-1, 31,0);
    tracep->declBus(c+212,"difftest_rf_16", false,-1, 31,0);
    tracep->declBus(c+213,"difftest_rf_17", false,-1, 31,0);
    tracep->declBus(c+214,"difftest_rf_18", false,-1, 31,0);
    tracep->declBus(c+215,"difftest_rf_19", false,-1, 31,0);
    tracep->declBus(c+216,"difftest_rf_20", false,-1, 31,0);
    tracep->declBus(c+217,"difftest_rf_21", false,-1, 31,0);
    tracep->declBus(c+218,"difftest_rf_22", false,-1, 31,0);
    tracep->declBus(c+219,"difftest_rf_23", false,-1, 31,0);
    tracep->declBus(c+220,"difftest_rf_24", false,-1, 31,0);
    tracep->declBus(c+221,"difftest_rf_25", false,-1, 31,0);
    tracep->declBus(c+222,"difftest_rf_26", false,-1, 31,0);
    tracep->declBus(c+223,"difftest_rf_27", false,-1, 31,0);
    tracep->declBus(c+224,"difftest_rf_28", false,-1, 31,0);
    tracep->declBus(c+225,"difftest_rf_29", false,-1, 31,0);
    tracep->declBus(c+226,"difftest_rf_30", false,-1, 31,0);
    tracep->declBus(c+227,"difftest_rf_31", false,-1, 31,0);
    tracep->declBit(c+20,"npc_brk_is_break", false,-1);
    tracep->declBit(c+264,"inst_exec_once_valid", false,-1);
    tracep->declBus(c+3,"inst_exec_once_inst", false,-1, 31,0);
    tracep->declBus(c+12,"inst_exec_once_pc", false,-1, 31,0);
    tracep->pushNamePrefix("difftest ");
    tracep->declBus(c+266,"rf_0", false,-1, 31,0);
    tracep->declBus(c+197,"rf_1", false,-1, 31,0);
    tracep->declBus(c+198,"rf_2", false,-1, 31,0);
    tracep->declBus(c+199,"rf_3", false,-1, 31,0);
    tracep->declBus(c+200,"rf_4", false,-1, 31,0);
    tracep->declBus(c+201,"rf_5", false,-1, 31,0);
    tracep->declBus(c+202,"rf_6", false,-1, 31,0);
    tracep->declBus(c+203,"rf_7", false,-1, 31,0);
    tracep->declBus(c+204,"rf_8", false,-1, 31,0);
    tracep->declBus(c+205,"rf_9", false,-1, 31,0);
    tracep->declBus(c+206,"rf_10", false,-1, 31,0);
    tracep->declBus(c+207,"rf_11", false,-1, 31,0);
    tracep->declBus(c+208,"rf_12", false,-1, 31,0);
    tracep->declBus(c+209,"rf_13", false,-1, 31,0);
    tracep->declBus(c+210,"rf_14", false,-1, 31,0);
    tracep->declBus(c+211,"rf_15", false,-1, 31,0);
    tracep->declBus(c+212,"rf_16", false,-1, 31,0);
    tracep->declBus(c+213,"rf_17", false,-1, 31,0);
    tracep->declBus(c+214,"rf_18", false,-1, 31,0);
    tracep->declBus(c+215,"rf_19", false,-1, 31,0);
    tracep->declBus(c+216,"rf_20", false,-1, 31,0);
    tracep->declBus(c+217,"rf_21", false,-1, 31,0);
    tracep->declBus(c+218,"rf_22", false,-1, 31,0);
    tracep->declBus(c+219,"rf_23", false,-1, 31,0);
    tracep->declBus(c+220,"rf_24", false,-1, 31,0);
    tracep->declBus(c+221,"rf_25", false,-1, 31,0);
    tracep->declBus(c+222,"rf_26", false,-1, 31,0);
    tracep->declBus(c+223,"rf_27", false,-1, 31,0);
    tracep->declBus(c+224,"rf_28", false,-1, 31,0);
    tracep->declBus(c+225,"rf_29", false,-1, 31,0);
    tracep->declBus(c+226,"rf_30", false,-1, 31,0);
    tracep->declBus(c+227,"rf_31", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+228+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_exec_once ");
    tracep->declBit(c+264,"valid", false,-1);
    tracep->declBus(c+12,"pc", false,-1, 31,0);
    tracep->declBus(c+3,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("npc_brk ");
    tracep->declBit(c+20,"is_break", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+264,"tods_valid", false,-1);
    tracep->declBus(c+2,"tods_bits_pc", false,-1, 31,0);
    tracep->declBus(c+3,"tods_bits_inst", false,-1, 31,0);
    tracep->declBus(c+12,"tods_bits_next_pc", false,-1, 31,0);
    tracep->declBus(c+3,"inst_sram_rdata", false,-1, 31,0);
    tracep->declBit(c+264,"fs_valid", false,-1);
    tracep->declBus(c+2,"fs_bits_pc", false,-1, 31,0);
    tracep->declBus(c+12,"fs_bits_next_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+264,"ms_valid", false,-1);
    tracep->declBus(c+6,"ms_bits_alu_res", false,-1, 31,0);
    tracep->declBus(c+19,"ms_bits_inst_name", false,-1, 4,0);
    tracep->declBit(c+22,"ms_bits_res_from_mem", false,-1);
    tracep->declBit(c+17,"ms_bits_rf_we", false,-1);
    tracep->declBus(c+16,"ms_bits_rf_waddr", false,-1, 4,0);
    tracep->declBit(c+20,"ms_bits_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"ms_bits_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"ms_bits_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+264,"tows_valid", false,-1);
    tracep->declBit(c+17,"tows_bits_rf_we", false,-1);
    tracep->declBus(c+16,"tows_bits_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+21,"tows_bits_rf_wdata", false,-1, 31,0);
    tracep->declBit(c+20,"tows_bits_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"tows_bits_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"tows_bits_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBus(c+9,"data_sram_rdata", false,-1, 31,0);
    tracep->declBus(c+260,"mem_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+264,"ws_valid", false,-1);
    tracep->declBit(c+17,"ws_bits_rf_we", false,-1);
    tracep->declBus(c+16,"ws_bits_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+21,"ws_bits_rf_wdata", false,-1, 31,0);
    tracep->declBit(c+20,"ws_bits_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"ws_bits_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"ws_bits_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+17,"torf_rf_we", false,-1);
    tracep->declBus(c+16,"torf_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+21,"torf_rf_wdata", false,-1, 31,0);
    tracep->declBit(c+264,"torf_valid", false,-1);
    tracep->declBit(c+20,"torf_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"torf_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"torf_dpi_c_next_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pIF ");
    tracep->declBit(c+262,"clock", false,-1);
    tracep->declBit(c+263,"reset", false,-1);
    tracep->declBit(c+10,"br_taken", false,-1);
    tracep->declBus(c+11,"br_target", false,-1, 31,0);
    tracep->declBit(c+1,"inst_sram_en", false,-1);
    tracep->declBus(c+2,"inst_sram_addr", false,-1, 31,0);
    tracep->declBit(c+264,"tofs_valid", false,-1);
    tracep->declBus(c+2,"tofs_bits_pc", false,-1, 31,0);
    tracep->declBus(c+12,"tofs_bits_next_pc", false,-1, 31,0);
    tracep->declBus(c+2,"pc", false,-1, 31,0);
    tracep->declBus(c+261,"snpc", false,-1, 31,0);
    tracep->declBit(c+1,"inst_sram_en_REG", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("dram ");
    tracep->declBit(c+4,"en", false,-1);
    tracep->declBit(c+5,"wr", false,-1);
    tracep->declBus(c+6,"addr", false,-1, 31,0);
    tracep->declBus(c+7,"wdata", false,-1, 31,0);
    tracep->declBus(c+8,"wstrb", false,-1, 3,0);
    tracep->declBus(c+9,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("iram ");
    tracep->declBit(c+1,"en", false,-1);
    tracep->declBit(c+265,"wr", false,-1);
    tracep->declBus(c+2,"addr", false,-1, 31,0);
    tracep->declBus(c+266,"wdata", false,-1, 31,0);
    tracep->declBus(c+267,"wstrb", false,-1, 3,0);
    tracep->declBus(c+3,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VMain___024root__trace_init_top(VMain___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root__trace_init_top\n"); );
    // Body
    VMain___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VMain___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VMain___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VMain___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VMain___024root__trace_register(VMain___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VMain___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VMain___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VMain___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VMain___024root__trace_full_sub_0(VMain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VMain___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root__trace_full_top_0\n"); );
    // Init
    VMain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMain___024root*>(voidSelf);
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMain___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VMain___024root__trace_full_sub_0(VMain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__inst_sram_en_REG));
    bufp->fullIData(oldp+2,(vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc),32);
    bufp->fullIData(oldp+3,(vlSelf->Main__DOT__iram_rdata),32);
    bufp->fullBit(oldp+4,((2U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we))));
    bufp->fullBit(oldp+5,((0U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we))));
    bufp->fullIData(oldp+6,((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___io_res_T_18)),32);
    bufp->fullIData(oldp+7,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata2),32);
    bufp->fullCData(oldp+8,(((0xdU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                              ? 7U : ((0xcU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                       ? 3U : ((0xbU 
                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                                ? 1U
                                                : 0xdU)))),4);
    bufp->fullIData(oldp+9,(vlSelf->Main__DOT__dram_rdata),32);
    bufp->fullBit(oldp+10,(vlSelf->Main__DOT__cpucore__DOT__pIF_br_taken));
    bufp->fullIData(oldp+11,(vlSelf->Main__DOT__cpucore__DOT__pIF_br_target),32);
    bufp->fullIData(oldp+12,(((IData)(vlSelf->Main__DOT__cpucore__DOT__pIF_br_taken)
                               ? vlSelf->Main__DOT__cpucore__DOT__pIF_br_target
                               : ((IData)(4U) + vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc))),32);
    bufp->fullIData(oldp+13,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1),32);
    bufp->fullIData(oldp+14,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2),32);
    bufp->fullCData(oldp+15,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op),5);
    bufp->fullCData(oldp+16,(((0xeU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                               ? 1U : (0x1fU & vlSelf->Main__DOT__iram_rdata))),5);
    bufp->fullBit(oldp+17,((0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T)));
    bufp->fullCData(oldp+18,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we),2);
    bufp->fullCData(oldp+19,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name),5);
    bufp->fullBit(oldp+20,((8U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))));
    bufp->fullIData(oldp+21,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data),32);
    bufp->fullBit(oldp+22,((1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we))));
    bufp->fullBit(oldp+23,((1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+24,((2U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+25,((3U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+26,((4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+27,((5U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+28,((6U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+29,((7U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+30,((8U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+31,((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+32,((0xaU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+33,((0xbU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+34,((0xcU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+35,((0xdU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+36,((0xeU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+37,((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+38,((0x10U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+39,((0x12U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+40,((0x11U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+41,((0x13U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+42,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_sub));
    bufp->fullQData(oldp+43,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_res),33);
    bufp->fullBit(oldp+45,((1U & (((~ (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2 
                                       >> 0x1fU)) & 
                                   (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1 
                                    >> 0x1fU)) | ((~ 
                                                   ((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1 
                                                     ^ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2) 
                                                    >> 0x1fU)) 
                                                  & (IData)(
                                                            (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_res 
                                                             >> 0x1fU)))))));
    bufp->fullBit(oldp+46,((1U & (~ (IData)((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_res 
                                             >> 0x20U))))));
    bufp->fullIData(oldp+47,((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1 
                              & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
    bufp->fullIData(oldp+48,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__or_res),32);
    bufp->fullIData(oldp+49,((~ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__or_res)),32);
    bufp->fullIData(oldp+50,((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1 
                              ^ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
    bufp->fullQData(oldp+51,((0x7fffffffffffffffULL 
                              & ((QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1)) 
                                 << (0x1fU & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)))),63);
    bufp->fullQData(oldp+53,((((QData)((IData)((((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1 
                                                  >> 0x1fU) 
                                                 & (0xbU 
                                                    == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op)))
                                                 ? 0xffffffffU
                                                 : 0U))) 
                               << 0x20U) | (QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1)))),64);
    bufp->fullQData(oldp+55,(((((QData)((IData)((((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1 
                                                   >> 0x1fU) 
                                                  & (0xbU 
                                                     == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op)))
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0x20U) | (QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1))) 
                              >> (0x1fU & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2))),64);
    bufp->fullQData(oldp+57,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__mul_pre),64);
    bufp->fullIData(oldp+59,((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__mul_pre)),32);
    bufp->fullIData(oldp+60,((IData)((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__mul_pre 
                                      >> 0x20U))),32);
    bufp->fullIData(oldp+61,((IData)((VL_MULS_QQQ(64, 
                                                  VL_EXTENDS_QI(64,32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1), 
                                                  VL_EXTENDS_QI(64,32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)) 
                                      >> 0x20U))),32);
    bufp->fullIData(oldp+62,(VL_DIV_III(32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
    bufp->fullIData(oldp+63,(VL_MODDIV_III(32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
    bufp->fullIData(oldp+64,(VL_MODDIVS_III(32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
    bufp->fullIData(oldp+65,((IData)((0x1ffffffffULL 
                                      & VL_DIVS_QQQ(33, 
                                                    (0x1ffffffffULL 
                                                     & VL_EXTENDS_QI(33,32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1)), 
                                                    (0x1ffffffffULL 
                                                     & VL_EXTENDS_QI(33,32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)))))),32);
    bufp->fullCData(oldp+66,((0x1fU & (vlSelf->Main__DOT__iram_rdata 
                                       >> 5U))),5);
    bufp->fullCData(oldp+67,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_io_rdata2_MPORT_addr),5);
    bufp->fullIData(oldp+68,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata1),32);
    bufp->fullCData(oldp+69,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr),5);
    bufp->fullCData(oldp+70,((0x1fU & vlSelf->Main__DOT__iram_rdata)),5);
    bufp->fullCData(oldp+71,((0x1fU & (vlSelf->Main__DOT__iram_rdata 
                                       >> 0xaU))),5);
    bufp->fullSData(oldp+72,((0xfffU & (vlSelf->Main__DOT__iram_rdata 
                                        >> 0xaU))),12);
    bufp->fullIData(oldp+73,((((- (IData)((1U & (vlSelf->Main__DOT__iram_rdata 
                                                 >> 0x15U)))) 
                               << 0xcU) | (0xfffU & 
                                           (vlSelf->Main__DOT__iram_rdata 
                                            >> 0xaU)))),32);
    bufp->fullIData(oldp+74,((((- (IData)((1U & (vlSelf->Main__DOT__iram_rdata 
                                                 >> 0x19U)))) 
                               << 0x12U) | (0x3fffcU 
                                            & (vlSelf->Main__DOT__iram_rdata 
                                               >> 8U)))),32);
    bufp->fullIData(oldp+75,((0xfffff000U & (vlSelf->Main__DOT__iram_rdata 
                                             << 7U))),32);
    bufp->fullIData(oldp+76,((((- (IData)((1U & (vlSelf->Main__DOT__iram_rdata 
                                                 >> 9U)))) 
                               << 0x1cU) | ((0xffc0000U 
                                             & (vlSelf->Main__DOT__iram_rdata 
                                                << 0x12U)) 
                                            | (0x3fffcU 
                                               & (vlSelf->Main__DOT__iram_rdata 
                                                  >> 8U))))),32);
    bufp->fullIData(oldp+77,((~ vlSelf->Main__DOT__iram_rdata)),32);
    bufp->fullBit(oldp+78,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0xfU)))));
    bufp->fullBit(oldp+79,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x10U)))));
    bufp->fullBit(oldp+80,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x11U)))));
    bufp->fullBit(oldp+81,((1U & (vlSelf->Main__DOT__iram_rdata 
                                  >> 0x14U))));
    bufp->fullBit(oldp+82,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x15U)))));
    bufp->fullBit(oldp+83,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x16U)))));
    bufp->fullBit(oldp+84,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x17U)))));
    bufp->fullBit(oldp+85,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x18U)))));
    bufp->fullBit(oldp+86,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x19U)))));
    bufp->fullBit(oldp+87,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x1aU)))));
    bufp->fullBit(oldp+88,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x1bU)))));
    bufp->fullBit(oldp+89,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x1cU)))));
    bufp->fullBit(oldp+90,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x1dU)))));
    bufp->fullBit(oldp+91,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x1eU)))));
    bufp->fullBit(oldp+92,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x1fU)))));
    bufp->fullCData(oldp+93,(((0x40U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                            >> 0x19U)) 
                                        << 6U)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_he1db0bdc__0))),7);
    bufp->fullBit(oldp+94,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x12U)))));
    bufp->fullCData(oldp+95,(((0x80U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                            >> 0x18U)) 
                                        << 7U)) | (
                                                   (0x40U 
                                                    & ((~ 
                                                        (vlSelf->Main__DOT__iram_rdata 
                                                         >> 0x19U)) 
                                                       << 6U)) 
                                                   | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_he1db0bdc__0)))),8);
    bufp->fullBit(oldp+96,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x13U)))));
    bufp->fullBit(oldp+97,((1U & (vlSelf->Main__DOT__iram_rdata 
                                  >> 0x10U))));
    bufp->fullBit(oldp+98,((1U & (vlSelf->Main__DOT__iram_rdata 
                                  >> 0x11U))));
    bufp->fullBit(oldp+99,((1U & (vlSelf->Main__DOT__iram_rdata 
                                  >> 0xfU))));
    bufp->fullBit(oldp+100,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x12U))));
    bufp->fullBit(oldp+101,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x13U))));
    bufp->fullBit(oldp+102,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+103,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x15U))));
    bufp->fullBit(oldp+104,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x16U))));
    bufp->fullBit(oldp+105,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x19U))));
    bufp->fullBit(oldp+106,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x17U))));
    bufp->fullBit(oldp+107,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x18U))));
    bufp->fullBit(oldp+108,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+109,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+110,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+111,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+112,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x1eU))));
    bufp->fullCData(oldp+113,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_lo_lo_hi),2);
    bufp->fullCData(oldp+114,((((IData)((0x1ffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_64))) 
                                << 7U) | (((IData)(
                                                   (0x1ffU 
                                                    == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_70))) 
                                           << 6U) | 
                                          (((IData)(
                                                    (0x1ffU 
                                                     == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_72))) 
                                            << 5U) 
                                           | (((IData)(
                                                       (0x3fU 
                                                        == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_82))) 
                                               << 4U) 
                                              | (((IData)(
                                                          (0xffU 
                                                           == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_88))) 
                                                  << 3U) 
                                                 | (((IData)(
                                                             (0x1ffU 
                                                              == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_94))) 
                                                     << 2U) 
                                                    | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h360c0578__0)))))))),8);
    bufp->fullCData(oldp+115,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5),3);
    bufp->fullCData(oldp+116,((((IData)((0x1ffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_70))) 
                                << 6U) | (((IData)(
                                                   (0x1ffU 
                                                    == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_72))) 
                                           << 5U) | 
                                          (((IData)(
                                                    (0x7fU 
                                                     == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_86))) 
                                            << 4U) 
                                           | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h6d60535a__0))))),7);
    bufp->fullCData(oldp+117,((((IData)((0x1ffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_70))) 
                                << 7U) | (((IData)(
                                                   ((0x400000U 
                                                     == 
                                                     (0xc00000U 
                                                      & vlSelf->Main__DOT__iram_rdata)) 
                                                    & (0xffU 
                                                       == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hf55cf174__0)))) 
                                           << 6U) | 
                                          (((IData)(
                                                    (0x7fU 
                                                     == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_86))) 
                                            << 5U) 
                                           | (((IData)(
                                                       (0xffU 
                                                        == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_88))) 
                                               << 4U) 
                                              | (((IData)(
                                                          (0xffU 
                                                           == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_90))) 
                                                  << 3U) 
                                                 | (((IData)(
                                                             (0xffU 
                                                              == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_92))) 
                                                     << 2U) 
                                                    | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h360c0578__0)))))))),8);
    bufp->fullCData(oldp+118,(((((vlSelf->Main__DOT__iram_rdata 
                                  >> 0xfU) & (0xffffU 
                                              == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_42))) 
                                << 5U) | ((((vlSelf->Main__DOT__iram_rdata 
                                             >> 0xfU) 
                                            & (0x7fffU 
                                               == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_46))) 
                                           << 4U) | 
                                          (((IData)(
                                                    ((0x48000U 
                                                      == 
                                                      (0x78000U 
                                                       & vlSelf->Main__DOT__iram_rdata)) 
                                                     & (0x1fffU 
                                                        == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h92bfeef8__0)))) 
                                            << 3U) 
                                           | (((IData)(
                                                       ((0x88000U 
                                                         == 
                                                         (0xf8000U 
                                                          & vlSelf->Main__DOT__iram_rdata)) 
                                                        & (0xfffU 
                                                           == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hb79c9193__0)))) 
                                               << 2U) 
                                              | ((((~ 
                                                    (vlSelf->Main__DOT__iram_rdata 
                                                     >> 0x16U)) 
                                                   & (0x1ffU 
                                                      == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_64))) 
                                                  << 1U) 
                                                 | (0x3ffU 
                                                    == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_78)))))))),6);
    bufp->fullCData(oldp+119,((((IData)((0U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5))) 
                                << 7U) | (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_lo_lo_hi))) 
                                           << 6U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_10))) 
                                            << 5U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_8))) 
                                               << 4U) 
                                              | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_6))) 
                                                  << 3U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_4))) 
                                                     << 2U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_2))) 
                                                        << 1U) 
                                                       | (0U 
                                                          != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))))))))),8);
    bufp->fullIData(oldp+120,((((IData)((0x7fffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_46))) 
                                << 0x10U) | (((IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_30))) 
                                              << 0xfU) 
                                             | (((IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_28))) 
                                                 << 0xeU) 
                                                | (((IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_26))) 
                                                    << 0xdU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_24))) 
                                                       << 0xcU) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_22))) 
                                                          << 0xbU) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_20))) 
                                                             << 0xaU) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_18))) 
                                                                << 9U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_16))) 
                                                                   << 8U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5))) 
                                                                      << 7U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_lo_lo_hi))) 
                                                                         << 6U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_10))) 
                                                                            << 5U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_8))) 
                                                                               << 4U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_6))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_4))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_2))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T)))))))))))))))))),17);
    bufp->fullCData(oldp+121,(((0x80U & ((~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5)))) 
                                         << 7U)) | 
                               (((IData)((0U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_lo_lo_hi))) 
                                 << 6U) | ((0x20U & 
                                            ((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_10)))) 
                                             << 5U)) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_8))) 
                                               << 4U) 
                                              | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_6))) 
                                                  << 3U) 
                                                 | ((4U 
                                                     & ((~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_4)))) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & ((~ (IData)(
                                                                      (0U 
                                                                       != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_2)))) 
                                                           << 1U)) 
                                                       | (0U 
                                                          != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))))))))),8);
    bufp->fullIData(oldp+122,((((IData)((0x7fffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_46))) 
                                << 0x10U) | (((IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_30))) 
                                              << 0xfU) 
                                             | (((IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_28))) 
                                                 << 0xeU) 
                                                | (((IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_26))) 
                                                    << 0xdU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_24))) 
                                                       << 0xcU) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_22))) 
                                                          << 0xbU) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_20))) 
                                                             << 0xaU) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_18))) 
                                                                << 9U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_16))) 
                                                                   << 8U) 
                                                                  | ((0x80U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5)))) 
                                                                         << 7U)) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_lo_lo_hi))) 
                                                                         << 6U) 
                                                                        | ((0x20U 
                                                                            & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_10)))) 
                                                                               << 5U)) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_8))) 
                                                                               << 4U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_6))) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_4)))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_2)))) 
                                                                                << 1U)) 
                                                                                | (0U 
                                                                                != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T)))))))))))))))))),17);
    bufp->fullCData(oldp+123,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type),4);
    bufp->fullIData(oldp+124,(((2U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))
                                ? (0x1fU & (vlSelf->Main__DOT__iram_rdata 
                                            >> 0xaU))
                                : ((3U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->Main__DOT__iram_rdata 
                                                       >> 0x15U)))) 
                                        << 0xcU) | 
                                       (0xfffU & (vlSelf->Main__DOT__iram_rdata 
                                                  >> 0xaU)))
                                    : ((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))
                                        ? (0xfffU & 
                                           (vlSelf->Main__DOT__iram_rdata 
                                            >> 0xaU))
                                        : ((4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))
                                            ? 4U : 
                                           ((5U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))
                                             ? (0xfffff000U 
                                                & (vlSelf->Main__DOT__iram_rdata 
                                                   << 7U))
                                             : ((6U 
                                                 == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))
                                                 ? 
                                                (0xfffff000U 
                                                 & (vlSelf->Main__DOT__iram_rdata 
                                                    << 7U))
                                                 : 
                                                ((7U 
                                                  == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))
                                                  ? 4U
                                                  : 0U)))))))),32);
    bufp->fullBit(oldp+125,((((0x10U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)) 
                              & (4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))) 
                             | (0U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we)))));
    bufp->fullBit(oldp+126,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__rj_eq_rd));
    bufp->fullQData(oldp+127,((0x1ffffffffULL & (1ULL 
                                                 + vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_T_1))),33);
    bufp->fullBit(oldp+129,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__slt_res));
    bufp->fullBit(oldp+130,((1U & (~ (IData)((1ULL 
                                              & ((1ULL 
                                                  + vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_T_1) 
                                                 >> 0x20U)))))));
    bufp->fullBit(oldp+131,(((0x10U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)) 
                             | ((0x11U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)) 
                                | (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))))));
    bufp->fullIData(oldp+132,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[0]),32);
    bufp->fullIData(oldp+133,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[1]),32);
    bufp->fullIData(oldp+134,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[2]),32);
    bufp->fullIData(oldp+135,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[3]),32);
    bufp->fullIData(oldp+136,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[4]),32);
    bufp->fullIData(oldp+137,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[5]),32);
    bufp->fullIData(oldp+138,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[6]),32);
    bufp->fullIData(oldp+139,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[7]),32);
    bufp->fullIData(oldp+140,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[8]),32);
    bufp->fullIData(oldp+141,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[9]),32);
    bufp->fullIData(oldp+142,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[10]),32);
    bufp->fullIData(oldp+143,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[11]),32);
    bufp->fullIData(oldp+144,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[12]),32);
    bufp->fullIData(oldp+145,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[13]),32);
    bufp->fullIData(oldp+146,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[14]),32);
    bufp->fullIData(oldp+147,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[15]),32);
    bufp->fullIData(oldp+148,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[16]),32);
    bufp->fullIData(oldp+149,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[17]),32);
    bufp->fullIData(oldp+150,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[18]),32);
    bufp->fullIData(oldp+151,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[19]),32);
    bufp->fullIData(oldp+152,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[20]),32);
    bufp->fullIData(oldp+153,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[21]),32);
    bufp->fullIData(oldp+154,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[22]),32);
    bufp->fullIData(oldp+155,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[23]),32);
    bufp->fullIData(oldp+156,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[24]),32);
    bufp->fullIData(oldp+157,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[25]),32);
    bufp->fullIData(oldp+158,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[26]),32);
    bufp->fullIData(oldp+159,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[27]),32);
    bufp->fullIData(oldp+160,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[28]),32);
    bufp->fullIData(oldp+161,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[29]),32);
    bufp->fullIData(oldp+162,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[30]),32);
    bufp->fullIData(oldp+163,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[31]),32);
    bufp->fullIData(oldp+164,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_io_rdata1_MPORT_data),32);
    bufp->fullIData(oldp+165,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_io_rdata2_MPORT_data),32);
    bufp->fullIData(oldp+166,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [1U]),32);
    bufp->fullIData(oldp+167,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [2U]),32);
    bufp->fullIData(oldp+168,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [3U]),32);
    bufp->fullIData(oldp+169,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [4U]),32);
    bufp->fullIData(oldp+170,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [5U]),32);
    bufp->fullIData(oldp+171,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [6U]),32);
    bufp->fullIData(oldp+172,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [7U]),32);
    bufp->fullIData(oldp+173,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [8U]),32);
    bufp->fullIData(oldp+174,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [9U]),32);
    bufp->fullIData(oldp+175,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0xaU]),32);
    bufp->fullIData(oldp+176,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0xbU]),32);
    bufp->fullIData(oldp+177,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0xcU]),32);
    bufp->fullIData(oldp+178,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0xdU]),32);
    bufp->fullIData(oldp+179,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0xeU]),32);
    bufp->fullIData(oldp+180,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0xfU]),32);
    bufp->fullIData(oldp+181,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x10U]),32);
    bufp->fullIData(oldp+182,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x11U]),32);
    bufp->fullIData(oldp+183,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x12U]),32);
    bufp->fullIData(oldp+184,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x13U]),32);
    bufp->fullIData(oldp+185,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x14U]),32);
    bufp->fullIData(oldp+186,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x15U]),32);
    bufp->fullIData(oldp+187,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x16U]),32);
    bufp->fullIData(oldp+188,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x17U]),32);
    bufp->fullIData(oldp+189,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x18U]),32);
    bufp->fullIData(oldp+190,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x19U]),32);
    bufp->fullIData(oldp+191,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x1aU]),32);
    bufp->fullIData(oldp+192,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x1bU]),32);
    bufp->fullIData(oldp+193,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x1cU]),32);
    bufp->fullIData(oldp+194,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x1dU]),32);
    bufp->fullIData(oldp+195,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x1eU]),32);
    bufp->fullIData(oldp+196,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x1fU]),32);
    bufp->fullIData(oldp+197,((((1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [1U])),32);
    bufp->fullIData(oldp+198,((((2U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [2U])),32);
    bufp->fullIData(oldp+199,((((3U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [3U])),32);
    bufp->fullIData(oldp+200,((((4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [4U])),32);
    bufp->fullIData(oldp+201,((((5U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [5U])),32);
    bufp->fullIData(oldp+202,((((6U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [6U])),32);
    bufp->fullIData(oldp+203,((((7U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [7U])),32);
    bufp->fullIData(oldp+204,((((8U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [8U])),32);
    bufp->fullIData(oldp+205,((((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [9U])),32);
    bufp->fullIData(oldp+206,((((0xaU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0xaU])),32);
    bufp->fullIData(oldp+207,((((0xbU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0xbU])),32);
    bufp->fullIData(oldp+208,((((0xcU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0xcU])),32);
    bufp->fullIData(oldp+209,((((0xdU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0xdU])),32);
    bufp->fullIData(oldp+210,((((0xeU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0xeU])),32);
    bufp->fullIData(oldp+211,((((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0xfU])),32);
    bufp->fullIData(oldp+212,((((0x10U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x10U])),32);
    bufp->fullIData(oldp+213,((((0x11U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x11U])),32);
    bufp->fullIData(oldp+214,((((0x12U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x12U])),32);
    bufp->fullIData(oldp+215,((((0x13U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x13U])),32);
    bufp->fullIData(oldp+216,((((0x14U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x14U])),32);
    bufp->fullIData(oldp+217,((((0x15U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x15U])),32);
    bufp->fullIData(oldp+218,((((0x16U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x16U])),32);
    bufp->fullIData(oldp+219,((((0x17U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x17U])),32);
    bufp->fullIData(oldp+220,((((0x18U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x18U])),32);
    bufp->fullIData(oldp+221,((((0x19U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x19U])),32);
    bufp->fullIData(oldp+222,((((0x1aU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x1aU])),32);
    bufp->fullIData(oldp+223,((((0x1bU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x1bU])),32);
    bufp->fullIData(oldp+224,((((0x1cU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x1cU])),32);
    bufp->fullIData(oldp+225,((((0x1dU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x1dU])),32);
    bufp->fullIData(oldp+226,((((0x1eU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x1eU])),32);
    bufp->fullIData(oldp+227,((((0x1fU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x1fU])),32);
    bufp->fullIData(oldp+228,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0]),32);
    bufp->fullIData(oldp+229,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[1]),32);
    bufp->fullIData(oldp+230,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[2]),32);
    bufp->fullIData(oldp+231,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[3]),32);
    bufp->fullIData(oldp+232,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[4]),32);
    bufp->fullIData(oldp+233,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[5]),32);
    bufp->fullIData(oldp+234,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[6]),32);
    bufp->fullIData(oldp+235,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[7]),32);
    bufp->fullIData(oldp+236,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[8]),32);
    bufp->fullIData(oldp+237,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[9]),32);
    bufp->fullIData(oldp+238,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[10]),32);
    bufp->fullIData(oldp+239,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[11]),32);
    bufp->fullIData(oldp+240,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[12]),32);
    bufp->fullIData(oldp+241,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[13]),32);
    bufp->fullIData(oldp+242,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[14]),32);
    bufp->fullIData(oldp+243,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[15]),32);
    bufp->fullIData(oldp+244,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[16]),32);
    bufp->fullIData(oldp+245,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[17]),32);
    bufp->fullIData(oldp+246,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[18]),32);
    bufp->fullIData(oldp+247,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[19]),32);
    bufp->fullIData(oldp+248,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[20]),32);
    bufp->fullIData(oldp+249,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[21]),32);
    bufp->fullIData(oldp+250,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[22]),32);
    bufp->fullIData(oldp+251,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[23]),32);
    bufp->fullIData(oldp+252,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[24]),32);
    bufp->fullIData(oldp+253,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[25]),32);
    bufp->fullIData(oldp+254,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[26]),32);
    bufp->fullIData(oldp+255,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[27]),32);
    bufp->fullIData(oldp+256,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[28]),32);
    bufp->fullIData(oldp+257,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[29]),32);
    bufp->fullIData(oldp+258,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[30]),32);
    bufp->fullIData(oldp+259,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[31]),32);
    bufp->fullIData(oldp+260,(((8U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                ? vlSelf->Main__DOT__dram_rdata
                                : ((0xaU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                    ? (0xffffU & vlSelf->Main__DOT__dram_rdata)
                                    : ((7U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->Main__DOT__dram_rdata 
                                                           >> 0xfU)))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & vlSelf->Main__DOT__dram_rdata))
                                        : ((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                            ? (0xffU 
                                               & vlSelf->Main__DOT__dram_rdata)
                                            : ((6U 
                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->Main__DOT__dram_rdata 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->Main__DOT__dram_rdata))
                                                : 0xdeadU)))))),32);
    bufp->fullIData(oldp+261,(((IData)(4U) + vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc)),32);
    bufp->fullBit(oldp+262,(vlSelf->clock));
    bufp->fullBit(oldp+263,(vlSelf->reset));
    bufp->fullBit(oldp+264,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+265,(0U));
    bufp->fullIData(oldp+266,(0U),32);
    bufp->fullCData(oldp+267,(0U),4);
    bufp->fullBit(oldp+268,(1U));
    bufp->fullCData(oldp+269,(1U),5);
    bufp->fullCData(oldp+270,(2U),5);
    bufp->fullCData(oldp+271,(3U),5);
    bufp->fullCData(oldp+272,(4U),5);
    bufp->fullCData(oldp+273,(5U),5);
    bufp->fullCData(oldp+274,(6U),5);
    bufp->fullCData(oldp+275,(7U),5);
    bufp->fullCData(oldp+276,(8U),5);
    bufp->fullCData(oldp+277,(9U),5);
    bufp->fullCData(oldp+278,(0xaU),5);
    bufp->fullCData(oldp+279,(0xbU),5);
    bufp->fullCData(oldp+280,(0xcU),5);
    bufp->fullCData(oldp+281,(0xdU),5);
    bufp->fullCData(oldp+282,(0xeU),5);
    bufp->fullCData(oldp+283,(0xfU),5);
    bufp->fullCData(oldp+284,(0x10U),5);
    bufp->fullCData(oldp+285,(0x11U),5);
    bufp->fullCData(oldp+286,(0x12U),5);
    bufp->fullCData(oldp+287,(0x13U),5);
    bufp->fullCData(oldp+288,(0x14U),5);
    bufp->fullCData(oldp+289,(0x15U),5);
    bufp->fullCData(oldp+290,(0x16U),5);
    bufp->fullCData(oldp+291,(0x17U),5);
    bufp->fullCData(oldp+292,(0x18U),5);
    bufp->fullCData(oldp+293,(0x19U),5);
    bufp->fullCData(oldp+294,(0x1aU),5);
    bufp->fullCData(oldp+295,(0x1bU),5);
    bufp->fullCData(oldp+296,(0x1cU),5);
    bufp->fullCData(oldp+297,(0x1dU),5);
    bufp->fullCData(oldp+298,(0x1eU),5);
    bufp->fullCData(oldp+299,(0x1fU),5);
}
