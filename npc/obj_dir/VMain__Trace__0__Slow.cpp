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
    tracep->declBit(c+226,"clock", false,-1);
    tracep->declBit(c+227,"reset", false,-1);
    tracep->pushNamePrefix("Main ");
    tracep->declBit(c+226,"clock", false,-1);
    tracep->declBit(c+227,"reset", false,-1);
    tracep->declBit(c+226,"cpucore_clock", false,-1);
    tracep->declBit(c+227,"cpucore_reset", false,-1);
    tracep->declBus(c+1,"cpucore_inst_sram_addr", false,-1, 31,0);
    tracep->declBus(c+2,"cpucore_inst_sram_rdata", false,-1, 31,0);
    tracep->declBit(c+3,"cpucore_data_sram_en", false,-1);
    tracep->declBit(c+4,"cpucore_data_sram_wr", false,-1);
    tracep->declBus(c+5,"cpucore_data_sram_addr", false,-1, 31,0);
    tracep->declBus(c+6,"cpucore_data_sram_wdata", false,-1, 31,0);
    tracep->declBus(c+7,"cpucore_data_sram_wstrb", false,-1, 3,0);
    tracep->declBus(c+8,"cpucore_data_sram_rdata", false,-1, 31,0);
    tracep->declBit(c+3,"dram_en", false,-1);
    tracep->declBit(c+4,"dram_wr", false,-1);
    tracep->declBus(c+5,"dram_addr", false,-1, 31,0);
    tracep->declBus(c+6,"dram_wdata", false,-1, 31,0);
    tracep->declBus(c+7,"dram_wstrb", false,-1, 3,0);
    tracep->declBus(c+8,"dram_rdata", false,-1, 31,0);
    tracep->declBit(c+228,"iram_en", false,-1);
    tracep->declBit(c+229,"iram_wr", false,-1);
    tracep->declBus(c+1,"iram_addr", false,-1, 31,0);
    tracep->declBus(c+230,"iram_wdata", false,-1, 31,0);
    tracep->declBus(c+231,"iram_wstrb", false,-1, 3,0);
    tracep->declBus(c+2,"iram_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("cpucore ");
    tracep->declBit(c+226,"clock", false,-1);
    tracep->declBit(c+227,"reset", false,-1);
    tracep->declBus(c+1,"inst_sram_addr", false,-1, 31,0);
    tracep->declBus(c+2,"inst_sram_rdata", false,-1, 31,0);
    tracep->declBit(c+3,"data_sram_en", false,-1);
    tracep->declBit(c+4,"data_sram_wr", false,-1);
    tracep->declBus(c+5,"data_sram_addr", false,-1, 31,0);
    tracep->declBus(c+6,"data_sram_wdata", false,-1, 31,0);
    tracep->declBus(c+7,"data_sram_wstrb", false,-1, 3,0);
    tracep->declBus(c+8,"data_sram_rdata", false,-1, 31,0);
    tracep->declBit(c+226,"pIF_clock", false,-1);
    tracep->declBit(c+227,"pIF_reset", false,-1);
    tracep->declBit(c+9,"pIF_br_taken", false,-1);
    tracep->declBus(c+10,"pIF_br_target", false,-1, 31,0);
    tracep->declBus(c+1,"pIF_inst_sram_addr", false,-1, 31,0);
    tracep->declBus(c+1,"pIF_tofs_bits_pc", false,-1, 31,0);
    tracep->declBus(c+1,"IF_tods_bits_pc", false,-1, 31,0);
    tracep->declBus(c+2,"IF_tods_bits_inst", false,-1, 31,0);
    tracep->declBus(c+2,"IF_inst_sram_rdata", false,-1, 31,0);
    tracep->declBus(c+1,"IF_fs_bits_pc", false,-1, 31,0);
    tracep->declBit(c+226,"ID_clock", false,-1);
    tracep->declBit(c+227,"ID_reset", false,-1);
    tracep->declBus(c+1,"ID_toes_bits_pc", false,-1, 31,0);
    tracep->declBus(c+1,"ID_toes_bits_alu_src1", false,-1, 31,0);
    tracep->declBus(c+11,"ID_toes_bits_alu_src2", false,-1, 31,0);
    tracep->declBus(c+12,"ID_toes_bits_alu_op", false,-1, 4,0);
    tracep->declBus(c+13,"ID_toes_bits_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+14,"ID_toes_bits_mem_we", false,-1, 1,0);
    tracep->declBus(c+15,"ID_toes_bits_inst_name", false,-1, 4,0);
    tracep->declBus(c+6,"ID_toes_bits_mem_wdata", false,-1, 31,0);
    tracep->declBit(c+16,"ID_toes_bits_is_break", false,-1);
    tracep->declBus(c+2,"ID_toes_bits_inst", false,-1, 31,0);
    tracep->declBus(c+1,"ID_ds_bits_pc", false,-1, 31,0);
    tracep->declBus(c+2,"ID_ds_bits_inst", false,-1, 31,0);
    tracep->declBus(c+1,"ID_torf_pc", false,-1, 31,0);
    tracep->declBus(c+13,"ID_torf_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+17,"ID_torf_rf_wdata", false,-1, 31,0);
    tracep->declBit(c+16,"ID_torf_is_break", false,-1);
    tracep->declBus(c+2,"ID_torf_inst", false,-1, 31,0);
    tracep->declBit(c+9,"ID_br_taken", false,-1);
    tracep->declBus(c+10,"ID_br_target", false,-1, 31,0);
    tracep->declBus(c+1,"EXE_es_bits_pc", false,-1, 31,0);
    tracep->declBus(c+1,"EXE_es_bits_alu_src1", false,-1, 31,0);
    tracep->declBus(c+11,"EXE_es_bits_alu_src2", false,-1, 31,0);
    tracep->declBus(c+12,"EXE_es_bits_alu_op", false,-1, 4,0);
    tracep->declBus(c+13,"EXE_es_bits_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+14,"EXE_es_bits_mem_we", false,-1, 1,0);
    tracep->declBus(c+15,"EXE_es_bits_inst_name", false,-1, 4,0);
    tracep->declBus(c+6,"EXE_es_bits_mem_wdata", false,-1, 31,0);
    tracep->declBit(c+16,"EXE_es_bits_is_break", false,-1);
    tracep->declBus(c+2,"EXE_es_bits_inst", false,-1, 31,0);
    tracep->declBus(c+1,"EXE_toms_bits_pc", false,-1, 31,0);
    tracep->declBus(c+5,"EXE_toms_bits_alu_res", false,-1, 31,0);
    tracep->declBus(c+15,"EXE_toms_bits_inst_name", false,-1, 4,0);
    tracep->declBit(c+18,"EXE_toms_bits_res_from_mem", false,-1);
    tracep->declBus(c+13,"EXE_toms_bits_rf_waddr", false,-1, 4,0);
    tracep->declBit(c+16,"EXE_toms_bits_is_break", false,-1);
    tracep->declBus(c+2,"EXE_toms_bits_inst", false,-1, 31,0);
    tracep->declBit(c+3,"EXE_data_sram_en", false,-1);
    tracep->declBit(c+4,"EXE_data_sram_wr", false,-1);
    tracep->declBus(c+5,"EXE_data_sram_addr", false,-1, 31,0);
    tracep->declBus(c+6,"EXE_data_sram_wdata", false,-1, 31,0);
    tracep->declBus(c+7,"EXE_data_sram_wstrb", false,-1, 3,0);
    tracep->declBus(c+1,"MEM_ms_bits_pc", false,-1, 31,0);
    tracep->declBus(c+5,"MEM_ms_bits_alu_res", false,-1, 31,0);
    tracep->declBus(c+15,"MEM_ms_bits_inst_name", false,-1, 4,0);
    tracep->declBit(c+18,"MEM_ms_bits_res_from_mem", false,-1);
    tracep->declBus(c+13,"MEM_ms_bits_rf_waddr", false,-1, 4,0);
    tracep->declBit(c+16,"MEM_ms_bits_is_break", false,-1);
    tracep->declBus(c+2,"MEM_ms_bits_inst", false,-1, 31,0);
    tracep->declBus(c+1,"MEM_tows_bits_pc", false,-1, 31,0);
    tracep->declBus(c+13,"MEM_tows_bits_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+17,"MEM_tows_bits_rf_wdata", false,-1, 31,0);
    tracep->declBit(c+16,"MEM_tows_bits_is_break", false,-1);
    tracep->declBus(c+2,"MEM_tows_bits_inst", false,-1, 31,0);
    tracep->declBus(c+8,"MEM_data_sram_rdata", false,-1, 31,0);
    tracep->declBus(c+1,"WB_ws_bits_pc", false,-1, 31,0);
    tracep->declBus(c+13,"WB_ws_bits_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+17,"WB_ws_bits_rf_wdata", false,-1, 31,0);
    tracep->declBit(c+16,"WB_ws_bits_is_break", false,-1);
    tracep->declBus(c+2,"WB_ws_bits_inst", false,-1, 31,0);
    tracep->declBus(c+1,"WB_torf_pc", false,-1, 31,0);
    tracep->declBus(c+13,"WB_torf_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+17,"WB_torf_rf_wdata", false,-1, 31,0);
    tracep->declBit(c+16,"WB_torf_is_break", false,-1);
    tracep->declBus(c+2,"WB_torf_inst", false,-1, 31,0);
    tracep->pushNamePrefix("EXE ");
    tracep->declBus(c+1,"es_bits_pc", false,-1, 31,0);
    tracep->declBus(c+1,"es_bits_alu_src1", false,-1, 31,0);
    tracep->declBus(c+11,"es_bits_alu_src2", false,-1, 31,0);
    tracep->declBus(c+12,"es_bits_alu_op", false,-1, 4,0);
    tracep->declBus(c+13,"es_bits_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+14,"es_bits_mem_we", false,-1, 1,0);
    tracep->declBus(c+15,"es_bits_inst_name", false,-1, 4,0);
    tracep->declBus(c+6,"es_bits_mem_wdata", false,-1, 31,0);
    tracep->declBit(c+16,"es_bits_is_break", false,-1);
    tracep->declBus(c+2,"es_bits_inst", false,-1, 31,0);
    tracep->declBus(c+1,"toms_bits_pc", false,-1, 31,0);
    tracep->declBus(c+5,"toms_bits_alu_res", false,-1, 31,0);
    tracep->declBus(c+15,"toms_bits_inst_name", false,-1, 4,0);
    tracep->declBit(c+18,"toms_bits_res_from_mem", false,-1);
    tracep->declBus(c+13,"toms_bits_rf_waddr", false,-1, 4,0);
    tracep->declBit(c+16,"toms_bits_is_break", false,-1);
    tracep->declBus(c+2,"toms_bits_inst", false,-1, 31,0);
    tracep->declBit(c+3,"data_sram_en", false,-1);
    tracep->declBit(c+4,"data_sram_wr", false,-1);
    tracep->declBus(c+5,"data_sram_addr", false,-1, 31,0);
    tracep->declBus(c+6,"data_sram_wdata", false,-1, 31,0);
    tracep->declBus(c+7,"data_sram_wstrb", false,-1, 3,0);
    tracep->declBus(c+12,"alu_io_alu_op", false,-1, 4,0);
    tracep->declBus(c+1,"alu_io_src1", false,-1, 31,0);
    tracep->declBus(c+11,"alu_io_src2", false,-1, 31,0);
    tracep->declBus(c+5,"alu_io_res", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+12,"io_alu_op", false,-1, 4,0);
    tracep->declBus(c+1,"io_src1", false,-1, 31,0);
    tracep->declBus(c+11,"io_src2", false,-1, 31,0);
    tracep->declBus(c+5,"io_res", false,-1, 31,0);
    tracep->declBit(c+19,"op_add", false,-1);
    tracep->declBit(c+20,"op_sub", false,-1);
    tracep->declBit(c+21,"op_slt", false,-1);
    tracep->declBit(c+22,"op_sltu", false,-1);
    tracep->declBit(c+23,"op_and", false,-1);
    tracep->declBit(c+24,"op_nor", false,-1);
    tracep->declBit(c+25,"op_or", false,-1);
    tracep->declBit(c+26,"op_xor", false,-1);
    tracep->declBit(c+27,"op_sll", false,-1);
    tracep->declBit(c+28,"op_srl", false,-1);
    tracep->declBit(c+29,"op_sra", false,-1);
    tracep->declBit(c+30,"op_lui", false,-1);
    tracep->declBit(c+31,"op_mul", false,-1);
    tracep->declBit(c+32,"op_mulh", false,-1);
    tracep->declBit(c+33,"op_mulhu", false,-1);
    tracep->declBit(c+34,"op_div", false,-1);
    tracep->declBit(c+35,"op_mod", false,-1);
    tracep->declBit(c+36,"op_divu", false,-1);
    tracep->declBit(c+37,"op_modu", false,-1);
    tracep->declBit(c+38,"add_sub", false,-1);
    tracep->declQuad(c+39,"add_res", false,-1, 32,0);
    tracep->declBit(c+41,"slt_res", false,-1);
    tracep->declBit(c+42,"sltu_res", false,-1);
    tracep->declBus(c+43,"and_res", false,-1, 31,0);
    tracep->declBus(c+44,"or_res", false,-1, 31,0);
    tracep->declBus(c+45,"nor_res", false,-1, 31,0);
    tracep->declBus(c+46,"xor_res", false,-1, 31,0);
    tracep->declQuad(c+47,"sll_res", false,-1, 62,0);
    tracep->declQuad(c+49,"sr", false,-1, 63,0);
    tracep->declQuad(c+51,"sr_res", false,-1, 63,0);
    tracep->declQuad(c+53,"mul_pre", false,-1, 63,0);
    tracep->declBus(c+55,"mul_res", false,-1, 31,0);
    tracep->declBus(c+56,"mulhu_res", false,-1, 31,0);
    tracep->declBus(c+57,"mulh_res", false,-1, 31,0);
    tracep->declBus(c+58,"divu_res", false,-1, 31,0);
    tracep->declBus(c+59,"modu_res", false,-1, 31,0);
    tracep->declBus(c+60,"mod_res", false,-1, 31,0);
    tracep->declBus(c+61,"div_res", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+226,"clock", false,-1);
    tracep->declBit(c+227,"reset", false,-1);
    tracep->declBus(c+1,"toes_bits_pc", false,-1, 31,0);
    tracep->declBus(c+1,"toes_bits_alu_src1", false,-1, 31,0);
    tracep->declBus(c+11,"toes_bits_alu_src2", false,-1, 31,0);
    tracep->declBus(c+12,"toes_bits_alu_op", false,-1, 4,0);
    tracep->declBus(c+13,"toes_bits_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+14,"toes_bits_mem_we", false,-1, 1,0);
    tracep->declBus(c+15,"toes_bits_inst_name", false,-1, 4,0);
    tracep->declBus(c+6,"toes_bits_mem_wdata", false,-1, 31,0);
    tracep->declBit(c+16,"toes_bits_is_break", false,-1);
    tracep->declBus(c+2,"toes_bits_inst", false,-1, 31,0);
    tracep->declBus(c+1,"ds_bits_pc", false,-1, 31,0);
    tracep->declBus(c+2,"ds_bits_inst", false,-1, 31,0);
    tracep->declBus(c+1,"torf_pc", false,-1, 31,0);
    tracep->declBus(c+13,"torf_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+17,"torf_rf_wdata", false,-1, 31,0);
    tracep->declBit(c+16,"torf_is_break", false,-1);
    tracep->declBus(c+2,"torf_inst", false,-1, 31,0);
    tracep->declBit(c+9,"br_taken", false,-1);
    tracep->declBus(c+10,"br_target", false,-1, 31,0);
    tracep->declBit(c+226,"reg__clock", false,-1);
    tracep->declBit(c+227,"reg__reset", false,-1);
    tracep->declBus(c+62,"reg__io_raddr1", false,-1, 4,0);
    tracep->declBus(c+63,"reg__io_raddr2", false,-1, 4,0);
    tracep->declBus(c+64,"reg__io_rdata1", false,-1, 31,0);
    tracep->declBus(c+6,"reg__io_rdata2", false,-1, 31,0);
    tracep->declBus(c+13,"reg__io_waddr", false,-1, 4,0);
    tracep->declBus(c+17,"reg__io_wdata", false,-1, 31,0);
    tracep->declBus(c+1,"reg__io_rf_pc", false,-1, 31,0);
    tracep->declBit(c+16,"reg__io_is_break", false,-1);
    tracep->declBus(c+2,"reg__io_inst", false,-1, 31,0);
    tracep->declBus(c+65,"rd", false,-1, 4,0);
    tracep->declBus(c+66,"rk", false,-1, 4,0);
    tracep->declBus(c+67,"imm12u", false,-1, 11,0);
    tracep->declBus(c+68,"imm12", false,-1, 31,0);
    tracep->declBus(c+69,"imm20", false,-1, 31,0);
    tracep->declBus(c+70,"decode_res_invInputs", false,-1, 31,0);
    tracep->declBit(c+71,"decode_res_andMatrixInput_0", false,-1);
    tracep->declBit(c+72,"decode_res_andMatrixInput_1", false,-1);
    tracep->declBit(c+73,"decode_res_andMatrixInput_2", false,-1);
    tracep->declBit(c+74,"decode_res_andMatrixInput_3", false,-1);
    tracep->declBit(c+75,"decode_res_andMatrixInput_4", false,-1);
    tracep->declBit(c+76,"decode_res_andMatrixInput_5", false,-1);
    tracep->declBit(c+77,"decode_res_andMatrixInput_6", false,-1);
    tracep->declBit(c+78,"decode_res_andMatrixInput_7", false,-1);
    tracep->declBit(c+79,"decode_res_andMatrixInput_8", false,-1);
    tracep->declBit(c+80,"decode_res_andMatrixInput_9", false,-1);
    tracep->declBit(c+81,"decode_res_andMatrixInput_10", false,-1);
    tracep->declBit(c+82,"decode_res_andMatrixInput_11", false,-1);
    tracep->declBit(c+83,"decode_res_andMatrixInput_12", false,-1);
    tracep->declBit(c+84,"decode_res_andMatrixInput_13", false,-1);
    tracep->declBit(c+85,"decode_res_andMatrixInput_14", false,-1);
    tracep->declBus(c+86,"decode_res_lo", false,-1, 6,0);
    tracep->declBit(c+87,"decode_res_andMatrixInput_3_1", false,-1);
    tracep->declBus(c+88,"decode_res_lo_1", false,-1, 7,0);
    tracep->declBit(c+89,"decode_res_andMatrixInput_2_2", false,-1);
    tracep->declBit(c+90,"decode_res_andMatrixInput_1_4", false,-1);
    tracep->declBit(c+91,"decode_res_andMatrixInput_1_5", false,-1);
    tracep->declBit(c+92,"decode_res_andMatrixInput_0_7", false,-1);
    tracep->declBit(c+93,"decode_res_andMatrixInput_2_8", false,-1);
    tracep->declBit(c+94,"decode_res_andMatrixInput_3_18", false,-1);
    tracep->declBit(c+95,"decode_res_andMatrixInput_3_23", false,-1);
    tracep->declBit(c+96,"decode_res_andMatrixInput_4_23", false,-1);
    tracep->declBit(c+97,"decode_res_andMatrixInput_6_27", false,-1);
    tracep->declBit(c+98,"decode_res_andMatrixInput_2_31", false,-1);
    tracep->declBit(c+99,"decode_res_andMatrixInput_1_35", false,-1);
    tracep->declBit(c+100,"decode_res_andMatrixInput_1_36", false,-1);
    tracep->declBit(c+101,"decode_res_andMatrixInput_1_41", false,-1);
    tracep->declBit(c+102,"decode_res_andMatrixInput_2_41", false,-1);
    tracep->declBit(c+103,"decode_res_andMatrixInput_2_43", false,-1);
    tracep->declBit(c+104,"decode_res_andMatrixInput_5_44", false,-1);
    tracep->declBit(c+105,"decode_res_andMatrixInput_3_57", false,-1);
    tracep->declBus(c+106,"decode_res_orMatrixOutputs_lo", false,-1, 7,0);
    tracep->declBus(c+107,"decode_res_orMatrixOutputs_hi_5", false,-1, 2,0);
    tracep->declBus(c+108,"decode_res_orMatrixOutputs_lo_6", false,-1, 6,0);
    tracep->declBus(c+109,"decode_res_orMatrixOutputs_lo_9", false,-1, 7,0);
    tracep->declBus(c+110,"decode_res_orMatrixOutputs_lo_10", false,-1, 5,0);
    tracep->declBus(c+111,"decode_res_orMatrixOutputs_lo_13", false,-1, 7,0);
    tracep->declBus(c+112,"decode_res_orMatrixOutputs", false,-1, 16,0);
    tracep->declBus(c+113,"decode_res_invMatrixOutputs_lo", false,-1, 7,0);
    tracep->declBus(c+114,"decode_res_invMatrixOutputs", false,-1, 16,0);
    tracep->declBus(c+115,"inst_type", false,-1, 3,0);
    tracep->declBus(c+14,"mem_we", false,-1, 1,0);
    tracep->declBus(c+15,"inst_name", false,-1, 4,0);
    tracep->declBus(c+116,"imm", false,-1, 31,0);
    tracep->declBit(c+117,"rk_or_rd", false,-1);
    tracep->declBit(c+118,"rj_eq_rd", false,-1);
    tracep->declQuad(c+119,"rj_sub_rd", false,-1, 32,0);
    tracep->declBit(c+121,"slt_res", false,-1);
    tracep->declBit(c+122,"sltu_res", false,-1);
    tracep->pushNamePrefix("reg_ ");
    tracep->declBit(c+226,"clock", false,-1);
    tracep->declBit(c+227,"reset", false,-1);
    tracep->declBus(c+62,"io_raddr1", false,-1, 4,0);
    tracep->declBus(c+63,"io_raddr2", false,-1, 4,0);
    tracep->declBus(c+64,"io_rdata1", false,-1, 31,0);
    tracep->declBus(c+6,"io_rdata2", false,-1, 31,0);
    tracep->declBus(c+13,"io_waddr", false,-1, 4,0);
    tracep->declBus(c+17,"io_wdata", false,-1, 31,0);
    tracep->declBus(c+1,"io_rf_pc", false,-1, 31,0);
    tracep->declBit(c+16,"io_is_break", false,-1);
    tracep->declBus(c+2,"io_inst", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+123+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBit(c+228,"rf_io_rdata1_MPORT_en", false,-1);
    tracep->declBus(c+62,"rf_io_rdata1_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+155,"rf_io_rdata1_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_io_rdata2_MPORT_en", false,-1);
    tracep->declBus(c+63,"rf_io_rdata2_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+156,"rf_io_rdata2_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_0_MPORT_en", false,-1);
    tracep->declBus(c+232,"rf_difftest_io_rf_0_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+157,"rf_difftest_io_rf_0_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+233,"rf_difftest_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+158,"rf_difftest_io_rf_1_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+234,"rf_difftest_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+159,"rf_difftest_io_rf_2_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+235,"rf_difftest_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+160,"rf_difftest_io_rf_3_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+236,"rf_difftest_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+161,"rf_difftest_io_rf_4_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+237,"rf_difftest_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+162,"rf_difftest_io_rf_5_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+238,"rf_difftest_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+163,"rf_difftest_io_rf_6_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+239,"rf_difftest_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+164,"rf_difftest_io_rf_7_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+240,"rf_difftest_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+165,"rf_difftest_io_rf_8_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+241,"rf_difftest_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+166,"rf_difftest_io_rf_9_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+242,"rf_difftest_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+167,"rf_difftest_io_rf_10_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+243,"rf_difftest_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+168,"rf_difftest_io_rf_11_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+244,"rf_difftest_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+169,"rf_difftest_io_rf_12_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+245,"rf_difftest_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+170,"rf_difftest_io_rf_13_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+246,"rf_difftest_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+171,"rf_difftest_io_rf_14_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+247,"rf_difftest_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+172,"rf_difftest_io_rf_15_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+248,"rf_difftest_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+173,"rf_difftest_io_rf_16_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+249,"rf_difftest_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+174,"rf_difftest_io_rf_17_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+250,"rf_difftest_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+175,"rf_difftest_io_rf_18_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+251,"rf_difftest_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+176,"rf_difftest_io_rf_19_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+252,"rf_difftest_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+177,"rf_difftest_io_rf_20_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+253,"rf_difftest_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+178,"rf_difftest_io_rf_21_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+254,"rf_difftest_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+179,"rf_difftest_io_rf_22_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+255,"rf_difftest_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+180,"rf_difftest_io_rf_23_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+256,"rf_difftest_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+181,"rf_difftest_io_rf_24_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+257,"rf_difftest_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+182,"rf_difftest_io_rf_25_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+258,"rf_difftest_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+183,"rf_difftest_io_rf_26_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+259,"rf_difftest_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+184,"rf_difftest_io_rf_27_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+260,"rf_difftest_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+185,"rf_difftest_io_rf_28_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+261,"rf_difftest_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+186,"rf_difftest_io_rf_29_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+262,"rf_difftest_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+187,"rf_difftest_io_rf_30_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+228,"rf_difftest_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+263,"rf_difftest_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+188,"rf_difftest_io_rf_31_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+17,"rf_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+13,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+228,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+228,"rf_MPORT_en", false,-1);
    tracep->declBus(c+157,"difftest_rf_0", false,-1, 31,0);
    tracep->declBus(c+158,"difftest_rf_1", false,-1, 31,0);
    tracep->declBus(c+159,"difftest_rf_2", false,-1, 31,0);
    tracep->declBus(c+160,"difftest_rf_3", false,-1, 31,0);
    tracep->declBus(c+161,"difftest_rf_4", false,-1, 31,0);
    tracep->declBus(c+162,"difftest_rf_5", false,-1, 31,0);
    tracep->declBus(c+163,"difftest_rf_6", false,-1, 31,0);
    tracep->declBus(c+164,"difftest_rf_7", false,-1, 31,0);
    tracep->declBus(c+165,"difftest_rf_8", false,-1, 31,0);
    tracep->declBus(c+166,"difftest_rf_9", false,-1, 31,0);
    tracep->declBus(c+167,"difftest_rf_10", false,-1, 31,0);
    tracep->declBus(c+168,"difftest_rf_11", false,-1, 31,0);
    tracep->declBus(c+169,"difftest_rf_12", false,-1, 31,0);
    tracep->declBus(c+170,"difftest_rf_13", false,-1, 31,0);
    tracep->declBus(c+171,"difftest_rf_14", false,-1, 31,0);
    tracep->declBus(c+172,"difftest_rf_15", false,-1, 31,0);
    tracep->declBus(c+173,"difftest_rf_16", false,-1, 31,0);
    tracep->declBus(c+174,"difftest_rf_17", false,-1, 31,0);
    tracep->declBus(c+175,"difftest_rf_18", false,-1, 31,0);
    tracep->declBus(c+176,"difftest_rf_19", false,-1, 31,0);
    tracep->declBus(c+177,"difftest_rf_20", false,-1, 31,0);
    tracep->declBus(c+178,"difftest_rf_21", false,-1, 31,0);
    tracep->declBus(c+179,"difftest_rf_22", false,-1, 31,0);
    tracep->declBus(c+180,"difftest_rf_23", false,-1, 31,0);
    tracep->declBus(c+181,"difftest_rf_24", false,-1, 31,0);
    tracep->declBus(c+182,"difftest_rf_25", false,-1, 31,0);
    tracep->declBus(c+183,"difftest_rf_26", false,-1, 31,0);
    tracep->declBus(c+184,"difftest_rf_27", false,-1, 31,0);
    tracep->declBus(c+185,"difftest_rf_28", false,-1, 31,0);
    tracep->declBus(c+186,"difftest_rf_29", false,-1, 31,0);
    tracep->declBus(c+187,"difftest_rf_30", false,-1, 31,0);
    tracep->declBus(c+188,"difftest_rf_31", false,-1, 31,0);
    tracep->declBit(c+189,"npc_brk_is_break", false,-1);
    tracep->declBit(c+190,"inst_exec_once_valid", false,-1);
    tracep->declBus(c+191,"inst_exec_once_inst", false,-1, 31,0);
    tracep->declBus(c+192,"inst_exec_once_pc", false,-1, 31,0);
    tracep->declBus(c+192,"pc", false,-1, 31,0);
    tracep->declBit(c+189,"is_break", false,-1);
    tracep->declBit(c+190,"valid", false,-1);
    tracep->declBus(c+191,"inst", false,-1, 31,0);
    tracep->pushNamePrefix("difftest ");
    tracep->declBus(c+157,"rf_0", false,-1, 31,0);
    tracep->declBus(c+158,"rf_1", false,-1, 31,0);
    tracep->declBus(c+159,"rf_2", false,-1, 31,0);
    tracep->declBus(c+160,"rf_3", false,-1, 31,0);
    tracep->declBus(c+161,"rf_4", false,-1, 31,0);
    tracep->declBus(c+162,"rf_5", false,-1, 31,0);
    tracep->declBus(c+163,"rf_6", false,-1, 31,0);
    tracep->declBus(c+164,"rf_7", false,-1, 31,0);
    tracep->declBus(c+165,"rf_8", false,-1, 31,0);
    tracep->declBus(c+166,"rf_9", false,-1, 31,0);
    tracep->declBus(c+167,"rf_10", false,-1, 31,0);
    tracep->declBus(c+168,"rf_11", false,-1, 31,0);
    tracep->declBus(c+169,"rf_12", false,-1, 31,0);
    tracep->declBus(c+170,"rf_13", false,-1, 31,0);
    tracep->declBus(c+171,"rf_14", false,-1, 31,0);
    tracep->declBus(c+172,"rf_15", false,-1, 31,0);
    tracep->declBus(c+173,"rf_16", false,-1, 31,0);
    tracep->declBus(c+174,"rf_17", false,-1, 31,0);
    tracep->declBus(c+175,"rf_18", false,-1, 31,0);
    tracep->declBus(c+176,"rf_19", false,-1, 31,0);
    tracep->declBus(c+177,"rf_20", false,-1, 31,0);
    tracep->declBus(c+178,"rf_21", false,-1, 31,0);
    tracep->declBus(c+179,"rf_22", false,-1, 31,0);
    tracep->declBus(c+180,"rf_23", false,-1, 31,0);
    tracep->declBus(c+181,"rf_24", false,-1, 31,0);
    tracep->declBus(c+182,"rf_25", false,-1, 31,0);
    tracep->declBus(c+183,"rf_26", false,-1, 31,0);
    tracep->declBus(c+184,"rf_27", false,-1, 31,0);
    tracep->declBus(c+185,"rf_28", false,-1, 31,0);
    tracep->declBus(c+186,"rf_29", false,-1, 31,0);
    tracep->declBus(c+187,"rf_30", false,-1, 31,0);
    tracep->declBus(c+188,"rf_31", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+193+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_exec_once ");
    tracep->declBit(c+190,"valid", false,-1);
    tracep->declBus(c+192,"pc", false,-1, 31,0);
    tracep->declBus(c+191,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("npc_brk ");
    tracep->declBit(c+189,"is_break", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("IF ");
    tracep->declBus(c+1,"tods_bits_pc", false,-1, 31,0);
    tracep->declBus(c+2,"tods_bits_inst", false,-1, 31,0);
    tracep->declBus(c+2,"inst_sram_rdata", false,-1, 31,0);
    tracep->declBus(c+1,"fs_bits_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBus(c+1,"ms_bits_pc", false,-1, 31,0);
    tracep->declBus(c+5,"ms_bits_alu_res", false,-1, 31,0);
    tracep->declBus(c+15,"ms_bits_inst_name", false,-1, 4,0);
    tracep->declBit(c+18,"ms_bits_res_from_mem", false,-1);
    tracep->declBus(c+13,"ms_bits_rf_waddr", false,-1, 4,0);
    tracep->declBit(c+16,"ms_bits_is_break", false,-1);
    tracep->declBus(c+2,"ms_bits_inst", false,-1, 31,0);
    tracep->declBus(c+1,"tows_bits_pc", false,-1, 31,0);
    tracep->declBus(c+13,"tows_bits_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+17,"tows_bits_rf_wdata", false,-1, 31,0);
    tracep->declBit(c+16,"tows_bits_is_break", false,-1);
    tracep->declBus(c+2,"tows_bits_inst", false,-1, 31,0);
    tracep->declBus(c+8,"data_sram_rdata", false,-1, 31,0);
    tracep->declBus(c+225,"mem_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+1,"ws_bits_pc", false,-1, 31,0);
    tracep->declBus(c+13,"ws_bits_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+17,"ws_bits_rf_wdata", false,-1, 31,0);
    tracep->declBit(c+16,"ws_bits_is_break", false,-1);
    tracep->declBus(c+2,"ws_bits_inst", false,-1, 31,0);
    tracep->declBus(c+1,"torf_pc", false,-1, 31,0);
    tracep->declBus(c+13,"torf_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+17,"torf_rf_wdata", false,-1, 31,0);
    tracep->declBit(c+16,"torf_is_break", false,-1);
    tracep->declBus(c+2,"torf_inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pIF ");
    tracep->declBit(c+226,"clock", false,-1);
    tracep->declBit(c+227,"reset", false,-1);
    tracep->declBit(c+9,"br_taken", false,-1);
    tracep->declBus(c+10,"br_target", false,-1, 31,0);
    tracep->declBus(c+1,"inst_sram_addr", false,-1, 31,0);
    tracep->declBus(c+1,"tofs_bits_pc", false,-1, 31,0);
    tracep->declBus(c+1,"pc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("dram ");
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBit(c+4,"wr", false,-1);
    tracep->declBus(c+5,"addr", false,-1, 31,0);
    tracep->declBus(c+6,"wdata", false,-1, 31,0);
    tracep->declBus(c+7,"wstrb", false,-1, 3,0);
    tracep->declBus(c+8,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("iram ");
    tracep->declBit(c+228,"en", false,-1);
    tracep->declBit(c+229,"wr", false,-1);
    tracep->declBus(c+1,"addr", false,-1, 31,0);
    tracep->declBus(c+230,"wdata", false,-1, 31,0);
    tracep->declBus(c+231,"wstrb", false,-1, 3,0);
    tracep->declBus(c+2,"rdata", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc),32);
    bufp->fullIData(oldp+2,(vlSelf->Main__DOT__iram_rdata),32);
    bufp->fullBit(oldp+3,((2U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we))));
    bufp->fullBit(oldp+4,((0U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we))));
    bufp->fullIData(oldp+5,((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___io_res_T_18)),32);
    bufp->fullIData(oldp+6,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata2),32);
    bufp->fullCData(oldp+7,(((0xdU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                              ? 7U : ((0xcU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                       ? 3U : ((0xbU 
                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                                ? 1U
                                                : 0xdU)))),4);
    bufp->fullIData(oldp+8,(vlSelf->Main__DOT__dram_rdata),32);
    bufp->fullBit(oldp+9,((((((((((0U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)) 
                                  & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__rj_eq_rd)) 
                                 | ((~ (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__rj_eq_rd)) 
                                    & (1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)))) 
                                | ((2U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)) 
                                   & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__slt_res))) 
                               | ((~ (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__slt_res)) 
                                  & (3U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)))) 
                              | ((~ (IData)((1ULL & 
                                             ((1ULL 
                                               + vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_T) 
                                              >> 0x20U)))) 
                                 & (4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)))) 
                             | ((IData)((1ULL & ((1ULL 
                                                  + vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_T) 
                                                 >> 0x20U))) 
                                & (5U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)))) 
                            | (0xeU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))) 
                           | ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)) 
                              | (0x10U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))))));
    bufp->fullIData(oldp+10,((((0x10U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata1
                                : vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc) 
                              + vlSelf->Main__DOT__cpucore__DOT__ID__DOT__imm)),32);
    bufp->fullIData(oldp+11,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2),32);
    bufp->fullCData(oldp+12,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op),5);
    bufp->fullCData(oldp+13,(((0xeU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                               ? 1U : (0x1fU & vlSelf->Main__DOT__iram_rdata))),5);
    bufp->fullCData(oldp+14,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we),2);
    bufp->fullCData(oldp+15,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name),5);
    bufp->fullBit(oldp+16,((7U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))));
    bufp->fullIData(oldp+17,(((1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we))
                               ? ((8U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
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
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->Main__DOT__dram_rdata 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->Main__DOT__dram_rdata))
                                                   : 0xdeadU)))))
                               : (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___io_res_T_18))),32);
    bufp->fullBit(oldp+18,((1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we))));
    bufp->fullBit(oldp+19,((1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+20,((2U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+21,((3U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+22,((4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+23,((5U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+24,((6U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+25,((7U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+26,((8U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+27,((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+28,((0xaU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+29,((0xbU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+30,((0xcU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+31,((0xdU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+32,((0xeU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+33,((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+34,((0x10U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+35,((0x12U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+36,((0x11U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+37,((0x13U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+38,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_sub));
    bufp->fullQData(oldp+39,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_res),33);
    bufp->fullBit(oldp+41,((1U & (((~ (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2 
                                       >> 0x1fU)) & 
                                   (vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc 
                                    >> 0x1fU)) | ((~ 
                                                   ((vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc 
                                                     ^ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2) 
                                                    >> 0x1fU)) 
                                                  & (IData)(
                                                            (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_res 
                                                             >> 0x1fU)))))));
    bufp->fullBit(oldp+42,((1U & (~ (IData)((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_res 
                                             >> 0x20U))))));
    bufp->fullIData(oldp+43,((vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc 
                              & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
    bufp->fullIData(oldp+44,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__or_res),32);
    bufp->fullIData(oldp+45,((~ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__or_res)),32);
    bufp->fullIData(oldp+46,((vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc 
                              ^ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
    bufp->fullQData(oldp+47,((0x7fffffffffffffffULL 
                              & ((QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc)) 
                                 << (0x1fU & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)))),63);
    bufp->fullQData(oldp+49,((((QData)((IData)((((vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc 
                                                  >> 0x1fU) 
                                                 & (0xbU 
                                                    == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op)))
                                                 ? 0xffffffffU
                                                 : 0U))) 
                               << 0x20U) | (QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc)))),64);
    bufp->fullQData(oldp+51,(((((QData)((IData)((((vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc 
                                                   >> 0x1fU) 
                                                  & (0xbU 
                                                     == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op)))
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0x20U) | (QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc))) 
                              >> (0x1fU & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2))),64);
    bufp->fullQData(oldp+53,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__mul_pre),64);
    bufp->fullIData(oldp+55,((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__mul_pre)),32);
    bufp->fullIData(oldp+56,((IData)((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__mul_pre 
                                      >> 0x20U))),32);
    bufp->fullIData(oldp+57,((IData)((VL_MULS_QQQ(64, 
                                                  VL_EXTENDS_QI(64,32, vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc), 
                                                  VL_EXTENDS_QI(64,32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)) 
                                      >> 0x20U))),32);
    bufp->fullIData(oldp+58,(VL_DIV_III(32, vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
    bufp->fullIData(oldp+59,(VL_MODDIV_III(32, vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
    bufp->fullIData(oldp+60,(VL_MODDIVS_III(32, vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
    bufp->fullIData(oldp+61,((IData)((0x1ffffffffULL 
                                      & VL_DIVS_QQQ(33, 
                                                    (0x1ffffffffULL 
                                                     & VL_EXTENDS_QI(33,32, vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc)), 
                                                    (0x1ffffffffULL 
                                                     & VL_EXTENDS_QI(33,32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)))))),32);
    bufp->fullCData(oldp+62,((0x1fU & (vlSelf->Main__DOT__iram_rdata 
                                       >> 5U))),5);
    bufp->fullCData(oldp+63,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_io_rdata2_MPORT_addr),5);
    bufp->fullIData(oldp+64,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata1),32);
    bufp->fullCData(oldp+65,((0x1fU & vlSelf->Main__DOT__iram_rdata)),5);
    bufp->fullCData(oldp+66,((0x1fU & (vlSelf->Main__DOT__iram_rdata 
                                       >> 0xaU))),5);
    bufp->fullSData(oldp+67,((0xfffU & (vlSelf->Main__DOT__iram_rdata 
                                        >> 0xaU))),12);
    bufp->fullIData(oldp+68,((((- (IData)((1U & (vlSelf->Main__DOT__iram_rdata 
                                                 >> 0x15U)))) 
                               << 0xcU) | (0xfffU & 
                                           (vlSelf->Main__DOT__iram_rdata 
                                            >> 0xaU)))),32);
    bufp->fullIData(oldp+69,((0xfffff000U & (vlSelf->Main__DOT__iram_rdata 
                                             << 7U))),32);
    bufp->fullIData(oldp+70,((~ vlSelf->Main__DOT__iram_rdata)),32);
    bufp->fullBit(oldp+71,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0xfU)))));
    bufp->fullBit(oldp+72,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x10U)))));
    bufp->fullBit(oldp+73,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x11U)))));
    bufp->fullBit(oldp+74,((1U & (vlSelf->Main__DOT__iram_rdata 
                                  >> 0x14U))));
    bufp->fullBit(oldp+75,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x15U)))));
    bufp->fullBit(oldp+76,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x16U)))));
    bufp->fullBit(oldp+77,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x17U)))));
    bufp->fullBit(oldp+78,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x18U)))));
    bufp->fullBit(oldp+79,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x19U)))));
    bufp->fullBit(oldp+80,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x1aU)))));
    bufp->fullBit(oldp+81,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x1bU)))));
    bufp->fullBit(oldp+82,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x1cU)))));
    bufp->fullBit(oldp+83,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x1dU)))));
    bufp->fullBit(oldp+84,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x1eU)))));
    bufp->fullBit(oldp+85,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x1fU)))));
    bufp->fullCData(oldp+86,(((0x40U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                            >> 0x19U)) 
                                        << 6U)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_he1db0bdc__0))),7);
    bufp->fullBit(oldp+87,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x12U)))));
    bufp->fullCData(oldp+88,(((0x80U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                            >> 0x18U)) 
                                        << 7U)) | (
                                                   (0x40U 
                                                    & ((~ 
                                                        (vlSelf->Main__DOT__iram_rdata 
                                                         >> 0x19U)) 
                                                       << 6U)) 
                                                   | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_he1db0bdc__0)))),8);
    bufp->fullBit(oldp+89,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x13U)))));
    bufp->fullBit(oldp+90,((1U & (vlSelf->Main__DOT__iram_rdata 
                                  >> 0x10U))));
    bufp->fullBit(oldp+91,((1U & (vlSelf->Main__DOT__iram_rdata 
                                  >> 0x11U))));
    bufp->fullBit(oldp+92,((1U & (vlSelf->Main__DOT__iram_rdata 
                                  >> 0xfU))));
    bufp->fullBit(oldp+93,((1U & (vlSelf->Main__DOT__iram_rdata 
                                  >> 0x12U))));
    bufp->fullBit(oldp+94,((1U & (vlSelf->Main__DOT__iram_rdata 
                                  >> 0x13U))));
    bufp->fullBit(oldp+95,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x14U)))));
    bufp->fullBit(oldp+96,((1U & (vlSelf->Main__DOT__iram_rdata 
                                  >> 0x15U))));
    bufp->fullBit(oldp+97,((1U & (vlSelf->Main__DOT__iram_rdata 
                                  >> 0x16U))));
    bufp->fullBit(oldp+98,((1U & (vlSelf->Main__DOT__iram_rdata 
                                  >> 0x19U))));
    bufp->fullBit(oldp+99,((1U & (vlSelf->Main__DOT__iram_rdata 
                                  >> 0x17U))));
    bufp->fullBit(oldp+100,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x18U))));
    bufp->fullBit(oldp+101,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+102,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+103,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+104,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+105,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x1eU))));
    bufp->fullCData(oldp+106,((((IData)((0x1ffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_64))) 
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
    bufp->fullCData(oldp+107,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5),3);
    bufp->fullCData(oldp+108,((((IData)((0x1ffffU == vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_52)) 
                                << 6U) | (((IData)(
                                                   (0x1ffU 
                                                    == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_62))) 
                                           << 5U) | 
                                          (((IData)(
                                                    (0x1ffU 
                                                     == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_64))) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0x3fU 
                                                        == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_82))) 
                                               << 3U) 
                                              | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5)))))),7);
    bufp->fullCData(oldp+109,((((IData)((0x1ffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_70))) 
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
    bufp->fullCData(oldp+110,(((((vlSelf->Main__DOT__iram_rdata 
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
    bufp->fullCData(oldp+111,((((IData)((0U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5))) 
                                << 7U) | (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_12))) 
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
    bufp->fullIData(oldp+112,((((IData)((0x7fffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_46))) 
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
                                                                                != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_12))) 
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
    bufp->fullCData(oldp+113,(((0x80U & ((~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5)))) 
                                         << 7U)) | 
                               (((IData)((0U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_12))) 
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
    bufp->fullIData(oldp+114,((((IData)((0x7fffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_46))) 
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
                                                                                != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_12))) 
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
    bufp->fullCData(oldp+115,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type),4);
    bufp->fullIData(oldp+116,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__imm),32);
    bufp->fullBit(oldp+117,((((0x10U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)) 
                              & (4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))) 
                             | (0U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we)))));
    bufp->fullBit(oldp+118,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__rj_eq_rd));
    bufp->fullQData(oldp+119,((0x1ffffffffULL & (1ULL 
                                                 + vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_T))),33);
    bufp->fullBit(oldp+121,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__slt_res));
    bufp->fullBit(oldp+122,((1U & (~ (IData)((1ULL 
                                              & ((1ULL 
                                                  + vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_T) 
                                                 >> 0x20U)))))));
    bufp->fullIData(oldp+123,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[0]),32);
    bufp->fullIData(oldp+124,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[1]),32);
    bufp->fullIData(oldp+125,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[2]),32);
    bufp->fullIData(oldp+126,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[3]),32);
    bufp->fullIData(oldp+127,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[4]),32);
    bufp->fullIData(oldp+128,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[5]),32);
    bufp->fullIData(oldp+129,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[6]),32);
    bufp->fullIData(oldp+130,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[7]),32);
    bufp->fullIData(oldp+131,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[8]),32);
    bufp->fullIData(oldp+132,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[9]),32);
    bufp->fullIData(oldp+133,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[10]),32);
    bufp->fullIData(oldp+134,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[11]),32);
    bufp->fullIData(oldp+135,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[12]),32);
    bufp->fullIData(oldp+136,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[13]),32);
    bufp->fullIData(oldp+137,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[14]),32);
    bufp->fullIData(oldp+138,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[15]),32);
    bufp->fullIData(oldp+139,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[16]),32);
    bufp->fullIData(oldp+140,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[17]),32);
    bufp->fullIData(oldp+141,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[18]),32);
    bufp->fullIData(oldp+142,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[19]),32);
    bufp->fullIData(oldp+143,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[20]),32);
    bufp->fullIData(oldp+144,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[21]),32);
    bufp->fullIData(oldp+145,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[22]),32);
    bufp->fullIData(oldp+146,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[23]),32);
    bufp->fullIData(oldp+147,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[24]),32);
    bufp->fullIData(oldp+148,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[25]),32);
    bufp->fullIData(oldp+149,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[26]),32);
    bufp->fullIData(oldp+150,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[27]),32);
    bufp->fullIData(oldp+151,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[28]),32);
    bufp->fullIData(oldp+152,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[29]),32);
    bufp->fullIData(oldp+153,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[30]),32);
    bufp->fullIData(oldp+154,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[31]),32);
    bufp->fullIData(oldp+155,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_io_rdata1_MPORT_data),32);
    bufp->fullIData(oldp+156,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_io_rdata2_MPORT_data),32);
    bufp->fullIData(oldp+157,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0U]),32);
    bufp->fullIData(oldp+158,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [1U]),32);
    bufp->fullIData(oldp+159,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [2U]),32);
    bufp->fullIData(oldp+160,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [3U]),32);
    bufp->fullIData(oldp+161,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [4U]),32);
    bufp->fullIData(oldp+162,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [5U]),32);
    bufp->fullIData(oldp+163,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [6U]),32);
    bufp->fullIData(oldp+164,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [7U]),32);
    bufp->fullIData(oldp+165,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [8U]),32);
    bufp->fullIData(oldp+166,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [9U]),32);
    bufp->fullIData(oldp+167,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0xaU]),32);
    bufp->fullIData(oldp+168,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0xbU]),32);
    bufp->fullIData(oldp+169,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0xcU]),32);
    bufp->fullIData(oldp+170,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0xdU]),32);
    bufp->fullIData(oldp+171,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0xeU]),32);
    bufp->fullIData(oldp+172,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0xfU]),32);
    bufp->fullIData(oldp+173,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x10U]),32);
    bufp->fullIData(oldp+174,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x11U]),32);
    bufp->fullIData(oldp+175,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x12U]),32);
    bufp->fullIData(oldp+176,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x13U]),32);
    bufp->fullIData(oldp+177,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x14U]),32);
    bufp->fullIData(oldp+178,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x15U]),32);
    bufp->fullIData(oldp+179,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x16U]),32);
    bufp->fullIData(oldp+180,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x17U]),32);
    bufp->fullIData(oldp+181,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x18U]),32);
    bufp->fullIData(oldp+182,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x19U]),32);
    bufp->fullIData(oldp+183,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x1aU]),32);
    bufp->fullIData(oldp+184,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x1bU]),32);
    bufp->fullIData(oldp+185,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x1cU]),32);
    bufp->fullIData(oldp+186,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x1dU]),32);
    bufp->fullIData(oldp+187,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x1eU]),32);
    bufp->fullIData(oldp+188,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x1fU]),32);
    bufp->fullBit(oldp+189,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__is_break));
    bufp->fullBit(oldp+190,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__valid));
    bufp->fullIData(oldp+191,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst),32);
    bufp->fullIData(oldp+192,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__pc),32);
    bufp->fullIData(oldp+193,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0]),32);
    bufp->fullIData(oldp+194,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[1]),32);
    bufp->fullIData(oldp+195,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[2]),32);
    bufp->fullIData(oldp+196,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[3]),32);
    bufp->fullIData(oldp+197,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[4]),32);
    bufp->fullIData(oldp+198,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[5]),32);
    bufp->fullIData(oldp+199,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[6]),32);
    bufp->fullIData(oldp+200,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[7]),32);
    bufp->fullIData(oldp+201,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[8]),32);
    bufp->fullIData(oldp+202,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[9]),32);
    bufp->fullIData(oldp+203,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[10]),32);
    bufp->fullIData(oldp+204,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[11]),32);
    bufp->fullIData(oldp+205,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[12]),32);
    bufp->fullIData(oldp+206,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[13]),32);
    bufp->fullIData(oldp+207,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[14]),32);
    bufp->fullIData(oldp+208,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[15]),32);
    bufp->fullIData(oldp+209,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[16]),32);
    bufp->fullIData(oldp+210,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[17]),32);
    bufp->fullIData(oldp+211,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[18]),32);
    bufp->fullIData(oldp+212,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[19]),32);
    bufp->fullIData(oldp+213,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[20]),32);
    bufp->fullIData(oldp+214,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[21]),32);
    bufp->fullIData(oldp+215,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[22]),32);
    bufp->fullIData(oldp+216,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[23]),32);
    bufp->fullIData(oldp+217,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[24]),32);
    bufp->fullIData(oldp+218,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[25]),32);
    bufp->fullIData(oldp+219,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[26]),32);
    bufp->fullIData(oldp+220,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[27]),32);
    bufp->fullIData(oldp+221,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[28]),32);
    bufp->fullIData(oldp+222,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[29]),32);
    bufp->fullIData(oldp+223,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[30]),32);
    bufp->fullIData(oldp+224,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[31]),32);
    bufp->fullIData(oldp+225,(((8U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
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
    bufp->fullBit(oldp+226,(vlSelf->clock));
    bufp->fullBit(oldp+227,(vlSelf->reset));
    bufp->fullBit(oldp+228,(1U));
    bufp->fullBit(oldp+229,(0U));
    bufp->fullIData(oldp+230,(0U),32);
    bufp->fullCData(oldp+231,(0U),4);
    bufp->fullCData(oldp+232,(0U),5);
    bufp->fullCData(oldp+233,(1U),5);
    bufp->fullCData(oldp+234,(2U),5);
    bufp->fullCData(oldp+235,(3U),5);
    bufp->fullCData(oldp+236,(4U),5);
    bufp->fullCData(oldp+237,(5U),5);
    bufp->fullCData(oldp+238,(6U),5);
    bufp->fullCData(oldp+239,(7U),5);
    bufp->fullCData(oldp+240,(8U),5);
    bufp->fullCData(oldp+241,(9U),5);
    bufp->fullCData(oldp+242,(0xaU),5);
    bufp->fullCData(oldp+243,(0xbU),5);
    bufp->fullCData(oldp+244,(0xcU),5);
    bufp->fullCData(oldp+245,(0xdU),5);
    bufp->fullCData(oldp+246,(0xeU),5);
    bufp->fullCData(oldp+247,(0xfU),5);
    bufp->fullCData(oldp+248,(0x10U),5);
    bufp->fullCData(oldp+249,(0x11U),5);
    bufp->fullCData(oldp+250,(0x12U),5);
    bufp->fullCData(oldp+251,(0x13U),5);
    bufp->fullCData(oldp+252,(0x14U),5);
    bufp->fullCData(oldp+253,(0x15U),5);
    bufp->fullCData(oldp+254,(0x16U),5);
    bufp->fullCData(oldp+255,(0x17U),5);
    bufp->fullCData(oldp+256,(0x18U),5);
    bufp->fullCData(oldp+257,(0x19U),5);
    bufp->fullCData(oldp+258,(0x1aU),5);
    bufp->fullCData(oldp+259,(0x1bU),5);
    bufp->fullCData(oldp+260,(0x1cU),5);
    bufp->fullCData(oldp+261,(0x1dU),5);
    bufp->fullCData(oldp+262,(0x1eU),5);
    bufp->fullCData(oldp+263,(0x1fU),5);
}
