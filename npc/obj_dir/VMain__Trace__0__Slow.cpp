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
    tracep->declBit(c+441,"clock", false,-1);
    tracep->declBit(c+442,"reset", false,-1);
    tracep->pushNamePrefix("Main ");
    tracep->declBit(c+441,"clock", false,-1);
    tracep->declBit(c+442,"reset", false,-1);
    tracep->declBit(c+441,"cpucore_clock", false,-1);
    tracep->declBit(c+442,"cpucore_reset", false,-1);
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
    tracep->declBit(c+444,"iram_wr", false,-1);
    tracep->declBus(c+2,"iram_addr", false,-1, 31,0);
    tracep->declBus(c+445,"iram_wdata", false,-1, 31,0);
    tracep->declBus(c+446,"iram_wstrb", false,-1, 3,0);
    tracep->declBus(c+3,"iram_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("cpucore ");
    tracep->declBit(c+441,"clock", false,-1);
    tracep->declBit(c+442,"reset", false,-1);
    tracep->declBit(c+1,"inst_sram_en", false,-1);
    tracep->declBus(c+2,"inst_sram_addr", false,-1, 31,0);
    tracep->declBus(c+3,"inst_sram_rdata", false,-1, 31,0);
    tracep->declBit(c+4,"data_sram_en", false,-1);
    tracep->declBit(c+5,"data_sram_wr", false,-1);
    tracep->declBus(c+6,"data_sram_addr", false,-1, 31,0);
    tracep->declBus(c+7,"data_sram_wdata", false,-1, 31,0);
    tracep->declBus(c+8,"data_sram_wstrb", false,-1, 3,0);
    tracep->declBus(c+9,"data_sram_rdata", false,-1, 31,0);
    tracep->declBit(c+441,"pIF_clock", false,-1);
    tracep->declBit(c+442,"pIF_reset", false,-1);
    tracep->declBit(c+10,"pIF_br_taken", false,-1);
    tracep->declBus(c+11,"pIF_br_target", false,-1, 31,0);
    tracep->declBit(c+1,"pIF_inst_sram_en", false,-1);
    tracep->declBus(c+2,"pIF_inst_sram_addr", false,-1, 31,0);
    tracep->declBit(c+443,"pIF_tofs_valid", false,-1);
    tracep->declBus(c+2,"pIF_tofs_bits_pc", false,-1, 31,0);
    tracep->declBus(c+12,"pIF_tofs_bits_next_pc", false,-1, 31,0);
    tracep->declBit(c+13,"pIF_csr_br_taken", false,-1);
    tracep->declBus(c+14,"pIF_csr_br_pc", false,-1, 31,0);
    tracep->declBit(c+443,"IF_tods_valid", false,-1);
    tracep->declBus(c+2,"IF_tods_bits_pc", false,-1, 31,0);
    tracep->declBus(c+3,"IF_tods_bits_inst", false,-1, 31,0);
    tracep->declBus(c+12,"IF_tods_bits_next_pc", false,-1, 31,0);
    tracep->declBus(c+3,"IF_inst_sram_rdata", false,-1, 31,0);
    tracep->declBit(c+443,"IF_fs_valid", false,-1);
    tracep->declBus(c+2,"IF_fs_bits_pc", false,-1, 31,0);
    tracep->declBus(c+12,"IF_fs_bits_next_pc", false,-1, 31,0);
    tracep->declBit(c+441,"ID_clock", false,-1);
    tracep->declBit(c+443,"ID_toes_valid", false,-1);
    tracep->declBus(c+2,"ID_toes_bits_pc", false,-1, 31,0);
    tracep->declBus(c+15,"ID_toes_bits_alu_src1", false,-1, 31,0);
    tracep->declBus(c+16,"ID_toes_bits_alu_src2", false,-1, 31,0);
    tracep->declBus(c+17,"ID_toes_bits_alu_op", false,-1, 4,0);
    tracep->declBus(c+18,"ID_toes_bits_rf_waddr", false,-1, 4,0);
    tracep->declBit(c+19,"ID_toes_bits_rf_we", false,-1);
    tracep->declBus(c+20,"ID_toes_bits_mem_we", false,-1, 1,0);
    tracep->declBus(c+21,"ID_toes_bits_inst_name", false,-1, 4,0);
    tracep->declBus(c+7,"ID_toes_bits_mem_wdata", false,-1, 31,0);
    tracep->declBus(c+22,"ID_toes_bits_csr_num", false,-1, 13,0);
    tracep->declBit(c+23,"ID_toes_bits_csr_we", false,-1);
    tracep->declBit(c+24,"ID_toes_bits_ex", false,-1);
    tracep->declBit(c+25,"ID_toes_bits_ertn", false,-1);
    tracep->declBus(c+26,"ID_toes_bits_csr_wmask", false,-1, 31,0);
    tracep->declBit(c+27,"ID_toes_bits_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"ID_toes_bits_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"ID_toes_bits_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+28,"ID_toes_bits_dpi_c_inv", false,-1);
    tracep->declBit(c+443,"ID_ds_valid", false,-1);
    tracep->declBus(c+2,"ID_ds_bits_pc", false,-1, 31,0);
    tracep->declBus(c+3,"ID_ds_bits_inst", false,-1, 31,0);
    tracep->declBus(c+12,"ID_ds_bits_next_pc", false,-1, 31,0);
    tracep->declBit(c+19,"ID_torf_rf_we", false,-1);
    tracep->declBus(c+18,"ID_torf_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+29,"ID_torf_rf_wdata", false,-1, 31,0);
    tracep->declBit(c+443,"ID_torf_valid", false,-1);
    tracep->declBit(c+27,"ID_torf_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"ID_torf_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"ID_torf_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+28,"ID_torf_dpi_c_inv", false,-1);
    tracep->declBit(c+24,"ID_torf_dpi_c_csr_ex", false,-1);
    tracep->declBit(c+25,"ID_torf_dpi_c_csr_ertn", false,-1);
    tracep->declBus(c+30,"ID_torf_dpi_c_csr_ecode", false,-1, 5,0);
    tracep->declBus(c+2,"ID_torf_dpi_c_csr_ex_pc", false,-1, 31,0);
    tracep->declBus(c+31,"ID_torf_dpi_c_csr_crmd", false,-1, 31,0);
    tracep->declBus(c+32,"ID_torf_dpi_c_csr_prmd", false,-1, 31,0);
    tracep->declBus(c+33,"ID_torf_dpi_c_csr_estat", false,-1, 31,0);
    tracep->declBus(c+34,"ID_torf_dpi_c_csr_era", false,-1, 31,0);
    tracep->declBus(c+35,"ID_torf_dpi_c_csr_eentry", false,-1, 31,0);
    tracep->declBit(c+10,"ID_br_taken", false,-1);
    tracep->declBus(c+11,"ID_br_target", false,-1, 31,0);
    tracep->declBit(c+443,"EXE_es_valid", false,-1);
    tracep->declBus(c+2,"EXE_es_bits_pc", false,-1, 31,0);
    tracep->declBus(c+15,"EXE_es_bits_alu_src1", false,-1, 31,0);
    tracep->declBus(c+16,"EXE_es_bits_alu_src2", false,-1, 31,0);
    tracep->declBus(c+17,"EXE_es_bits_alu_op", false,-1, 4,0);
    tracep->declBus(c+18,"EXE_es_bits_rf_waddr", false,-1, 4,0);
    tracep->declBit(c+19,"EXE_es_bits_rf_we", false,-1);
    tracep->declBus(c+20,"EXE_es_bits_mem_we", false,-1, 1,0);
    tracep->declBus(c+21,"EXE_es_bits_inst_name", false,-1, 4,0);
    tracep->declBus(c+7,"EXE_es_bits_mem_wdata", false,-1, 31,0);
    tracep->declBus(c+22,"EXE_es_bits_csr_num", false,-1, 13,0);
    tracep->declBit(c+23,"EXE_es_bits_csr_we", false,-1);
    tracep->declBit(c+24,"EXE_es_bits_ex", false,-1);
    tracep->declBit(c+25,"EXE_es_bits_ertn", false,-1);
    tracep->declBus(c+26,"EXE_es_bits_csr_wmask", false,-1, 31,0);
    tracep->declBit(c+27,"EXE_es_bits_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"EXE_es_bits_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"EXE_es_bits_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+28,"EXE_es_bits_dpi_c_inv", false,-1);
    tracep->declBit(c+443,"EXE_toms_valid", false,-1);
    tracep->declBus(c+36,"EXE_toms_bits_rf_wdata", false,-1, 31,0);
    tracep->declBus(c+21,"EXE_toms_bits_inst_name", false,-1, 4,0);
    tracep->declBit(c+37,"EXE_toms_bits_res_from_mem", false,-1);
    tracep->declBit(c+19,"EXE_toms_bits_rf_we", false,-1);
    tracep->declBus(c+18,"EXE_toms_bits_rf_waddr", false,-1, 4,0);
    tracep->declBit(c+27,"EXE_toms_bits_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"EXE_toms_bits_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"EXE_toms_bits_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+28,"EXE_toms_bits_dpi_c_inv", false,-1);
    tracep->declBit(c+24,"EXE_toms_bits_dpi_c_csr_ex", false,-1);
    tracep->declBit(c+25,"EXE_toms_bits_dpi_c_csr_ertn", false,-1);
    tracep->declBus(c+30,"EXE_toms_bits_dpi_c_csr_ecode", false,-1, 5,0);
    tracep->declBus(c+2,"EXE_toms_bits_dpi_c_csr_ex_pc", false,-1, 31,0);
    tracep->declBus(c+31,"EXE_toms_bits_dpi_c_csr_crmd", false,-1, 31,0);
    tracep->declBus(c+32,"EXE_toms_bits_dpi_c_csr_prmd", false,-1, 31,0);
    tracep->declBus(c+33,"EXE_toms_bits_dpi_c_csr_estat", false,-1, 31,0);
    tracep->declBus(c+34,"EXE_toms_bits_dpi_c_csr_era", false,-1, 31,0);
    tracep->declBus(c+35,"EXE_toms_bits_dpi_c_csr_eentry", false,-1, 31,0);
    tracep->declBit(c+4,"EXE_data_sram_en", false,-1);
    tracep->declBit(c+5,"EXE_data_sram_wr", false,-1);
    tracep->declBus(c+6,"EXE_data_sram_addr", false,-1, 31,0);
    tracep->declBus(c+7,"EXE_data_sram_wdata", false,-1, 31,0);
    tracep->declBus(c+8,"EXE_data_sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+23,"EXE_csr_we", false,-1);
    tracep->declBus(c+22,"EXE_csr_num", false,-1, 13,0);
    tracep->declBus(c+16,"EXE_csr_wvalue", false,-1, 31,0);
    tracep->declBus(c+26,"EXE_csr_wmask", false,-1, 31,0);
    tracep->declBus(c+38,"EXE_csr_rvalue", false,-1, 31,0);
    tracep->declBit(c+24,"EXE_csr_ex", false,-1);
    tracep->declBit(c+25,"EXE_csr_ertn", false,-1);
    tracep->declBus(c+2,"EXE_csr_exe_pc", false,-1, 31,0);
    tracep->declBus(c+30,"EXE_csr_ecode", false,-1, 5,0);
    tracep->declBit(c+24,"EXE_csr_dpic_ex", false,-1);
    tracep->declBit(c+25,"EXE_csr_dpic_ertn", false,-1);
    tracep->declBus(c+30,"EXE_csr_dpic_ecode", false,-1, 5,0);
    tracep->declBus(c+2,"EXE_csr_dpic_ex_pc", false,-1, 31,0);
    tracep->declBus(c+31,"EXE_csr_dpic_crmd", false,-1, 31,0);
    tracep->declBus(c+32,"EXE_csr_dpic_prmd", false,-1, 31,0);
    tracep->declBus(c+33,"EXE_csr_dpic_estat", false,-1, 31,0);
    tracep->declBus(c+34,"EXE_csr_dpic_era", false,-1, 31,0);
    tracep->declBus(c+35,"EXE_csr_dpic_eentry", false,-1, 31,0);
    tracep->declBit(c+443,"MEM_ms_valid", false,-1);
    tracep->declBus(c+36,"MEM_ms_bits_rf_wdata", false,-1, 31,0);
    tracep->declBus(c+21,"MEM_ms_bits_inst_name", false,-1, 4,0);
    tracep->declBit(c+37,"MEM_ms_bits_res_from_mem", false,-1);
    tracep->declBit(c+19,"MEM_ms_bits_rf_we", false,-1);
    tracep->declBus(c+18,"MEM_ms_bits_rf_waddr", false,-1, 4,0);
    tracep->declBit(c+27,"MEM_ms_bits_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"MEM_ms_bits_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"MEM_ms_bits_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+28,"MEM_ms_bits_dpi_c_inv", false,-1);
    tracep->declBit(c+24,"MEM_ms_bits_dpi_c_csr_ex", false,-1);
    tracep->declBit(c+25,"MEM_ms_bits_dpi_c_csr_ertn", false,-1);
    tracep->declBus(c+30,"MEM_ms_bits_dpi_c_csr_ecode", false,-1, 5,0);
    tracep->declBus(c+2,"MEM_ms_bits_dpi_c_csr_ex_pc", false,-1, 31,0);
    tracep->declBus(c+31,"MEM_ms_bits_dpi_c_csr_crmd", false,-1, 31,0);
    tracep->declBus(c+32,"MEM_ms_bits_dpi_c_csr_prmd", false,-1, 31,0);
    tracep->declBus(c+33,"MEM_ms_bits_dpi_c_csr_estat", false,-1, 31,0);
    tracep->declBus(c+34,"MEM_ms_bits_dpi_c_csr_era", false,-1, 31,0);
    tracep->declBus(c+35,"MEM_ms_bits_dpi_c_csr_eentry", false,-1, 31,0);
    tracep->declBit(c+443,"MEM_tows_valid", false,-1);
    tracep->declBit(c+19,"MEM_tows_bits_rf_we", false,-1);
    tracep->declBus(c+18,"MEM_tows_bits_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+29,"MEM_tows_bits_rf_wdata", false,-1, 31,0);
    tracep->declBit(c+27,"MEM_tows_bits_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"MEM_tows_bits_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"MEM_tows_bits_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+28,"MEM_tows_bits_dpi_c_inv", false,-1);
    tracep->declBit(c+24,"MEM_tows_bits_dpi_c_csr_ex", false,-1);
    tracep->declBit(c+25,"MEM_tows_bits_dpi_c_csr_ertn", false,-1);
    tracep->declBus(c+30,"MEM_tows_bits_dpi_c_csr_ecode", false,-1, 5,0);
    tracep->declBus(c+2,"MEM_tows_bits_dpi_c_csr_ex_pc", false,-1, 31,0);
    tracep->declBus(c+31,"MEM_tows_bits_dpi_c_csr_crmd", false,-1, 31,0);
    tracep->declBus(c+32,"MEM_tows_bits_dpi_c_csr_prmd", false,-1, 31,0);
    tracep->declBus(c+33,"MEM_tows_bits_dpi_c_csr_estat", false,-1, 31,0);
    tracep->declBus(c+34,"MEM_tows_bits_dpi_c_csr_era", false,-1, 31,0);
    tracep->declBus(c+35,"MEM_tows_bits_dpi_c_csr_eentry", false,-1, 31,0);
    tracep->declBus(c+9,"MEM_data_sram_rdata", false,-1, 31,0);
    tracep->declBit(c+443,"WB_ws_valid", false,-1);
    tracep->declBit(c+19,"WB_ws_bits_rf_we", false,-1);
    tracep->declBus(c+18,"WB_ws_bits_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+29,"WB_ws_bits_rf_wdata", false,-1, 31,0);
    tracep->declBit(c+27,"WB_ws_bits_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"WB_ws_bits_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"WB_ws_bits_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+28,"WB_ws_bits_dpi_c_inv", false,-1);
    tracep->declBit(c+24,"WB_ws_bits_dpi_c_csr_ex", false,-1);
    tracep->declBit(c+25,"WB_ws_bits_dpi_c_csr_ertn", false,-1);
    tracep->declBus(c+30,"WB_ws_bits_dpi_c_csr_ecode", false,-1, 5,0);
    tracep->declBus(c+2,"WB_ws_bits_dpi_c_csr_ex_pc", false,-1, 31,0);
    tracep->declBus(c+31,"WB_ws_bits_dpi_c_csr_crmd", false,-1, 31,0);
    tracep->declBus(c+32,"WB_ws_bits_dpi_c_csr_prmd", false,-1, 31,0);
    tracep->declBus(c+33,"WB_ws_bits_dpi_c_csr_estat", false,-1, 31,0);
    tracep->declBus(c+34,"WB_ws_bits_dpi_c_csr_era", false,-1, 31,0);
    tracep->declBus(c+35,"WB_ws_bits_dpi_c_csr_eentry", false,-1, 31,0);
    tracep->declBit(c+19,"WB_torf_rf_we", false,-1);
    tracep->declBus(c+18,"WB_torf_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+29,"WB_torf_rf_wdata", false,-1, 31,0);
    tracep->declBit(c+443,"WB_torf_valid", false,-1);
    tracep->declBit(c+27,"WB_torf_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"WB_torf_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"WB_torf_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+28,"WB_torf_dpi_c_inv", false,-1);
    tracep->declBit(c+24,"WB_torf_dpi_c_csr_ex", false,-1);
    tracep->declBit(c+25,"WB_torf_dpi_c_csr_ertn", false,-1);
    tracep->declBus(c+30,"WB_torf_dpi_c_csr_ecode", false,-1, 5,0);
    tracep->declBus(c+2,"WB_torf_dpi_c_csr_ex_pc", false,-1, 31,0);
    tracep->declBus(c+31,"WB_torf_dpi_c_csr_crmd", false,-1, 31,0);
    tracep->declBus(c+32,"WB_torf_dpi_c_csr_prmd", false,-1, 31,0);
    tracep->declBus(c+33,"WB_torf_dpi_c_csr_estat", false,-1, 31,0);
    tracep->declBus(c+34,"WB_torf_dpi_c_csr_era", false,-1, 31,0);
    tracep->declBus(c+35,"WB_torf_dpi_c_csr_eentry", false,-1, 31,0);
    tracep->declBit(c+441,"csr_clock", false,-1);
    tracep->declBit(c+442,"csr_reset", false,-1);
    tracep->declBit(c+23,"csr_io_we", false,-1);
    tracep->declBus(c+22,"csr_io_num", false,-1, 13,0);
    tracep->declBus(c+16,"csr_io_wvalue", false,-1, 31,0);
    tracep->declBus(c+26,"csr_io_wmask", false,-1, 31,0);
    tracep->declBus(c+38,"csr_io_rvalue", false,-1, 31,0);
    tracep->declBit(c+24,"csr_io_ex", false,-1);
    tracep->declBit(c+25,"csr_io_ertn", false,-1);
    tracep->declBus(c+2,"csr_io_exe_pc", false,-1, 31,0);
    tracep->declBus(c+30,"csr_io_ecode", false,-1, 5,0);
    tracep->declBit(c+24,"csr_io_dpic_ex", false,-1);
    tracep->declBit(c+25,"csr_io_dpic_ertn", false,-1);
    tracep->declBus(c+30,"csr_io_dpic_ecode", false,-1, 5,0);
    tracep->declBus(c+2,"csr_io_dpic_ex_pc", false,-1, 31,0);
    tracep->declBus(c+31,"csr_io_dpic_crmd", false,-1, 31,0);
    tracep->declBus(c+32,"csr_io_dpic_prmd", false,-1, 31,0);
    tracep->declBus(c+33,"csr_io_dpic_estat", false,-1, 31,0);
    tracep->declBus(c+34,"csr_io_dpic_era", false,-1, 31,0);
    tracep->declBus(c+35,"csr_io_dpic_eentry", false,-1, 31,0);
    tracep->declBit(c+13,"csr_csr_br_taken", false,-1);
    tracep->declBus(c+14,"csr_csr_br_pc", false,-1, 31,0);
    tracep->pushNamePrefix("EXE ");
    tracep->declBit(c+443,"es_valid", false,-1);
    tracep->declBus(c+2,"es_bits_pc", false,-1, 31,0);
    tracep->declBus(c+15,"es_bits_alu_src1", false,-1, 31,0);
    tracep->declBus(c+16,"es_bits_alu_src2", false,-1, 31,0);
    tracep->declBus(c+17,"es_bits_alu_op", false,-1, 4,0);
    tracep->declBus(c+18,"es_bits_rf_waddr", false,-1, 4,0);
    tracep->declBit(c+19,"es_bits_rf_we", false,-1);
    tracep->declBus(c+20,"es_bits_mem_we", false,-1, 1,0);
    tracep->declBus(c+21,"es_bits_inst_name", false,-1, 4,0);
    tracep->declBus(c+7,"es_bits_mem_wdata", false,-1, 31,0);
    tracep->declBus(c+22,"es_bits_csr_num", false,-1, 13,0);
    tracep->declBit(c+23,"es_bits_csr_we", false,-1);
    tracep->declBit(c+24,"es_bits_ex", false,-1);
    tracep->declBit(c+25,"es_bits_ertn", false,-1);
    tracep->declBus(c+26,"es_bits_csr_wmask", false,-1, 31,0);
    tracep->declBit(c+27,"es_bits_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"es_bits_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"es_bits_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+28,"es_bits_dpi_c_inv", false,-1);
    tracep->declBit(c+443,"toms_valid", false,-1);
    tracep->declBus(c+36,"toms_bits_rf_wdata", false,-1, 31,0);
    tracep->declBus(c+21,"toms_bits_inst_name", false,-1, 4,0);
    tracep->declBit(c+37,"toms_bits_res_from_mem", false,-1);
    tracep->declBit(c+19,"toms_bits_rf_we", false,-1);
    tracep->declBus(c+18,"toms_bits_rf_waddr", false,-1, 4,0);
    tracep->declBit(c+27,"toms_bits_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"toms_bits_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"toms_bits_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+28,"toms_bits_dpi_c_inv", false,-1);
    tracep->declBit(c+24,"toms_bits_dpi_c_csr_ex", false,-1);
    tracep->declBit(c+25,"toms_bits_dpi_c_csr_ertn", false,-1);
    tracep->declBus(c+30,"toms_bits_dpi_c_csr_ecode", false,-1, 5,0);
    tracep->declBus(c+2,"toms_bits_dpi_c_csr_ex_pc", false,-1, 31,0);
    tracep->declBus(c+31,"toms_bits_dpi_c_csr_crmd", false,-1, 31,0);
    tracep->declBus(c+32,"toms_bits_dpi_c_csr_prmd", false,-1, 31,0);
    tracep->declBus(c+33,"toms_bits_dpi_c_csr_estat", false,-1, 31,0);
    tracep->declBus(c+34,"toms_bits_dpi_c_csr_era", false,-1, 31,0);
    tracep->declBus(c+35,"toms_bits_dpi_c_csr_eentry", false,-1, 31,0);
    tracep->declBit(c+4,"data_sram_en", false,-1);
    tracep->declBit(c+5,"data_sram_wr", false,-1);
    tracep->declBus(c+6,"data_sram_addr", false,-1, 31,0);
    tracep->declBus(c+7,"data_sram_wdata", false,-1, 31,0);
    tracep->declBus(c+8,"data_sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+23,"csr_we", false,-1);
    tracep->declBus(c+22,"csr_num", false,-1, 13,0);
    tracep->declBus(c+16,"csr_wvalue", false,-1, 31,0);
    tracep->declBus(c+26,"csr_wmask", false,-1, 31,0);
    tracep->declBus(c+38,"csr_rvalue", false,-1, 31,0);
    tracep->declBit(c+24,"csr_ex", false,-1);
    tracep->declBit(c+25,"csr_ertn", false,-1);
    tracep->declBus(c+2,"csr_exe_pc", false,-1, 31,0);
    tracep->declBus(c+30,"csr_ecode", false,-1, 5,0);
    tracep->declBit(c+24,"csr_dpic_ex", false,-1);
    tracep->declBit(c+25,"csr_dpic_ertn", false,-1);
    tracep->declBus(c+30,"csr_dpic_ecode", false,-1, 5,0);
    tracep->declBus(c+2,"csr_dpic_ex_pc", false,-1, 31,0);
    tracep->declBus(c+31,"csr_dpic_crmd", false,-1, 31,0);
    tracep->declBus(c+32,"csr_dpic_prmd", false,-1, 31,0);
    tracep->declBus(c+33,"csr_dpic_estat", false,-1, 31,0);
    tracep->declBus(c+34,"csr_dpic_era", false,-1, 31,0);
    tracep->declBus(c+35,"csr_dpic_eentry", false,-1, 31,0);
    tracep->declBus(c+17,"alu_io_alu_op", false,-1, 4,0);
    tracep->declBus(c+15,"alu_io_src1", false,-1, 31,0);
    tracep->declBus(c+16,"alu_io_src2", false,-1, 31,0);
    tracep->declBus(c+6,"alu_io_res", false,-1, 31,0);
    tracep->declBit(c+39,"res_from_csr", false,-1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+17,"io_alu_op", false,-1, 4,0);
    tracep->declBus(c+15,"io_src1", false,-1, 31,0);
    tracep->declBus(c+16,"io_src2", false,-1, 31,0);
    tracep->declBus(c+6,"io_res", false,-1, 31,0);
    tracep->declBus(c+15,"shift_res_s_in_src", false,-1, 31,0);
    tracep->declBus(c+40,"shift_res_s_in_offset", false,-1, 4,0);
    tracep->declBit(c+41,"shift_res_s_in_right", false,-1);
    tracep->declBit(c+42,"shift_res_s_in_arith", false,-1);
    tracep->declBus(c+43,"shift_res_s_out_res", false,-1, 31,0);
    tracep->declBit(c+44,"op_add", false,-1);
    tracep->declBit(c+45,"op_sub", false,-1);
    tracep->declBit(c+46,"op_slt", false,-1);
    tracep->declBit(c+47,"op_sltu", false,-1);
    tracep->declBit(c+48,"op_and", false,-1);
    tracep->declBit(c+49,"op_nor", false,-1);
    tracep->declBit(c+50,"op_or", false,-1);
    tracep->declBit(c+51,"op_xor", false,-1);
    tracep->declBit(c+52,"op_sll", false,-1);
    tracep->declBit(c+53,"op_srl", false,-1);
    tracep->declBit(c+42,"op_sra", false,-1);
    tracep->declBit(c+54,"op_lui", false,-1);
    tracep->declBit(c+55,"op_mul", false,-1);
    tracep->declBit(c+56,"op_mulh", false,-1);
    tracep->declBit(c+57,"op_mulhu", false,-1);
    tracep->declBit(c+58,"op_div", false,-1);
    tracep->declBit(c+59,"op_mod", false,-1);
    tracep->declBit(c+60,"op_divu", false,-1);
    tracep->declBit(c+61,"op_modu", false,-1);
    tracep->declBit(c+62,"add_sub", false,-1);
    tracep->declQuad(c+63,"add_res", false,-1, 32,0);
    tracep->declBit(c+65,"slt_res", false,-1);
    tracep->declBit(c+66,"sltu_res", false,-1);
    tracep->declBus(c+67,"and_res", false,-1, 31,0);
    tracep->declBus(c+68,"or_res", false,-1, 31,0);
    tracep->declBus(c+69,"nor_res", false,-1, 31,0);
    tracep->declBus(c+70,"xor_res", false,-1, 31,0);
    tracep->declQuad(c+71,"mul_pre", false,-1, 63,0);
    tracep->declBus(c+73,"mul_res", false,-1, 31,0);
    tracep->declBus(c+74,"mulhu_res", false,-1, 31,0);
    tracep->declBus(c+75,"mulh_res", false,-1, 31,0);
    tracep->declBus(c+76,"divu_res", false,-1, 31,0);
    tracep->declBus(c+77,"modu_res", false,-1, 31,0);
    tracep->declBus(c+78,"mod_res", false,-1, 31,0);
    tracep->declBus(c+79,"div_res", false,-1, 31,0);
    tracep->declBus(c+43,"shift_res", false,-1, 31,0);
    tracep->pushNamePrefix("_add_res_adder_ ");
    tracep->pushNamePrefix("add_0 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add_1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("shift_res_s ");
    tracep->declBus(c+15,"in_src", false,-1, 31,0);
    tracep->declBus(c+40,"in_offset", false,-1, 4,0);
    tracep->declBit(c+41,"in_right", false,-1);
    tracep->declBit(c+42,"in_arith", false,-1);
    tracep->declBus(c+43,"out_res", false,-1, 31,0);
    tracep->declQuad(c+80,"buf_", false,-1, 63,0);
    tracep->declQuad(c+82,"left_shift", false,-1, 63,0);
    tracep->declQuad(c+84,"right_shift", false,-1, 62,0);
    tracep->declQuad(c+86,"shi", false,-1, 63,0);
    tracep->declQuad(c+88,"select_1", false,-1, 63,0);
    tracep->declQuad(c+90,"left_shift_1", false,-1, 63,0);
    tracep->declQuad(c+92,"right_shift_1", false,-1, 61,0);
    tracep->declQuad(c+94,"shi_1", false,-1, 63,0);
    tracep->declQuad(c+96,"select_2", false,-1, 63,0);
    tracep->declQuad(c+98,"left_shift_2", false,-1, 63,0);
    tracep->declQuad(c+100,"right_shift_2", false,-1, 59,0);
    tracep->declQuad(c+102,"shi_2", false,-1, 63,0);
    tracep->declQuad(c+104,"select_3", false,-1, 63,0);
    tracep->declQuad(c+106,"left_shift_3", false,-1, 63,0);
    tracep->declQuad(c+108,"right_shift_3", false,-1, 55,0);
    tracep->declQuad(c+110,"shi_3", false,-1, 63,0);
    tracep->declQuad(c+112,"select_4", false,-1, 63,0);
    tracep->declQuad(c+114,"left_shift_4", false,-1, 63,0);
    tracep->declQuad(c+116,"right_shift_4", false,-1, 47,0);
    tracep->declQuad(c+118,"shi_4", false,-1, 63,0);
    tracep->declQuad(c+120,"select_5", false,-1, 63,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+441,"clock", false,-1);
    tracep->declBit(c+443,"toes_valid", false,-1);
    tracep->declBus(c+2,"toes_bits_pc", false,-1, 31,0);
    tracep->declBus(c+15,"toes_bits_alu_src1", false,-1, 31,0);
    tracep->declBus(c+16,"toes_bits_alu_src2", false,-1, 31,0);
    tracep->declBus(c+17,"toes_bits_alu_op", false,-1, 4,0);
    tracep->declBus(c+18,"toes_bits_rf_waddr", false,-1, 4,0);
    tracep->declBit(c+19,"toes_bits_rf_we", false,-1);
    tracep->declBus(c+20,"toes_bits_mem_we", false,-1, 1,0);
    tracep->declBus(c+21,"toes_bits_inst_name", false,-1, 4,0);
    tracep->declBus(c+7,"toes_bits_mem_wdata", false,-1, 31,0);
    tracep->declBus(c+22,"toes_bits_csr_num", false,-1, 13,0);
    tracep->declBit(c+23,"toes_bits_csr_we", false,-1);
    tracep->declBit(c+24,"toes_bits_ex", false,-1);
    tracep->declBit(c+25,"toes_bits_ertn", false,-1);
    tracep->declBus(c+26,"toes_bits_csr_wmask", false,-1, 31,0);
    tracep->declBit(c+27,"toes_bits_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"toes_bits_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"toes_bits_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+28,"toes_bits_dpi_c_inv", false,-1);
    tracep->declBit(c+443,"ds_valid", false,-1);
    tracep->declBus(c+2,"ds_bits_pc", false,-1, 31,0);
    tracep->declBus(c+3,"ds_bits_inst", false,-1, 31,0);
    tracep->declBus(c+12,"ds_bits_next_pc", false,-1, 31,0);
    tracep->declBit(c+19,"torf_rf_we", false,-1);
    tracep->declBus(c+18,"torf_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+29,"torf_rf_wdata", false,-1, 31,0);
    tracep->declBit(c+443,"torf_valid", false,-1);
    tracep->declBit(c+27,"torf_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"torf_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"torf_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+28,"torf_dpi_c_inv", false,-1);
    tracep->declBit(c+24,"torf_dpi_c_csr_ex", false,-1);
    tracep->declBit(c+25,"torf_dpi_c_csr_ertn", false,-1);
    tracep->declBus(c+30,"torf_dpi_c_csr_ecode", false,-1, 5,0);
    tracep->declBus(c+2,"torf_dpi_c_csr_ex_pc", false,-1, 31,0);
    tracep->declBus(c+31,"torf_dpi_c_csr_crmd", false,-1, 31,0);
    tracep->declBus(c+32,"torf_dpi_c_csr_prmd", false,-1, 31,0);
    tracep->declBus(c+33,"torf_dpi_c_csr_estat", false,-1, 31,0);
    tracep->declBus(c+34,"torf_dpi_c_csr_era", false,-1, 31,0);
    tracep->declBus(c+35,"torf_dpi_c_csr_eentry", false,-1, 31,0);
    tracep->declBit(c+10,"br_taken", false,-1);
    tracep->declBus(c+11,"br_target", false,-1, 31,0);
    tracep->declBit(c+441,"reg__clock", false,-1);
    tracep->declBus(c+122,"reg__io_raddr1", false,-1, 4,0);
    tracep->declBus(c+123,"reg__io_raddr2", false,-1, 4,0);
    tracep->declBus(c+124,"reg__io_rdata1", false,-1, 31,0);
    tracep->declBus(c+7,"reg__io_rdata2", false,-1, 31,0);
    tracep->declBus(c+125,"reg__io_waddr", false,-1, 4,0);
    tracep->declBus(c+29,"reg__io_wdata", false,-1, 31,0);
    tracep->declBit(c+19,"reg__io_wen", false,-1);
    tracep->declBus(c+12,"reg__io_rf_pc", false,-1, 31,0);
    tracep->declBit(c+27,"reg__io_is_break", false,-1);
    tracep->declBit(c+443,"reg__io_valid", false,-1);
    tracep->declBus(c+3,"reg__io_inst", false,-1, 31,0);
    tracep->declBit(c+28,"reg__io_inv", false,-1);
    tracep->declBit(c+24,"reg__io_csr_ex", false,-1);
    tracep->declBit(c+25,"reg__io_csr_ertn", false,-1);
    tracep->declBus(c+30,"reg__io_csr_ecode", false,-1, 5,0);
    tracep->declBus(c+2,"reg__io_csr_ex_pc", false,-1, 31,0);
    tracep->declBus(c+31,"reg__io_csr_crmd", false,-1, 31,0);
    tracep->declBus(c+32,"reg__io_csr_prmd", false,-1, 31,0);
    tracep->declBus(c+33,"reg__io_csr_estat", false,-1, 31,0);
    tracep->declBus(c+34,"reg__io_csr_era", false,-1, 31,0);
    tracep->declBus(c+35,"reg__io_csr_eentry", false,-1, 31,0);
    tracep->declBus(c+126,"br_target_adder__in_a", false,-1, 31,0);
    tracep->declBus(c+127,"br_target_adder__in_b", false,-1, 31,0);
    tracep->declBit(c+444,"br_target_adder__in_cin", false,-1);
    tracep->declBus(c+11,"br_target_adder__out_s", false,-1, 31,0);
    tracep->declBit(c+128,"br_target_adder__out_cout", false,-1);
    tracep->declBus(c+122,"rj", false,-1, 4,0);
    tracep->declBus(c+129,"rd", false,-1, 4,0);
    tracep->declBus(c+130,"imm5", false,-1, 4,0);
    tracep->declBus(c+131,"imm12u", false,-1, 11,0);
    tracep->declBus(c+132,"imm12", false,-1, 31,0);
    tracep->declBus(c+133,"imm16", false,-1, 31,0);
    tracep->declBus(c+134,"imm20u", false,-1, 31,0);
    tracep->declBus(c+134,"imm20", false,-1, 31,0);
    tracep->declBus(c+135,"imm26", false,-1, 31,0);
    tracep->declBus(c+136,"code", false,-1, 14,0);
    tracep->declBus(c+137,"decode_res_invInputs", false,-1, 31,0);
    tracep->declBit(c+138,"decode_res_andMatrixInput_0", false,-1);
    tracep->declBit(c+139,"decode_res_andMatrixInput_1", false,-1);
    tracep->declBit(c+140,"decode_res_andMatrixInput_2", false,-1);
    tracep->declBit(c+141,"decode_res_andMatrixInput_3", false,-1);
    tracep->declBit(c+142,"decode_res_andMatrixInput_4", false,-1);
    tracep->declBit(c+143,"decode_res_andMatrixInput_5", false,-1);
    tracep->declBit(c+144,"decode_res_andMatrixInput_6", false,-1);
    tracep->declBit(c+145,"decode_res_andMatrixInput_7", false,-1);
    tracep->declBit(c+146,"decode_res_andMatrixInput_8", false,-1);
    tracep->declBit(c+147,"decode_res_andMatrixInput_9", false,-1);
    tracep->declBit(c+148,"decode_res_andMatrixInput_10", false,-1);
    tracep->declBit(c+149,"decode_res_andMatrixInput_11", false,-1);
    tracep->declBit(c+150,"decode_res_andMatrixInput_12", false,-1);
    tracep->declBit(c+151,"decode_res_andMatrixInput_13", false,-1);
    tracep->declBit(c+152,"decode_res_andMatrixInput_14", false,-1);
    tracep->declBus(c+153,"decode_res_lo", false,-1, 6,0);
    tracep->declBit(c+154,"decode_res_andMatrixInput_3_1", false,-1);
    tracep->declBus(c+155,"decode_res_lo_1", false,-1, 7,0);
    tracep->declBit(c+156,"decode_res_andMatrixInput_2_2", false,-1);
    tracep->declBit(c+157,"decode_res_andMatrixInput_1_4", false,-1);
    tracep->declBit(c+158,"decode_res_andMatrixInput_1_5", false,-1);
    tracep->declBit(c+159,"decode_res_andMatrixInput_0_7", false,-1);
    tracep->declBit(c+160,"decode_res_andMatrixInput_2_8", false,-1);
    tracep->declBit(c+161,"decode_res_andMatrixInput_3_18", false,-1);
    tracep->declBit(c+162,"decode_res_andMatrixInput_3_23", false,-1);
    tracep->declBit(c+163,"decode_res_andMatrixInput_4_23", false,-1);
    tracep->declBit(c+164,"decode_res_andMatrixInput_6_28", false,-1);
    tracep->declBit(c+165,"decode_res_andMatrixInput_2_32", false,-1);
    tracep->declBit(c+166,"decode_res_andMatrixInput_1_36", false,-1);
    tracep->declBit(c+167,"decode_res_andMatrixInput_1_37", false,-1);
    tracep->declBit(c+168,"decode_res_andMatrixInput_2_42", false,-1);
    tracep->declBit(c+169,"decode_res_andMatrixInput_0_43", false,-1);
    tracep->declBit(c+170,"decode_res_andMatrixInput_1_43", false,-1);
    tracep->declBit(c+171,"decode_res_andMatrixInput_2_43", false,-1);
    tracep->declBit(c+172,"decode_res_andMatrixInput_3_43", false,-1);
    tracep->declBit(c+173,"decode_res_andMatrixInput_4_43", false,-1);
    tracep->declBit(c+174,"decode_res_andMatrixInput_5_43", false,-1);
    tracep->declBit(c+175,"decode_res_andMatrixInput_6_43", false,-1);
    tracep->declBit(c+176,"decode_res_andMatrixInput_7_43", false,-1);
    tracep->declBit(c+177,"decode_res_andMatrixInput_8_42", false,-1);
    tracep->declBit(c+178,"decode_res_andMatrixInput_9_36", false,-1);
    tracep->declBit(c+179,"decode_res_andMatrixInput_10_32", false,-1);
    tracep->declBit(c+180,"decode_res_andMatrixInput_11_32", false,-1);
    tracep->declBit(c+181,"decode_res_andMatrixInput_12_32", false,-1);
    tracep->declBit(c+182,"decode_res_andMatrixInput_13_32", false,-1);
    tracep->declBit(c+183,"decode_res_andMatrixInput_14_32", false,-1);
    tracep->declBus(c+184,"decode_res_lo_lo_43", false,-1, 7,0);
    tracep->declBus(c+185,"decode_res_lo_43", false,-1, 15,0);
    tracep->declBus(c+186,"decode_res_hi_lo_43", false,-1, 7,0);
    tracep->declBit(c+187,"decode_res_andMatrixInput_2_44", false,-1);
    tracep->declBit(c+188,"decode_res_andMatrixInput_2_46", false,-1);
    tracep->declBit(c+189,"decode_res_andMatrixInput_5_47", false,-1);
    tracep->declBit(c+190,"decode_res_andMatrixInput_3_59", false,-1);
    tracep->declBus(c+191,"decode_res_orMatrixOutputs_lo_lo_hi", false,-1, 1,0);
    tracep->declBus(c+192,"decode_res_orMatrixOutputs_lo", false,-1, 8,0);
    tracep->declBus(c+193,"decode_res_orMatrixOutputs_hi_5", false,-1, 2,0);
    tracep->declBus(c+194,"decode_res_orMatrixOutputs_lo_6", false,-1, 6,0);
    tracep->declBus(c+195,"decode_res_orMatrixOutputs_lo_10", false,-1, 7,0);
    tracep->declBus(c+196,"decode_res_orMatrixOutputs_lo_11", false,-1, 5,0);
    tracep->declBus(c+197,"decode_res_orMatrixOutputs_lo_14", false,-1, 7,0);
    tracep->declBus(c+198,"decode_res_orMatrixOutputs", false,-1, 16,0);
    tracep->declBus(c+199,"decode_res_invMatrixOutputs_lo", false,-1, 7,0);
    tracep->declBus(c+200,"decode_res_invMatrixOutputs", false,-1, 16,0);
    tracep->declBus(c+201,"inst_type", false,-1, 3,0);
    tracep->declBus(c+20,"mem_we", false,-1, 1,0);
    tracep->declBus(c+21,"inst_name", false,-1, 4,0);
    tracep->declBus(c+202,"imm", false,-1, 31,0);
    tracep->declBit(c+203,"src2_is_rd", false,-1);
    tracep->declBit(c+204,"rj_eq_rd", false,-1);
    tracep->declQuad(c+205,"rj_sub_rd", false,-1, 32,0);
    tracep->declBit(c+207,"slt_res", false,-1);
    tracep->declBit(c+208,"sltu_res", false,-1);
    tracep->declBit(c+209,"src1_is_pc", false,-1);
    tracep->declBit(c+210,"is_syscall_0x1", false,-1);
    tracep->pushNamePrefix("_rj_sub_rd_adder_ ");
    tracep->pushNamePrefix("add_0 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add_1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("br_target_adder_ ");
    tracep->declBus(c+126,"in_a", false,-1, 31,0);
    tracep->declBus(c+127,"in_b", false,-1, 31,0);
    tracep->declBit(c+444,"in_cin", false,-1);
    tracep->declBus(c+11,"out_s", false,-1, 31,0);
    tracep->declBit(c+128,"out_cout", false,-1);
    tracep->declBus(c+211,"add_0_in_a", false,-1, 15,0);
    tracep->declBus(c+212,"add_0_in_b", false,-1, 15,0);
    tracep->declBit(c+444,"add_0_in_cin", false,-1);
    tracep->declBus(c+213,"add_0_out_s", false,-1, 15,0);
    tracep->declBit(c+214,"add_0_out_cout", false,-1);
    tracep->declBus(c+215,"add_1_in_a", false,-1, 15,0);
    tracep->declBus(c+216,"add_1_in_b", false,-1, 15,0);
    tracep->declBit(c+214,"add_1_in_cin", false,-1);
    tracep->declBus(c+217,"add_1_out_s", false,-1, 15,0);
    tracep->declBit(c+128,"add_1_out_cout", false,-1);
    tracep->pushNamePrefix("add_0 ");
    tracep->declBus(c+211,"in_a", false,-1, 15,0);
    tracep->declBus(c+212,"in_b", false,-1, 15,0);
    tracep->declBit(c+444,"in_cin", false,-1);
    tracep->declBus(c+213,"out_s", false,-1, 15,0);
    tracep->declBit(c+214,"out_cout", false,-1);
    tracep->declBus(c+218,"g_2", false,-1, 3,0);
    tracep->declBus(c+219,"p_2", false,-1, 3,0);
    tracep->declBit(c+220,"g__1", false,-1);
    tracep->declBus(c+221,"g_1", false,-1, 3,0);
    tracep->declBus(c+222,"p_1", false,-1, 3,0);
    tracep->declBit(c+223,"g__0", false,-1);
    tracep->declBus(c+224,"g_4", false,-1, 3,0);
    tracep->declBus(c+225,"p_4", false,-1, 3,0);
    tracep->declBit(c+226,"g__3", false,-1);
    tracep->declBus(c+227,"g_3", false,-1, 3,0);
    tracep->declBus(c+228,"p_3", false,-1, 3,0);
    tracep->declBit(c+229,"g__2", false,-1);
    tracep->declBit(c+230,"p__1", false,-1);
    tracep->declBit(c+231,"p__0", false,-1);
    tracep->declBit(c+232,"p__3", false,-1);
    tracep->declBit(c+233,"p__2", false,-1);
    tracep->declBit(c+223,"c_carry__1", false,-1);
    tracep->declBit(c+234,"c_carry__2", false,-1);
    tracep->declBit(c+235,"c_carry__3", false,-1);
    tracep->declBus(c+236,"c", false,-1, 3,0);
    tracep->declBit(c+444,"c_carry_1_0", false,-1);
    tracep->declBit(c+237,"c_carry_1_1", false,-1);
    tracep->declBit(c+238,"c_carry_1_2", false,-1);
    tracep->declBit(c+239,"c_carry_1_3", false,-1);
    tracep->declBus(c+240,"c_1", false,-1, 3,0);
    tracep->declBus(c+241,"sum_0", false,-1, 3,0);
    tracep->declBit(c+223,"c_carry_2_0", false,-1);
    tracep->declBit(c+242,"c_carry_2_1", false,-1);
    tracep->declBit(c+243,"c_carry_2_2", false,-1);
    tracep->declBit(c+244,"c_carry_2_3", false,-1);
    tracep->declBus(c+245,"c_2", false,-1, 3,0);
    tracep->declBus(c+246,"sum_1", false,-1, 3,0);
    tracep->declBit(c+234,"c_carry_3_0", false,-1);
    tracep->declBit(c+247,"c_carry_3_1", false,-1);
    tracep->declBit(c+248,"c_carry_3_2", false,-1);
    tracep->declBit(c+249,"c_carry_3_3", false,-1);
    tracep->declBus(c+250,"c_3", false,-1, 3,0);
    tracep->declBus(c+251,"sum_2", false,-1, 3,0);
    tracep->declBit(c+235,"c_carry_4_0", false,-1);
    tracep->declBit(c+252,"c_carry_4_1", false,-1);
    tracep->declBit(c+253,"c_carry_4_2", false,-1);
    tracep->declBit(c+254,"c_carry_4_3", false,-1);
    tracep->declBus(c+255,"c_4", false,-1, 3,0);
    tracep->declBus(c+256,"sum_3", false,-1, 3,0);
    tracep->declBus(c+257,"out_s_lo", false,-1, 7,0);
    tracep->declBus(c+258,"out_s_hi", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add_1 ");
    tracep->declBus(c+215,"in_a", false,-1, 15,0);
    tracep->declBus(c+216,"in_b", false,-1, 15,0);
    tracep->declBit(c+214,"in_cin", false,-1);
    tracep->declBus(c+217,"out_s", false,-1, 15,0);
    tracep->declBit(c+128,"out_cout", false,-1);
    tracep->declBus(c+259,"g_2", false,-1, 3,0);
    tracep->declBus(c+260,"p_2", false,-1, 3,0);
    tracep->declBit(c+261,"g__1", false,-1);
    tracep->declBus(c+262,"g_1", false,-1, 3,0);
    tracep->declBus(c+263,"p_1", false,-1, 3,0);
    tracep->declBit(c+264,"g__0", false,-1);
    tracep->declBus(c+265,"g_4", false,-1, 3,0);
    tracep->declBus(c+266,"p_4", false,-1, 3,0);
    tracep->declBit(c+267,"g__3", false,-1);
    tracep->declBus(c+268,"g_3", false,-1, 3,0);
    tracep->declBus(c+269,"p_3", false,-1, 3,0);
    tracep->declBit(c+270,"g__2", false,-1);
    tracep->declBit(c+271,"p__1", false,-1);
    tracep->declBit(c+272,"p__0", false,-1);
    tracep->declBit(c+273,"p__3", false,-1);
    tracep->declBit(c+274,"p__2", false,-1);
    tracep->declBit(c+275,"c_carry__1", false,-1);
    tracep->declBit(c+276,"c_carry__2", false,-1);
    tracep->declBit(c+277,"c_carry__3", false,-1);
    tracep->declBus(c+278,"c", false,-1, 3,0);
    tracep->declBit(c+214,"c_carry_1_0", false,-1);
    tracep->declBit(c+279,"c_carry_1_1", false,-1);
    tracep->declBit(c+280,"c_carry_1_2", false,-1);
    tracep->declBit(c+281,"c_carry_1_3", false,-1);
    tracep->declBus(c+282,"c_1", false,-1, 3,0);
    tracep->declBus(c+283,"sum_0", false,-1, 3,0);
    tracep->declBit(c+275,"c_carry_2_0", false,-1);
    tracep->declBit(c+284,"c_carry_2_1", false,-1);
    tracep->declBit(c+285,"c_carry_2_2", false,-1);
    tracep->declBit(c+286,"c_carry_2_3", false,-1);
    tracep->declBus(c+287,"c_2", false,-1, 3,0);
    tracep->declBus(c+288,"sum_1", false,-1, 3,0);
    tracep->declBit(c+276,"c_carry_3_0", false,-1);
    tracep->declBit(c+289,"c_carry_3_1", false,-1);
    tracep->declBit(c+290,"c_carry_3_2", false,-1);
    tracep->declBit(c+291,"c_carry_3_3", false,-1);
    tracep->declBus(c+292,"c_3", false,-1, 3,0);
    tracep->declBus(c+293,"sum_2", false,-1, 3,0);
    tracep->declBit(c+277,"c_carry_4_0", false,-1);
    tracep->declBit(c+294,"c_carry_4_1", false,-1);
    tracep->declBit(c+295,"c_carry_4_2", false,-1);
    tracep->declBit(c+296,"c_carry_4_3", false,-1);
    tracep->declBus(c+297,"c_4", false,-1, 3,0);
    tracep->declBus(c+298,"sum_3", false,-1, 3,0);
    tracep->declBus(c+299,"out_s_lo", false,-1, 7,0);
    tracep->declBus(c+300,"out_s_hi", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_ ");
    tracep->declBit(c+441,"clock", false,-1);
    tracep->declBus(c+122,"io_raddr1", false,-1, 4,0);
    tracep->declBus(c+123,"io_raddr2", false,-1, 4,0);
    tracep->declBus(c+124,"io_rdata1", false,-1, 31,0);
    tracep->declBus(c+7,"io_rdata2", false,-1, 31,0);
    tracep->declBus(c+125,"io_waddr", false,-1, 4,0);
    tracep->declBus(c+29,"io_wdata", false,-1, 31,0);
    tracep->declBit(c+19,"io_wen", false,-1);
    tracep->declBus(c+12,"io_rf_pc", false,-1, 31,0);
    tracep->declBit(c+27,"io_is_break", false,-1);
    tracep->declBit(c+443,"io_valid", false,-1);
    tracep->declBus(c+3,"io_inst", false,-1, 31,0);
    tracep->declBit(c+28,"io_inv", false,-1);
    tracep->declBit(c+24,"io_csr_ex", false,-1);
    tracep->declBit(c+25,"io_csr_ertn", false,-1);
    tracep->declBus(c+30,"io_csr_ecode", false,-1, 5,0);
    tracep->declBus(c+2,"io_csr_ex_pc", false,-1, 31,0);
    tracep->declBus(c+31,"io_csr_crmd", false,-1, 31,0);
    tracep->declBus(c+32,"io_csr_prmd", false,-1, 31,0);
    tracep->declBus(c+33,"io_csr_estat", false,-1, 31,0);
    tracep->declBus(c+34,"io_csr_era", false,-1, 31,0);
    tracep->declBus(c+35,"io_csr_eentry", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+301+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBit(c+447,"rf_io_rdata1_MPORT_en", false,-1);
    tracep->declBus(c+122,"rf_io_rdata1_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+333,"rf_io_rdata1_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_io_rdata2_MPORT_en", false,-1);
    tracep->declBus(c+123,"rf_io_rdata2_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+334,"rf_io_rdata2_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+448,"rf_difftest_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+335,"rf_difftest_io_rf_1_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+449,"rf_difftest_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+336,"rf_difftest_io_rf_2_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+450,"rf_difftest_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+337,"rf_difftest_io_rf_3_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+451,"rf_difftest_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+338,"rf_difftest_io_rf_4_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+452,"rf_difftest_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+339,"rf_difftest_io_rf_5_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+453,"rf_difftest_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+340,"rf_difftest_io_rf_6_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+454,"rf_difftest_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+341,"rf_difftest_io_rf_7_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+455,"rf_difftest_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+342,"rf_difftest_io_rf_8_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+456,"rf_difftest_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+343,"rf_difftest_io_rf_9_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+457,"rf_difftest_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+344,"rf_difftest_io_rf_10_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+458,"rf_difftest_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+345,"rf_difftest_io_rf_11_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+459,"rf_difftest_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+346,"rf_difftest_io_rf_12_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+460,"rf_difftest_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+347,"rf_difftest_io_rf_13_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+461,"rf_difftest_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+348,"rf_difftest_io_rf_14_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+462,"rf_difftest_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+349,"rf_difftest_io_rf_15_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+463,"rf_difftest_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+350,"rf_difftest_io_rf_16_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+464,"rf_difftest_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+351,"rf_difftest_io_rf_17_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+465,"rf_difftest_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+352,"rf_difftest_io_rf_18_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+466,"rf_difftest_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+353,"rf_difftest_io_rf_19_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+467,"rf_difftest_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+354,"rf_difftest_io_rf_20_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+468,"rf_difftest_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+355,"rf_difftest_io_rf_21_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+469,"rf_difftest_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+356,"rf_difftest_io_rf_22_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+470,"rf_difftest_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+357,"rf_difftest_io_rf_23_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+471,"rf_difftest_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+358,"rf_difftest_io_rf_24_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+472,"rf_difftest_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+359,"rf_difftest_io_rf_25_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+473,"rf_difftest_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+360,"rf_difftest_io_rf_26_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+474,"rf_difftest_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+361,"rf_difftest_io_rf_27_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+475,"rf_difftest_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+362,"rf_difftest_io_rf_28_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+476,"rf_difftest_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+363,"rf_difftest_io_rf_29_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+477,"rf_difftest_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+364,"rf_difftest_io_rf_30_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+447,"rf_difftest_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+478,"rf_difftest_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declBus(c+365,"rf_difftest_io_rf_31_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+29,"rf_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+125,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+447,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+19,"rf_MPORT_en", false,-1);
    tracep->declBus(c+445,"difftest_rf_0", false,-1, 31,0);
    tracep->declBus(c+366,"difftest_rf_1", false,-1, 31,0);
    tracep->declBus(c+367,"difftest_rf_2", false,-1, 31,0);
    tracep->declBus(c+368,"difftest_rf_3", false,-1, 31,0);
    tracep->declBus(c+369,"difftest_rf_4", false,-1, 31,0);
    tracep->declBus(c+370,"difftest_rf_5", false,-1, 31,0);
    tracep->declBus(c+371,"difftest_rf_6", false,-1, 31,0);
    tracep->declBus(c+372,"difftest_rf_7", false,-1, 31,0);
    tracep->declBus(c+373,"difftest_rf_8", false,-1, 31,0);
    tracep->declBus(c+374,"difftest_rf_9", false,-1, 31,0);
    tracep->declBus(c+375,"difftest_rf_10", false,-1, 31,0);
    tracep->declBus(c+376,"difftest_rf_11", false,-1, 31,0);
    tracep->declBus(c+377,"difftest_rf_12", false,-1, 31,0);
    tracep->declBus(c+378,"difftest_rf_13", false,-1, 31,0);
    tracep->declBus(c+379,"difftest_rf_14", false,-1, 31,0);
    tracep->declBus(c+380,"difftest_rf_15", false,-1, 31,0);
    tracep->declBus(c+381,"difftest_rf_16", false,-1, 31,0);
    tracep->declBus(c+382,"difftest_rf_17", false,-1, 31,0);
    tracep->declBus(c+383,"difftest_rf_18", false,-1, 31,0);
    tracep->declBus(c+384,"difftest_rf_19", false,-1, 31,0);
    tracep->declBus(c+385,"difftest_rf_20", false,-1, 31,0);
    tracep->declBus(c+386,"difftest_rf_21", false,-1, 31,0);
    tracep->declBus(c+387,"difftest_rf_22", false,-1, 31,0);
    tracep->declBus(c+388,"difftest_rf_23", false,-1, 31,0);
    tracep->declBus(c+389,"difftest_rf_24", false,-1, 31,0);
    tracep->declBus(c+390,"difftest_rf_25", false,-1, 31,0);
    tracep->declBus(c+391,"difftest_rf_26", false,-1, 31,0);
    tracep->declBus(c+392,"difftest_rf_27", false,-1, 31,0);
    tracep->declBus(c+393,"difftest_rf_28", false,-1, 31,0);
    tracep->declBus(c+394,"difftest_rf_29", false,-1, 31,0);
    tracep->declBus(c+395,"difftest_rf_30", false,-1, 31,0);
    tracep->declBus(c+396,"difftest_rf_31", false,-1, 31,0);
    tracep->declBus(c+31,"difftest_crmd", false,-1, 31,0);
    tracep->declBus(c+32,"difftest_prmd", false,-1, 31,0);
    tracep->declBus(c+33,"difftest_estat", false,-1, 31,0);
    tracep->declBus(c+34,"difftest_era", false,-1, 31,0);
    tracep->declBus(c+35,"difftest_eentry", false,-1, 31,0);
    tracep->declBit(c+27,"npc_brk_is_break", false,-1);
    tracep->declBit(c+441,"inst_exec_once_clock", false,-1);
    tracep->declBit(c+443,"inst_exec_once_valid", false,-1);
    tracep->declBus(c+3,"inst_exec_once_inst", false,-1, 31,0);
    tracep->declBus(c+12,"inst_exec_once_pc", false,-1, 31,0);
    tracep->declBit(c+28,"inst_exec_once_inv", false,-1);
    tracep->declBit(c+24,"inst_exec_once_ex", false,-1);
    tracep->declBit(c+25,"inst_exec_once_ertn", false,-1);
    tracep->declBus(c+30,"inst_exec_once_ecode", false,-1, 5,0);
    tracep->declBus(c+479,"inst_exec_once_esubcode", false,-1, 8,0);
    tracep->declBus(c+2,"inst_exec_once_ex_pc", false,-1, 31,0);
    tracep->pushNamePrefix("difftest ");
    tracep->declBus(c+445,"rf_0", false,-1, 31,0);
    tracep->declBus(c+366,"rf_1", false,-1, 31,0);
    tracep->declBus(c+367,"rf_2", false,-1, 31,0);
    tracep->declBus(c+368,"rf_3", false,-1, 31,0);
    tracep->declBus(c+369,"rf_4", false,-1, 31,0);
    tracep->declBus(c+370,"rf_5", false,-1, 31,0);
    tracep->declBus(c+371,"rf_6", false,-1, 31,0);
    tracep->declBus(c+372,"rf_7", false,-1, 31,0);
    tracep->declBus(c+373,"rf_8", false,-1, 31,0);
    tracep->declBus(c+374,"rf_9", false,-1, 31,0);
    tracep->declBus(c+375,"rf_10", false,-1, 31,0);
    tracep->declBus(c+376,"rf_11", false,-1, 31,0);
    tracep->declBus(c+377,"rf_12", false,-1, 31,0);
    tracep->declBus(c+378,"rf_13", false,-1, 31,0);
    tracep->declBus(c+379,"rf_14", false,-1, 31,0);
    tracep->declBus(c+380,"rf_15", false,-1, 31,0);
    tracep->declBus(c+381,"rf_16", false,-1, 31,0);
    tracep->declBus(c+382,"rf_17", false,-1, 31,0);
    tracep->declBus(c+383,"rf_18", false,-1, 31,0);
    tracep->declBus(c+384,"rf_19", false,-1, 31,0);
    tracep->declBus(c+385,"rf_20", false,-1, 31,0);
    tracep->declBus(c+386,"rf_21", false,-1, 31,0);
    tracep->declBus(c+387,"rf_22", false,-1, 31,0);
    tracep->declBus(c+388,"rf_23", false,-1, 31,0);
    tracep->declBus(c+389,"rf_24", false,-1, 31,0);
    tracep->declBus(c+390,"rf_25", false,-1, 31,0);
    tracep->declBus(c+391,"rf_26", false,-1, 31,0);
    tracep->declBus(c+392,"rf_27", false,-1, 31,0);
    tracep->declBus(c+393,"rf_28", false,-1, 31,0);
    tracep->declBus(c+394,"rf_29", false,-1, 31,0);
    tracep->declBus(c+395,"rf_30", false,-1, 31,0);
    tracep->declBus(c+396,"rf_31", false,-1, 31,0);
    tracep->declBus(c+31,"crmd", false,-1, 31,0);
    tracep->declBus(c+32,"prmd", false,-1, 31,0);
    tracep->declBus(c+33,"estat", false,-1, 31,0);
    tracep->declBus(c+34,"era", false,-1, 31,0);
    tracep->declBus(c+35,"eentry", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+397+i*1,"regs", true,(i+0), 31,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+429+i*1,"csr", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_exec_once ");
    tracep->declBit(c+441,"clock", false,-1);
    tracep->declBit(c+443,"valid", false,-1);
    tracep->declBus(c+12,"pc", false,-1, 31,0);
    tracep->declBus(c+3,"inst", false,-1, 31,0);
    tracep->declBit(c+28,"inv", false,-1);
    tracep->declBit(c+24,"ex", false,-1);
    tracep->declBit(c+25,"ertn", false,-1);
    tracep->declBus(c+30,"ecode", false,-1, 5,0);
    tracep->declBus(c+479,"esubcode", false,-1, 8,0);
    tracep->declBus(c+2,"ex_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("npc_brk ");
    tracep->declBit(c+27,"is_break", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+443,"tods_valid", false,-1);
    tracep->declBus(c+2,"tods_bits_pc", false,-1, 31,0);
    tracep->declBus(c+3,"tods_bits_inst", false,-1, 31,0);
    tracep->declBus(c+12,"tods_bits_next_pc", false,-1, 31,0);
    tracep->declBus(c+3,"inst_sram_rdata", false,-1, 31,0);
    tracep->declBit(c+443,"fs_valid", false,-1);
    tracep->declBus(c+2,"fs_bits_pc", false,-1, 31,0);
    tracep->declBus(c+12,"fs_bits_next_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+443,"ms_valid", false,-1);
    tracep->declBus(c+36,"ms_bits_rf_wdata", false,-1, 31,0);
    tracep->declBus(c+21,"ms_bits_inst_name", false,-1, 4,0);
    tracep->declBit(c+37,"ms_bits_res_from_mem", false,-1);
    tracep->declBit(c+19,"ms_bits_rf_we", false,-1);
    tracep->declBus(c+18,"ms_bits_rf_waddr", false,-1, 4,0);
    tracep->declBit(c+27,"ms_bits_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"ms_bits_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"ms_bits_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+28,"ms_bits_dpi_c_inv", false,-1);
    tracep->declBit(c+24,"ms_bits_dpi_c_csr_ex", false,-1);
    tracep->declBit(c+25,"ms_bits_dpi_c_csr_ertn", false,-1);
    tracep->declBus(c+30,"ms_bits_dpi_c_csr_ecode", false,-1, 5,0);
    tracep->declBus(c+2,"ms_bits_dpi_c_csr_ex_pc", false,-1, 31,0);
    tracep->declBus(c+31,"ms_bits_dpi_c_csr_crmd", false,-1, 31,0);
    tracep->declBus(c+32,"ms_bits_dpi_c_csr_prmd", false,-1, 31,0);
    tracep->declBus(c+33,"ms_bits_dpi_c_csr_estat", false,-1, 31,0);
    tracep->declBus(c+34,"ms_bits_dpi_c_csr_era", false,-1, 31,0);
    tracep->declBus(c+35,"ms_bits_dpi_c_csr_eentry", false,-1, 31,0);
    tracep->declBit(c+443,"tows_valid", false,-1);
    tracep->declBit(c+19,"tows_bits_rf_we", false,-1);
    tracep->declBus(c+18,"tows_bits_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+29,"tows_bits_rf_wdata", false,-1, 31,0);
    tracep->declBit(c+27,"tows_bits_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"tows_bits_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"tows_bits_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+28,"tows_bits_dpi_c_inv", false,-1);
    tracep->declBit(c+24,"tows_bits_dpi_c_csr_ex", false,-1);
    tracep->declBit(c+25,"tows_bits_dpi_c_csr_ertn", false,-1);
    tracep->declBus(c+30,"tows_bits_dpi_c_csr_ecode", false,-1, 5,0);
    tracep->declBus(c+2,"tows_bits_dpi_c_csr_ex_pc", false,-1, 31,0);
    tracep->declBus(c+31,"tows_bits_dpi_c_csr_crmd", false,-1, 31,0);
    tracep->declBus(c+32,"tows_bits_dpi_c_csr_prmd", false,-1, 31,0);
    tracep->declBus(c+33,"tows_bits_dpi_c_csr_estat", false,-1, 31,0);
    tracep->declBus(c+34,"tows_bits_dpi_c_csr_era", false,-1, 31,0);
    tracep->declBus(c+35,"tows_bits_dpi_c_csr_eentry", false,-1, 31,0);
    tracep->declBus(c+9,"data_sram_rdata", false,-1, 31,0);
    tracep->declBus(c+434,"mem_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+443,"ws_valid", false,-1);
    tracep->declBit(c+19,"ws_bits_rf_we", false,-1);
    tracep->declBus(c+18,"ws_bits_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+29,"ws_bits_rf_wdata", false,-1, 31,0);
    tracep->declBit(c+27,"ws_bits_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"ws_bits_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"ws_bits_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+28,"ws_bits_dpi_c_inv", false,-1);
    tracep->declBit(c+24,"ws_bits_dpi_c_csr_ex", false,-1);
    tracep->declBit(c+25,"ws_bits_dpi_c_csr_ertn", false,-1);
    tracep->declBus(c+30,"ws_bits_dpi_c_csr_ecode", false,-1, 5,0);
    tracep->declBus(c+2,"ws_bits_dpi_c_csr_ex_pc", false,-1, 31,0);
    tracep->declBus(c+31,"ws_bits_dpi_c_csr_crmd", false,-1, 31,0);
    tracep->declBus(c+32,"ws_bits_dpi_c_csr_prmd", false,-1, 31,0);
    tracep->declBus(c+33,"ws_bits_dpi_c_csr_estat", false,-1, 31,0);
    tracep->declBus(c+34,"ws_bits_dpi_c_csr_era", false,-1, 31,0);
    tracep->declBus(c+35,"ws_bits_dpi_c_csr_eentry", false,-1, 31,0);
    tracep->declBit(c+19,"torf_rf_we", false,-1);
    tracep->declBus(c+18,"torf_rf_waddr", false,-1, 4,0);
    tracep->declBus(c+29,"torf_rf_wdata", false,-1, 31,0);
    tracep->declBit(c+443,"torf_valid", false,-1);
    tracep->declBit(c+27,"torf_dpi_c_is_break", false,-1);
    tracep->declBus(c+3,"torf_dpi_c_inst", false,-1, 31,0);
    tracep->declBus(c+12,"torf_dpi_c_next_pc", false,-1, 31,0);
    tracep->declBit(c+28,"torf_dpi_c_inv", false,-1);
    tracep->declBit(c+24,"torf_dpi_c_csr_ex", false,-1);
    tracep->declBit(c+25,"torf_dpi_c_csr_ertn", false,-1);
    tracep->declBus(c+30,"torf_dpi_c_csr_ecode", false,-1, 5,0);
    tracep->declBus(c+2,"torf_dpi_c_csr_ex_pc", false,-1, 31,0);
    tracep->declBus(c+31,"torf_dpi_c_csr_crmd", false,-1, 31,0);
    tracep->declBus(c+32,"torf_dpi_c_csr_prmd", false,-1, 31,0);
    tracep->declBus(c+33,"torf_dpi_c_csr_estat", false,-1, 31,0);
    tracep->declBus(c+34,"torf_dpi_c_csr_era", false,-1, 31,0);
    tracep->declBus(c+35,"torf_dpi_c_csr_eentry", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+441,"clock", false,-1);
    tracep->declBit(c+442,"reset", false,-1);
    tracep->declBit(c+23,"io_we", false,-1);
    tracep->declBus(c+22,"io_num", false,-1, 13,0);
    tracep->declBus(c+16,"io_wvalue", false,-1, 31,0);
    tracep->declBus(c+26,"io_wmask", false,-1, 31,0);
    tracep->declBus(c+38,"io_rvalue", false,-1, 31,0);
    tracep->declBit(c+24,"io_ex", false,-1);
    tracep->declBit(c+25,"io_ertn", false,-1);
    tracep->declBus(c+2,"io_exe_pc", false,-1, 31,0);
    tracep->declBus(c+30,"io_ecode", false,-1, 5,0);
    tracep->declBit(c+24,"io_dpic_ex", false,-1);
    tracep->declBit(c+25,"io_dpic_ertn", false,-1);
    tracep->declBus(c+30,"io_dpic_ecode", false,-1, 5,0);
    tracep->declBus(c+2,"io_dpic_ex_pc", false,-1, 31,0);
    tracep->declBus(c+31,"io_dpic_crmd", false,-1, 31,0);
    tracep->declBus(c+32,"io_dpic_prmd", false,-1, 31,0);
    tracep->declBus(c+33,"io_dpic_estat", false,-1, 31,0);
    tracep->declBus(c+34,"io_dpic_era", false,-1, 31,0);
    tracep->declBus(c+35,"io_dpic_eentry", false,-1, 31,0);
    tracep->declBit(c+13,"csr_br_taken", false,-1);
    tracep->declBus(c+14,"csr_br_pc", false,-1, 31,0);
    tracep->declBus(c+435,"crmd", false,-1, 31,0);
    tracep->declBus(c+436,"prmd", false,-1, 31,0);
    tracep->declBus(c+437,"era", false,-1, 31,0);
    tracep->declBus(c+438,"estat", false,-1, 31,0);
    tracep->declBus(c+439,"eentry", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pIF ");
    tracep->declBit(c+441,"clock", false,-1);
    tracep->declBit(c+442,"reset", false,-1);
    tracep->declBit(c+10,"br_taken", false,-1);
    tracep->declBus(c+11,"br_target", false,-1, 31,0);
    tracep->declBit(c+1,"inst_sram_en", false,-1);
    tracep->declBus(c+2,"inst_sram_addr", false,-1, 31,0);
    tracep->declBit(c+443,"tofs_valid", false,-1);
    tracep->declBus(c+2,"tofs_bits_pc", false,-1, 31,0);
    tracep->declBus(c+12,"tofs_bits_next_pc", false,-1, 31,0);
    tracep->declBit(c+13,"csr_br_taken", false,-1);
    tracep->declBus(c+14,"csr_br_pc", false,-1, 31,0);
    tracep->declBus(c+2,"pc", false,-1, 31,0);
    tracep->declBus(c+440,"snpc", false,-1, 31,0);
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
    tracep->declBit(c+444,"wr", false,-1);
    tracep->declBus(c+2,"addr", false,-1, 31,0);
    tracep->declBus(c+445,"wdata", false,-1, 31,0);
    tracep->declBus(c+446,"wstrb", false,-1, 3,0);
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
    bufp->fullIData(oldp+11,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fout_s),32);
    bufp->fullIData(oldp+12,(((IData)(vlSelf->Main__DOT__cpucore__DOT__pIF_br_taken)
                               ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fout_s
                               : ((IData)(vlSelf->Main__DOT__cpucore__DOT__pIF_csr_br_taken)
                                   ? vlSelf->Main__DOT__cpucore__DOT__pIF_csr_br_pc
                                   : ((IData)(4U) + vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc)))),32);
    bufp->fullBit(oldp+13,(vlSelf->Main__DOT__cpucore__DOT__pIF_csr_br_taken));
    bufp->fullIData(oldp+14,(vlSelf->Main__DOT__cpucore__DOT__pIF_csr_br_pc),32);
    bufp->fullIData(oldp+15,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a),32);
    bufp->fullIData(oldp+16,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2),32);
    bufp->fullCData(oldp+17,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op),5);
    bufp->fullCData(oldp+18,(((0xeU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                               ? 1U : (0x1fU & vlSelf->Main__DOT__iram_rdata))),5);
    bufp->fullBit(oldp+19,((0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T)));
    bufp->fullCData(oldp+20,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we),2);
    bufp->fullCData(oldp+21,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name),5);
    bufp->fullSData(oldp+22,((0x3fffU & (vlSelf->Main__DOT__iram_rdata 
                                         >> 0xaU))),14);
    bufp->fullBit(oldp+23,(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_csr_we));
    bufp->fullBit(oldp+24,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once_ex));
    bufp->fullBit(oldp+25,((0x14U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))));
    bufp->fullIData(oldp+26,(((1U == (0x1fU & (vlSelf->Main__DOT__iram_rdata 
                                               >> 5U)))
                               ? 0xffffffffU : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata1)),32);
    bufp->fullBit(oldp+27,((0x12U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))));
    bufp->fullBit(oldp+28,((0U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))));
    bufp->fullIData(oldp+29,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data),32);
    bufp->fullCData(oldp+30,(((0x13U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                               ? 0xbU : ((0x12U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                          ? 0xcU : 0U))),6);
    bufp->fullIData(oldp+31,(((IData)(((0U == (0xfffc00U 
                                               & vlSelf->Main__DOT__iram_rdata)) 
                                       & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_csr_we)))
                               ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT___crmd_T_3
                               : ((0x14U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                   ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT___crmd_T_6
                                   : ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once_ex)
                                       ? (0xfffffff8U 
                                          & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__crmd)
                                       : vlSelf->Main__DOT__cpucore__DOT__csr__DOT__crmd)))),32);
    bufp->fullIData(oldp+32,(((IData)(((0x400U == (0xfffc00U 
                                                   & vlSelf->Main__DOT__iram_rdata)) 
                                       & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_csr_we)))
                               ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT___prmd_T_3
                               : ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once_ex)
                                   ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT___prmd_T_6
                                   : vlSelf->Main__DOT__cpucore__DOT__csr__DOT__prmd))),32);
    bufp->fullIData(oldp+33,(((IData)(((0x1400U == 
                                        (0xfffc00U 
                                         & vlSelf->Main__DOT__iram_rdata)) 
                                       & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_csr_we)))
                               ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT___estat_T_3
                               : ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once_ex)
                                   ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT___estat_T_5
                                   : vlSelf->Main__DOT__cpucore__DOT__csr__DOT__estat))),32);
    bufp->fullIData(oldp+34,(((IData)(((0x1800U == 
                                        (0xfffc00U 
                                         & vlSelf->Main__DOT__iram_rdata)) 
                                       & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_csr_we)))
                               ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT___era_T_3
                               : ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once_ex)
                                   ? vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc
                                   : vlSelf->Main__DOT__cpucore__DOT__csr__DOT__era))),32);
    bufp->fullIData(oldp+35,(((IData)(((0x3000U == 
                                        (0xfffc00U 
                                         & vlSelf->Main__DOT__iram_rdata)) 
                                       & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_csr_we)))
                               ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT___eentry_T_3
                               : vlSelf->Main__DOT__cpucore__DOT__csr__DOT__eentry)),32);
    bufp->fullIData(oldp+36,(((0x15U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                               ? (((((((0U == (0x3fffU 
                                               & (vlSelf->Main__DOT__iram_rdata 
                                                  >> 0xaU)))
                                        ? 0xffffffffU
                                        : 0U) & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__crmd) 
                                     | (((1U == (0x3fffU 
                                                 & (vlSelf->Main__DOT__iram_rdata 
                                                    >> 0xaU)))
                                          ? 0xffffffffU
                                          : 0U) & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__prmd)) 
                                    | (((5U == (0x3fffU 
                                                & (vlSelf->Main__DOT__iram_rdata 
                                                   >> 0xaU)))
                                         ? 0xffffffffU
                                         : 0U) & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__estat)) 
                                   | (((6U == (0x3fffU 
                                               & (vlSelf->Main__DOT__iram_rdata 
                                                  >> 0xaU)))
                                        ? 0xffffffffU
                                        : 0U) & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__era)) 
                                  | (((0xcU == (0x3fffU 
                                                & (vlSelf->Main__DOT__iram_rdata 
                                                   >> 0xaU)))
                                       ? 0xffffffffU
                                       : 0U) & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__eentry))
                               : (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___io_res_T_18))),32);
    bufp->fullBit(oldp+37,((1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we))));
    bufp->fullIData(oldp+38,((((((((0U == (0x3fffU 
                                           & (vlSelf->Main__DOT__iram_rdata 
                                              >> 0xaU)))
                                    ? 0xffffffffU : 0U) 
                                  & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__crmd) 
                                 | (((1U == (0x3fffU 
                                             & (vlSelf->Main__DOT__iram_rdata 
                                                >> 0xaU)))
                                      ? 0xffffffffU
                                      : 0U) & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__prmd)) 
                                | (((5U == (0x3fffU 
                                            & (vlSelf->Main__DOT__iram_rdata 
                                               >> 0xaU)))
                                     ? 0xffffffffU : 0U) 
                                   & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__estat)) 
                               | (((6U == (0x3fffU 
                                           & (vlSelf->Main__DOT__iram_rdata 
                                              >> 0xaU)))
                                    ? 0xffffffffU : 0U) 
                                  & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__era)) 
                              | (((0xcU == (0x3fffU 
                                            & (vlSelf->Main__DOT__iram_rdata 
                                               >> 0xaU)))
                                   ? 0xffffffffU : 0U) 
                                 & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__eentry))),32);
    bufp->fullBit(oldp+39,((0x15U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))));
    bufp->fullCData(oldp+40,((0x1fU & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),5);
    bufp->fullBit(oldp+41,((9U != (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+42,((0xbU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullIData(oldp+43,((IData)(((0x10U & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)
                                       ? ((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                           ? (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_4 
                                              << 0x10U)
                                           : (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_4 
                                              >> 0x10U))
                                       : vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_4))),32);
    bufp->fullBit(oldp+44,((1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+45,((2U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+46,((3U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+47,((4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+48,((5U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+49,((6U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+50,((7U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+51,((8U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+52,((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+53,((0xaU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+54,((0xcU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+55,((0xdU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+56,((0xeU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+57,((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+58,((0x10U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+59,((0x12U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+60,((0x11U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+61,((0x13U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    bufp->fullBit(oldp+62,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_1_0));
    bufp->fullQData(oldp+63,((((QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1_out_cout)) 
                               << 0x20U) | (QData)((IData)(
                                                           (((((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__sum_3) 
                                                               << 0x1cU) 
                                                              | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_3) 
                                                                  << 0x18U) 
                                                                 ^ 
                                                                 ((0x8000000U 
                                                                   & (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_3) 
                                                                       << 0x19U) 
                                                                      | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_3_2) 
                                                                          << 0x1bU) 
                                                                         & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_3) 
                                                                            << 0x19U)))) 
                                                                  | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_3_2) 
                                                                      << 0x1aU) 
                                                                     | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_3_1) 
                                                                         << 0x19U) 
                                                                        | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry___05F2) 
                                                                           << 0x18U)))))) 
                                                             | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_2) 
                                                                  << 0x14U) 
                                                                 ^ 
                                                                 ((0x800000U 
                                                                   & (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_2) 
                                                                       << 0x15U) 
                                                                      | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_2_2) 
                                                                          << 0x17U) 
                                                                         & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_2) 
                                                                            << 0x15U)))) 
                                                                  | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_2_2) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_2_1) 
                                                                         << 0x15U) 
                                                                        | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry___05F1) 
                                                                           << 0x14U))))) 
                                                                | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_1) 
                                                                    << 0x10U) 
                                                                   ^ 
                                                                   ((0x80000U 
                                                                     & (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_1) 
                                                                         << 0x11U) 
                                                                        | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_1_2) 
                                                                            << 0x13U) 
                                                                           & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_1) 
                                                                              << 0x11U)))) 
                                                                    | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_1_2) 
                                                                        << 0x12U) 
                                                                       | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_1_1) 
                                                                           << 0x11U) 
                                                                          | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_1_0) 
                                                                             << 0x10U))))))) 
                                                            | (((((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_4) 
                                                                  << 0xcU) 
                                                                 ^ 
                                                                 ((0x8000U 
                                                                   & (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_4) 
                                                                       << 0xdU) 
                                                                      | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_4_2) 
                                                                          << 0xfU) 
                                                                         & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_4) 
                                                                            << 0xdU)))) 
                                                                  | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_4_2) 
                                                                      << 0xeU) 
                                                                     | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_4_1) 
                                                                         << 0xdU) 
                                                                        | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry___05F3) 
                                                                           << 0xcU))))) 
                                                                | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_3) 
                                                                    << 8U) 
                                                                   ^ 
                                                                   ((0x800U 
                                                                     & (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_3) 
                                                                         << 9U) 
                                                                        | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_3_2) 
                                                                            << 0xbU) 
                                                                           & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_3) 
                                                                              << 9U)))) 
                                                                    | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_3_2) 
                                                                        << 0xaU) 
                                                                       | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_3_1) 
                                                                           << 9U) 
                                                                          | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry___05F2) 
                                                                             << 8U)))))) 
                                                               | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_2) 
                                                                    << 4U) 
                                                                   ^ 
                                                                   ((0x80U 
                                                                     & (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_2) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_2_2) 
                                                                            << 7U) 
                                                                           & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_2) 
                                                                              << 5U)))) 
                                                                    | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_2_2) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_2_1) 
                                                                           << 5U) 
                                                                          | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry___05F1) 
                                                                             << 4U))))) 
                                                                  | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_1) 
                                                                     ^ 
                                                                     ((8U 
                                                                       & (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_1) 
                                                                           << 1U) 
                                                                          | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_1_2) 
                                                                              << 3U) 
                                                                             & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_1) 
                                                                                << 1U)))) 
                                                                      | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_1_2) 
                                                                          << 2U) 
                                                                         | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_1_1) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_1_0)))))))))))),33);
    bufp->fullBit(oldp+65,((1U & (((~ (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2 
                                       >> 0x1fU)) & 
                                   (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                                    >> 0x1fU)) | ((~ 
                                                   ((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                                                     ^ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2) 
                                                    >> 0x1fU)) 
                                                  & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__sum_3) 
                                                     >> 3U))))));
    bufp->fullBit(oldp+66,((1U & (~ (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1_out_cout)))));
    bufp->fullIData(oldp+67,((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                              & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
    bufp->fullIData(oldp+68,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__or_res),32);
    bufp->fullIData(oldp+69,((~ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__or_res)),32);
    bufp->fullIData(oldp+70,((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                              ^ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
    bufp->fullQData(oldp+71,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__mul_pre),64);
    bufp->fullIData(oldp+73,((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__mul_pre)),32);
    bufp->fullIData(oldp+74,((IData)((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__mul_pre 
                                      >> 0x20U))),32);
    bufp->fullIData(oldp+75,((IData)((VL_MULS_QQQ(64, 
                                                  VL_EXTENDS_QI(64,32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a), 
                                                  VL_EXTENDS_QI(64,32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)) 
                                      >> 0x20U))),32);
    bufp->fullIData(oldp+76,(VL_DIV_III(32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
    bufp->fullIData(oldp+77,(VL_MODDIV_III(32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
    bufp->fullIData(oldp+78,(VL_MODDIVS_III(32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
    bufp->fullIData(oldp+79,((IData)((0x1ffffffffULL 
                                      & VL_DIVS_QQQ(33, 
                                                    (0x1ffffffffULL 
                                                     & VL_EXTENDS_QI(33,32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a)), 
                                                    (0x1ffffffffULL 
                                                     & VL_EXTENDS_QI(33,32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)))))),32);
    bufp->fullQData(oldp+80,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__buf_),64);
    bufp->fullQData(oldp+82,((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__buf_ 
                              << 1U)),64);
    bufp->fullQData(oldp+84,((((QData)((IData)(((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT___buf_T_3)
                                                 ? 0xffffffffU
                                                 : 0U))) 
                               << 0x1fU) | (QData)((IData)(
                                                           (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                                                            >> 1U))))),63);
    bufp->fullQData(oldp+86,(((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                               ? (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__buf_ 
                                  << 1U) : (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__buf_ 
                                            >> 1U))),64);
    bufp->fullQData(oldp+88,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_1),64);
    bufp->fullQData(oldp+90,((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_1 
                              << 2U)),64);
    bufp->fullQData(oldp+92,((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_1 
                              >> 2U)),62);
    bufp->fullQData(oldp+94,(((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                               ? (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_1 
                                  << 2U) : (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_1 
                                            >> 2U))),64);
    bufp->fullQData(oldp+96,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_2),64);
    bufp->fullQData(oldp+98,((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_2 
                              << 4U)),64);
    bufp->fullQData(oldp+100,((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_2 
                               >> 4U)),60);
    bufp->fullQData(oldp+102,(((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                ? (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_2 
                                   << 4U) : (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_2 
                                             >> 4U))),64);
    bufp->fullQData(oldp+104,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_3),64);
    bufp->fullQData(oldp+106,((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_3 
                               << 8U)),64);
    bufp->fullQData(oldp+108,((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_3 
                               >> 8U)),56);
    bufp->fullQData(oldp+110,(((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                ? (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_3 
                                   << 8U) : (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_3 
                                             >> 8U))),64);
    bufp->fullQData(oldp+112,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_4),64);
    bufp->fullQData(oldp+114,((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_4 
                               << 0x10U)),64);
    bufp->fullQData(oldp+116,((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_4 
                               >> 0x10U)),48);
    bufp->fullQData(oldp+118,(((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                ? (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_4 
                                   << 0x10U) : (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_4 
                                                >> 0x10U))),64);
    bufp->fullQData(oldp+120,(((0x10U & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)
                                ? ((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                    ? (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_4 
                                       << 0x10U) : 
                                   (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_4 
                                    >> 0x10U)) : vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_4)),64);
    bufp->fullCData(oldp+122,((0x1fU & (vlSelf->Main__DOT__iram_rdata 
                                        >> 5U))),5);
    bufp->fullCData(oldp+123,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_io_rdata2_MPORT_addr),5);
    bufp->fullIData(oldp+124,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata1),32);
    bufp->fullCData(oldp+125,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr),5);
    bufp->fullIData(oldp+126,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a),32);
    bufp->fullIData(oldp+127,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b),32);
    bufp->fullBit(oldp+128,((1U & (((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_4) 
                                      >> 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_4) 
                                                  >> 2U) 
                                                 & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4) 
                                                    >> 3U)) 
                                                | ((IData)(
                                                           (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_4) 
                                                             >> 1U) 
                                                            & (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4))))) 
                                                   | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_4) 
                                                      & (0xeU 
                                                         == 
                                                         (0xeU 
                                                          & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4))))))) 
                                    | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g___05F2) 
                                        & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4))) 
                                       | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g___05F1) 
                                           & ((0xfU 
                                               == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4)) 
                                              & (0xfU 
                                                 == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3)))) 
                                          | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g___05F0) 
                                             & ((0xfU 
                                                 == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4)) 
                                                & ((0xfU 
                                                    == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3)) 
                                                   & (0xfU 
                                                      == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2)))))))) 
                                   | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT___c_T_16) 
                                      & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4)) 
                                         & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3)) 
                                            & ((0xfU 
                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2)) 
                                               & (0xfU 
                                                  == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_1))))))))));
    bufp->fullCData(oldp+129,((0x1fU & vlSelf->Main__DOT__iram_rdata)),5);
    bufp->fullCData(oldp+130,((0x1fU & (vlSelf->Main__DOT__iram_rdata 
                                        >> 0xaU))),5);
    bufp->fullSData(oldp+131,((0xfffU & (vlSelf->Main__DOT__iram_rdata 
                                         >> 0xaU))),12);
    bufp->fullIData(oldp+132,((((- (IData)((1U & (vlSelf->Main__DOT__iram_rdata 
                                                  >> 0x15U)))) 
                                << 0xcU) | (0xfffU 
                                            & (vlSelf->Main__DOT__iram_rdata 
                                               >> 0xaU)))),32);
    bufp->fullIData(oldp+133,((((- (IData)((1U & (vlSelf->Main__DOT__iram_rdata 
                                                  >> 0x19U)))) 
                                << 0x12U) | (0x3fffcU 
                                             & (vlSelf->Main__DOT__iram_rdata 
                                                >> 8U)))),32);
    bufp->fullIData(oldp+134,((0xfffff000U & (vlSelf->Main__DOT__iram_rdata 
                                              << 7U))),32);
    bufp->fullIData(oldp+135,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__imm26),32);
    bufp->fullSData(oldp+136,((0x7fffU & vlSelf->Main__DOT__iram_rdata)),15);
    bufp->fullIData(oldp+137,((~ vlSelf->Main__DOT__iram_rdata)),32);
    bufp->fullBit(oldp+138,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+139,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+140,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+141,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x14U))));
    bufp->fullBit(oldp+142,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+143,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+144,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+145,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+146,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+147,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+148,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+149,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+150,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+151,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+152,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x1fU)))));
    bufp->fullCData(oldp+153,(((0x40U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                             >> 0x19U)) 
                                         << 6U)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_he1db0bdc__0))),7);
    bufp->fullBit(oldp+154,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x12U)))));
    bufp->fullCData(oldp+155,(((0x80U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                             >> 0x18U)) 
                                         << 7U)) | 
                               ((0x40U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                              >> 0x19U)) 
                                          << 6U)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_he1db0bdc__0)))),8);
    bufp->fullBit(oldp+156,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+157,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x10U))));
    bufp->fullBit(oldp+158,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x11U))));
    bufp->fullBit(oldp+159,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0xfU))));
    bufp->fullBit(oldp+160,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x12U))));
    bufp->fullBit(oldp+161,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x13U))));
    bufp->fullBit(oldp+162,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+163,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x15U))));
    bufp->fullBit(oldp+164,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x16U))));
    bufp->fullBit(oldp+165,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x19U))));
    bufp->fullBit(oldp+166,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x17U))));
    bufp->fullBit(oldp+167,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x18U))));
    bufp->fullBit(oldp+168,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+169,((1U & (~ vlSelf->Main__DOT__iram_rdata))));
    bufp->fullBit(oldp+170,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 1U)))));
    bufp->fullBit(oldp+171,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 2U)))));
    bufp->fullBit(oldp+172,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 3U)))));
    bufp->fullBit(oldp+173,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 4U)))));
    bufp->fullBit(oldp+174,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 5U)))));
    bufp->fullBit(oldp+175,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 6U)))));
    bufp->fullBit(oldp+176,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 7U)))));
    bufp->fullBit(oldp+177,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 8U)))));
    bufp->fullBit(oldp+178,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 9U)))));
    bufp->fullBit(oldp+179,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+180,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0xbU))));
    bufp->fullBit(oldp+181,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0xcU))));
    bufp->fullBit(oldp+182,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0xdU))));
    bufp->fullBit(oldp+183,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                      >> 0xeU)))));
    bufp->fullCData(oldp+184,(((0x80U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                             >> 0x18U)) 
                                         << 7U)) | 
                               ((0x40U & (vlSelf->Main__DOT__iram_rdata 
                                          >> 0x13U)) 
                                | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hdf4b931c__0)))),8);
    bufp->fullSData(oldp+185,(((0x8000U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                               >> 0x10U)) 
                                           << 0xfU)) 
                               | ((0x4000U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                                  >> 0x11U)) 
                                              << 0xeU)) 
                                  | ((0x2000U & ((~ 
                                                  (vlSelf->Main__DOT__iram_rdata 
                                                   >> 0x12U)) 
                                                 << 0xdU)) 
                                     | ((0x1000U & 
                                         (vlSelf->Main__DOT__iram_rdata 
                                          >> 7U)) | 
                                        ((0x800U & 
                                          ((~ (vlSelf->Main__DOT__iram_rdata 
                                               >> 0x14U)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & ((~ 
                                                 (vlSelf->Main__DOT__iram_rdata 
                                                  >> 0x15U)) 
                                                << 0xaU)) 
                                            | ((0x200U 
                                                & (vlSelf->Main__DOT__iram_rdata 
                                                   >> 0xdU)) 
                                               | ((0x100U 
                                                   & ((~ 
                                                       (vlSelf->Main__DOT__iram_rdata 
                                                        >> 0x17U)) 
                                                      << 8U)) 
                                                  | ((0x80U 
                                                      & ((~ 
                                                          (vlSelf->Main__DOT__iram_rdata 
                                                           >> 0x18U)) 
                                                         << 7U)) 
                                                     | ((0x40U 
                                                         & (vlSelf->Main__DOT__iram_rdata 
                                                            >> 0x13U)) 
                                                        | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hdf4b931c__0)))))))))))),16);
    bufp->fullCData(oldp+186,(((0x80U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                             >> 8U)) 
                                         << 7U)) | 
                               ((0x40U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                              >> 9U)) 
                                          << 6U)) | 
                                ((0x20U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                               >> 0xaU)) 
                                           << 5U)) 
                                 | ((0x10U & (vlSelf->Main__DOT__iram_rdata 
                                              >> 7U)) 
                                    | ((8U & (vlSelf->Main__DOT__iram_rdata 
                                              >> 9U)) 
                                       | ((4U & (vlSelf->Main__DOT__iram_rdata 
                                                 >> 0xbU)) 
                                          | ((2U & 
                                              ((~ (vlSelf->Main__DOT__iram_rdata 
                                                   >> 0xeU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ 
                                                   (vlSelf->Main__DOT__iram_rdata 
                                                    >> 0xfU))))))))))),8);
    bufp->fullBit(oldp+187,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+188,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+189,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+190,((1U & (vlSelf->Main__DOT__iram_rdata 
                                   >> 0x1eU))));
    bufp->fullCData(oldp+191,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_lo_lo_hi),2);
    bufp->fullSData(oldp+192,((((IData)((0x1ffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_66))) 
                                << 8U) | (((IData)(
                                                   (0x1ffU 
                                                    == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_72))) 
                                           << 7U) | 
                                          (((IData)(
                                                    (0x1ffU 
                                                     == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_74))) 
                                            << 6U) 
                                           | (((IData)(
                                                       (0xffU 
                                                        == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_84))) 
                                               << 5U) 
                                              | (((IData)(
                                                          (0x3fU 
                                                           == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_88))) 
                                                  << 4U) 
                                                 | (((IData)(
                                                             (0xffU 
                                                              == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_94))) 
                                                     << 3U) 
                                                    | (((IData)(
                                                                (0x1ffU 
                                                                 == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_100))) 
                                                        << 2U) 
                                                       | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h360c0578__0))))))))),9);
    bufp->fullCData(oldp+193,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5),3);
    bufp->fullCData(oldp+194,((((IData)((0x1ffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_72))) 
                                << 6U) | (((IData)(
                                                   (0x1ffU 
                                                    == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_74))) 
                                           << 5U) | 
                                          (((IData)(
                                                    (0x7fU 
                                                     == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_92))) 
                                            << 4U) 
                                           | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h6d60535a__0))))),7);
    bufp->fullCData(oldp+195,((((IData)((0x1ffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_72))) 
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
                                                     == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_92))) 
                                            << 5U) 
                                           | (((IData)(
                                                       (0xffU 
                                                        == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_94))) 
                                               << 4U) 
                                              | (((IData)(
                                                          (0xffU 
                                                           == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_96))) 
                                                  << 3U) 
                                                 | (((IData)(
                                                             (0xffU 
                                                              == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_98))) 
                                                     << 2U) 
                                                    | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h360c0578__0)))))))),8);
    bufp->fullCData(oldp+196,(((((vlSelf->Main__DOT__iram_rdata 
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
                                                      == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_66))) 
                                                  << 1U) 
                                                 | (0x3ffU 
                                                    == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_80)))))))),6);
    bufp->fullCData(oldp+197,((((IData)((0U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5))) 
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
    bufp->fullIData(oldp+198,((((IData)((0x7fffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_46))) 
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
    bufp->fullCData(oldp+199,(((0x80U & ((~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5)))) 
                                         << 7U)) | 
                               (((IData)((0U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_lo_lo_hi))) 
                                 << 6U) | ((0x20U & 
                                            ((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_10)))) 
                                             << 5U)) 
                                           | ((0x10U 
                                               & ((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_8)))) 
                                                  << 4U)) 
                                              | ((8U 
                                                  & ((~ (IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_6)))) 
                                                     << 3U)) 
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
    bufp->fullIData(oldp+200,((((IData)((0x7fffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_46))) 
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
                                                                           | ((0x10U 
                                                                               & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_8)))) 
                                                                                << 4U)) 
                                                                              | ((8U 
                                                                                & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_6)))) 
                                                                                << 3U)) 
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
    bufp->fullCData(oldp+201,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type),4);
    bufp->fullIData(oldp+202,(((2U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))
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
    bufp->fullBit(oldp+203,((((0x10U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)) 
                              & (4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))) 
                             | ((0U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we)) 
                                | (0xaU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))))));
    bufp->fullBit(oldp+204,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__rj_eq_rd));
    bufp->fullQData(oldp+205,((((QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1_out_cout)) 
                                << 0x20U) | (QData)((IData)(
                                                            (((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__sum_3) 
                                                                << 0x1cU) 
                                                               | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_3) 
                                                                   << 0x18U) 
                                                                  ^ 
                                                                  ((0x8000000U 
                                                                    & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g_3) 
                                                                        << 0x19U) 
                                                                       | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__c_carry_3_2) 
                                                                           << 0x1bU) 
                                                                          & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_3) 
                                                                             << 0x19U)))) 
                                                                   | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__c_carry_3_2) 
                                                                       << 0x1aU) 
                                                                      | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__c_carry_3_1) 
                                                                          << 0x19U) 
                                                                         | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__c_carry___05F2) 
                                                                            << 0x18U)))))) 
                                                              | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_2) 
                                                                   << 0x14U) 
                                                                  ^ 
                                                                  ((0x800000U 
                                                                    & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g_2) 
                                                                        << 0x15U) 
                                                                       | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__c_carry_2_2) 
                                                                           << 0x17U) 
                                                                          & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_2) 
                                                                             << 0x15U)))) 
                                                                   | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__c_carry_2_2) 
                                                                       << 0x16U) 
                                                                      | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__c_carry_2_1) 
                                                                          << 0x15U) 
                                                                         | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__c_carry___05F1) 
                                                                            << 0x14U))))) 
                                                                 | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_1) 
                                                                     << 0x10U) 
                                                                    ^ 
                                                                    ((0x80000U 
                                                                      & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g_1) 
                                                                          << 0x11U) 
                                                                         | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__c_carry_1_2) 
                                                                             << 0x13U) 
                                                                            & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_1) 
                                                                               << 0x11U)))) 
                                                                     | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__c_carry_1_2) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__c_carry_1_1) 
                                                                            << 0x11U) 
                                                                           | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__c_carry_1_0) 
                                                                              << 0x10U))))))) 
                                                             | (((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_4) 
                                                                   << 0xcU) 
                                                                  ^ 
                                                                  ((0x8000U 
                                                                    & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__g_4) 
                                                                        << 0xdU) 
                                                                       | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__c_carry_4_2) 
                                                                           << 0xfU) 
                                                                          & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_4) 
                                                                             << 0xdU)))) 
                                                                   | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__c_carry_4_2) 
                                                                       << 0xeU) 
                                                                      | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__c_carry_4_1) 
                                                                          << 0xdU) 
                                                                         | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__c_carry___05F3) 
                                                                            << 0xcU))))) 
                                                                 | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_3) 
                                                                     << 8U) 
                                                                    ^ 
                                                                    ((0x800U 
                                                                      & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__g_3) 
                                                                          << 9U) 
                                                                         | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__c_carry_3_2) 
                                                                             << 0xbU) 
                                                                            & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_3) 
                                                                               << 9U)))) 
                                                                     | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__c_carry_3_2) 
                                                                         << 0xaU) 
                                                                        | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__c_carry_3_1) 
                                                                            << 9U) 
                                                                           | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__c_carry___05F2) 
                                                                              << 8U)))))) 
                                                                | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_2) 
                                                                     << 4U) 
                                                                    ^ 
                                                                    ((0x80U 
                                                                      & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__g_2) 
                                                                          << 5U) 
                                                                         | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__c_carry_2_2) 
                                                                             << 7U) 
                                                                            & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_2) 
                                                                               << 5U)))) 
                                                                     | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__c_carry_2_2) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__c_carry_2_1) 
                                                                            << 5U) 
                                                                           | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__c_carry___05F1) 
                                                                              << 4U))))) 
                                                                   | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_1) 
                                                                      ^ 
                                                                      (1U 
                                                                       | ((8U 
                                                                           & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__g_1) 
                                                                               << 1U) 
                                                                              | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__c_carry_1_2) 
                                                                                << 3U) 
                                                                                & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_1) 
                                                                                << 1U)))) 
                                                                          | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__c_carry_1_2) 
                                                                              << 2U) 
                                                                             | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__c_carry_1_1) 
                                                                                << 1U)))))))))))),33);
    bufp->fullBit(oldp+207,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__slt_res));
    bufp->fullBit(oldp+208,((1U & (~ (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1_out_cout)))));
    bufp->fullBit(oldp+209,(((0x10U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)) 
                             | ((0x11U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)) 
                                | (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))))));
    bufp->fullBit(oldp+210,(((0x13U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)) 
                             & (1U == (0x7fffU & vlSelf->Main__DOT__iram_rdata)))));
    bufp->fullSData(oldp+211,((0xffffU & vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a)),16);
    bufp->fullSData(oldp+212,((0xffffU & vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b)),16);
    bufp->fullSData(oldp+213,((((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4) 
                                  << 0xcU) ^ ((0x8000U 
                                               & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_4) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_2) 
                                                      << 0xfU) 
                                                     & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4) 
                                                        << 0xdU)))) 
                                              | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_2) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_1) 
                                                     << 0xdU) 
                                                    | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry___05F3) 
                                                       << 0xcU))))) 
                                | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_3) 
                                    << 8U) ^ ((0x800U 
                                               & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_3) 
                                                   << 9U) 
                                                  | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_2) 
                                                      << 0xbU) 
                                                     & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_3) 
                                                        << 9U)))) 
                                              | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_2) 
                                                  << 0xaU) 
                                                 | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_1) 
                                                     << 9U) 
                                                    | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry___05F2) 
                                                       << 8U)))))) 
                               | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2) 
                                    << 4U) ^ ((0x80U 
                                               & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_2) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_2) 
                                                      << 7U) 
                                                     & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2) 
                                                        << 5U)))) 
                                              | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_2) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_1) 
                                                     << 5U) 
                                                    | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F0) 
                                                       << 4U))))) 
                                  | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_1) 
                                     ^ ((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1) 
                                                << 1U) 
                                               | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_1_2) 
                                                   << 3U) 
                                                  & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_1) 
                                                     << 1U)))) 
                                        | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_1_2) 
                                            << 2U) 
                                           | (2U & 
                                              ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1) 
                                               << 1U)))))))),16);
    bufp->fullBit(oldp+214,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT___c_T_16));
    bufp->fullSData(oldp+215,((vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+216,((vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+217,((((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4) 
                                  << 0xcU) ^ ((0x8000U 
                                               & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_4) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_2) 
                                                      << 0xfU) 
                                                     & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4) 
                                                        << 0xdU)))) 
                                              | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_2) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_1) 
                                                     << 0xdU) 
                                                    | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F3) 
                                                       << 0xcU))))) 
                                | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3) 
                                    << 8U) ^ ((0x800U 
                                               & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_3) 
                                                   << 9U) 
                                                  | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_2) 
                                                      << 0xbU) 
                                                     & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3) 
                                                        << 9U)))) 
                                              | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_2) 
                                                  << 0xaU) 
                                                 | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_1) 
                                                     << 9U) 
                                                    | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F2) 
                                                       << 8U)))))) 
                               | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2) 
                                    << 4U) ^ ((0x80U 
                                               & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_2) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_2) 
                                                      << 7U) 
                                                     & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2) 
                                                        << 5U)))) 
                                              | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_2) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_1) 
                                                     << 5U) 
                                                    | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F1) 
                                                       << 4U))))) 
                                  | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_1) 
                                     ^ ((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_1) 
                                                << 1U) 
                                               | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_2) 
                                                   << 3U) 
                                                  & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_1) 
                                                     << 1U)))) 
                                        | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_2) 
                                            << 2U) 
                                           | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_1) 
                                               << 1U) 
                                              | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT___c_T_16)))))))),16);
    bufp->fullCData(oldp+218,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_2),4);
    bufp->fullCData(oldp+219,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2),4);
    bufp->fullBit(oldp+220,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F1));
    bufp->fullCData(oldp+221,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1),4);
    bufp->fullCData(oldp+222,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_1),4);
    bufp->fullBit(oldp+223,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F0));
    bufp->fullCData(oldp+224,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_4),4);
    bufp->fullCData(oldp+225,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4),4);
    bufp->fullBit(oldp+226,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F3));
    bufp->fullCData(oldp+227,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_3),4);
    bufp->fullCData(oldp+228,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_3),4);
    bufp->fullBit(oldp+229,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F2));
    bufp->fullBit(oldp+230,((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2))));
    bufp->fullBit(oldp+231,((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_1))));
    bufp->fullBit(oldp+232,((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4))));
    bufp->fullBit(oldp+233,((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_3))));
    bufp->fullBit(oldp+234,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry___05F2));
    bufp->fullBit(oldp+235,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry___05F3));
    bufp->fullCData(oldp+236,((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry___05F3) 
                                << 3U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry___05F2) 
                                           << 2U) | 
                                          ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F0) 
                                           << 1U)))),4);
    bufp->fullBit(oldp+237,((1U & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1))));
    bufp->fullBit(oldp+238,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_1_2));
    bufp->fullBit(oldp+239,((1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1) 
                                    >> 2U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_1_2) 
                                              & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_1) 
                                                 >> 2U))))));
    bufp->fullCData(oldp+240,(((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1) 
                                       << 1U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_1_2) 
                                                  << 3U) 
                                                 & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_1) 
                                                    << 1U)))) 
                               | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_1_2) 
                                   << 2U) | (2U & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1) 
                                                   << 1U))))),4);
    bufp->fullCData(oldp+241,(((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_1) 
                               ^ ((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1) 
                                          << 1U) | 
                                         (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_1_2) 
                                           << 3U) & 
                                          ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_1) 
                                           << 1U)))) 
                                  | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_1_2) 
                                      << 2U) | (2U 
                                                & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1) 
                                                   << 1U)))))),4);
    bufp->fullBit(oldp+242,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_1));
    bufp->fullBit(oldp+243,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_2));
    bufp->fullBit(oldp+244,((1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_2) 
                                    >> 2U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_2) 
                                              & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2) 
                                                 >> 2U))))));
    bufp->fullCData(oldp+245,(((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_2) 
                                       << 1U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_2) 
                                                  << 3U) 
                                                 & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2) 
                                                    << 1U)))) 
                               | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_2) 
                                   << 2U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_1) 
                                              << 1U) 
                                             | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F0))))),4);
    bufp->fullCData(oldp+246,(((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2) 
                               ^ ((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_2) 
                                          << 1U) | 
                                         (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_2) 
                                           << 3U) & 
                                          ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2) 
                                           << 1U)))) 
                                  | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_2) 
                                      << 2U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_1) 
                                                 << 1U) 
                                                | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F0)))))),4);
    bufp->fullBit(oldp+247,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_1));
    bufp->fullBit(oldp+248,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_2));
    bufp->fullBit(oldp+249,((1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_3) 
                                    >> 2U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_2) 
                                              & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_3) 
                                                 >> 2U))))));
    bufp->fullCData(oldp+250,(((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_3) 
                                       << 1U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_2) 
                                                  << 3U) 
                                                 & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_3) 
                                                    << 1U)))) 
                               | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_2) 
                                   << 2U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_1) 
                                              << 1U) 
                                             | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry___05F2))))),4);
    bufp->fullCData(oldp+251,(((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_3) 
                               ^ ((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_3) 
                                          << 1U) | 
                                         (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_2) 
                                           << 3U) & 
                                          ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_3) 
                                           << 1U)))) 
                                  | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_2) 
                                      << 2U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_1) 
                                                 << 1U) 
                                                | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry___05F2)))))),4);
    bufp->fullBit(oldp+252,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_1));
    bufp->fullBit(oldp+253,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_2));
    bufp->fullBit(oldp+254,((1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_4) 
                                    >> 2U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_2) 
                                              & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4) 
                                                 >> 2U))))));
    bufp->fullCData(oldp+255,(((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_4) 
                                       << 1U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_2) 
                                                  << 3U) 
                                                 & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4) 
                                                    << 1U)))) 
                               | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_2) 
                                   << 2U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_1) 
                                              << 1U) 
                                             | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry___05F3))))),4);
    bufp->fullCData(oldp+256,(((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4) 
                               ^ ((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_4) 
                                          << 1U) | 
                                         (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_2) 
                                           << 3U) & 
                                          ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4) 
                                           << 1U)))) 
                                  | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_2) 
                                      << 2U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_1) 
                                                 << 1U) 
                                                | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry___05F3)))))),4);
    bufp->fullCData(oldp+257,(((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2) 
                                 << 4U) ^ ((0x80U & 
                                            (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_2) 
                                              << 5U) 
                                             | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_2) 
                                                 << 7U) 
                                                & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2) 
                                                   << 5U)))) 
                                           | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_2) 
                                               << 6U) 
                                              | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_1) 
                                                  << 5U) 
                                                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F0) 
                                                    << 4U))))) 
                               | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_1) 
                                  ^ ((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1) 
                                             << 1U) 
                                            | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_1_2) 
                                                << 3U) 
                                               & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_1) 
                                                  << 1U)))) 
                                     | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_1_2) 
                                         << 2U) | (2U 
                                                   & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1) 
                                                      << 1U))))))),8);
    bufp->fullCData(oldp+258,(((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4) 
                                 << 4U) ^ ((0x80U & 
                                            (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_4) 
                                              << 5U) 
                                             | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_2) 
                                                 << 7U) 
                                                & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4) 
                                                   << 5U)))) 
                                           | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_2) 
                                               << 6U) 
                                              | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_1) 
                                                  << 5U) 
                                                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry___05F3) 
                                                    << 4U))))) 
                               | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_3) 
                                  ^ ((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_3) 
                                             << 1U) 
                                            | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_2) 
                                                << 3U) 
                                               & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_3) 
                                                  << 1U)))) 
                                     | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_2) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry___05F2))))))),8);
    bufp->fullCData(oldp+259,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_2),4);
    bufp->fullCData(oldp+260,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2),4);
    bufp->fullBit(oldp+261,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g___05F1));
    bufp->fullCData(oldp+262,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_1),4);
    bufp->fullCData(oldp+263,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_1),4);
    bufp->fullBit(oldp+264,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g___05F0));
    bufp->fullCData(oldp+265,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_4),4);
    bufp->fullCData(oldp+266,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4),4);
    bufp->fullBit(oldp+267,((1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_4) 
                                    >> 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_4) 
                                                >> 2U) 
                                               & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4) 
                                                  >> 3U)) 
                                              | ((IData)(
                                                         (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_4) 
                                                           >> 1U) 
                                                          & (0xcU 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4))))) 
                                                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_4) 
                                                    & (0xeU 
                                                       == 
                                                       (0xeU 
                                                        & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4))))))))));
    bufp->fullCData(oldp+268,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_3),4);
    bufp->fullCData(oldp+269,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3),4);
    bufp->fullBit(oldp+270,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g___05F2));
    bufp->fullBit(oldp+271,((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2))));
    bufp->fullBit(oldp+272,((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_1))));
    bufp->fullBit(oldp+273,((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4))));
    bufp->fullBit(oldp+274,((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3))));
    bufp->fullBit(oldp+275,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F1));
    bufp->fullBit(oldp+276,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F2));
    bufp->fullBit(oldp+277,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F3));
    bufp->fullCData(oldp+278,((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F3) 
                                << 3U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F2) 
                                           << 2U) | 
                                          (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F1) 
                                            << 1U) 
                                           | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT___c_T_16))))),4);
    bufp->fullBit(oldp+279,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_1));
    bufp->fullBit(oldp+280,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_2));
    bufp->fullBit(oldp+281,((1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_1) 
                                    >> 2U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_2) 
                                              & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_1) 
                                                 >> 2U))))));
    bufp->fullCData(oldp+282,(((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_1) 
                                       << 1U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_2) 
                                                  << 3U) 
                                                 & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_1) 
                                                    << 1U)))) 
                               | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_2) 
                                   << 2U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_1) 
                                              << 1U) 
                                             | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT___c_T_16))))),4);
    bufp->fullCData(oldp+283,(((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_1) 
                               ^ ((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_1) 
                                          << 1U) | 
                                         (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_2) 
                                           << 3U) & 
                                          ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_1) 
                                           << 1U)))) 
                                  | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_2) 
                                      << 2U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_1) 
                                                 << 1U) 
                                                | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT___c_T_16)))))),4);
    bufp->fullBit(oldp+284,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_1));
    bufp->fullBit(oldp+285,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_2));
    bufp->fullBit(oldp+286,((1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_2) 
                                    >> 2U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_2) 
                                              & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2) 
                                                 >> 2U))))));
    bufp->fullCData(oldp+287,(((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_2) 
                                       << 1U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_2) 
                                                  << 3U) 
                                                 & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2) 
                                                    << 1U)))) 
                               | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_2) 
                                   << 2U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_1) 
                                              << 1U) 
                                             | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F1))))),4);
    bufp->fullCData(oldp+288,(((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2) 
                               ^ ((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_2) 
                                          << 1U) | 
                                         (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_2) 
                                           << 3U) & 
                                          ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2) 
                                           << 1U)))) 
                                  | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_2) 
                                      << 2U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_1) 
                                                 << 1U) 
                                                | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F1)))))),4);
    bufp->fullBit(oldp+289,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_1));
    bufp->fullBit(oldp+290,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_2));
    bufp->fullBit(oldp+291,((1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_3) 
                                    >> 2U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_2) 
                                              & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3) 
                                                 >> 2U))))));
    bufp->fullCData(oldp+292,(((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_3) 
                                       << 1U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_2) 
                                                  << 3U) 
                                                 & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3) 
                                                    << 1U)))) 
                               | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_2) 
                                   << 2U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_1) 
                                              << 1U) 
                                             | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F2))))),4);
    bufp->fullCData(oldp+293,(((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3) 
                               ^ ((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_3) 
                                          << 1U) | 
                                         (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_2) 
                                           << 3U) & 
                                          ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3) 
                                           << 1U)))) 
                                  | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_2) 
                                      << 2U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_1) 
                                                 << 1U) 
                                                | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F2)))))),4);
    bufp->fullBit(oldp+294,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_1));
    bufp->fullBit(oldp+295,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_2));
    bufp->fullBit(oldp+296,((1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_4) 
                                    >> 2U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_2) 
                                              & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4) 
                                                 >> 2U))))));
    bufp->fullCData(oldp+297,(((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_4) 
                                       << 1U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_2) 
                                                  << 3U) 
                                                 & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4) 
                                                    << 1U)))) 
                               | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_2) 
                                   << 2U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_1) 
                                              << 1U) 
                                             | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F3))))),4);
    bufp->fullCData(oldp+298,(((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4) 
                               ^ ((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_4) 
                                          << 1U) | 
                                         (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_2) 
                                           << 3U) & 
                                          ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4) 
                                           << 1U)))) 
                                  | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_2) 
                                      << 2U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_1) 
                                                 << 1U) 
                                                | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F3)))))),4);
    bufp->fullCData(oldp+299,(((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2) 
                                 << 4U) ^ ((0x80U & 
                                            (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_2) 
                                              << 5U) 
                                             | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_2) 
                                                 << 7U) 
                                                & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2) 
                                                   << 5U)))) 
                                           | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_2) 
                                               << 6U) 
                                              | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_1) 
                                                  << 5U) 
                                                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F1) 
                                                    << 4U))))) 
                               | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_1) 
                                  ^ ((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_1) 
                                             << 1U) 
                                            | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_2) 
                                                << 3U) 
                                               & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_1) 
                                                  << 1U)))) 
                                     | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_2) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT___c_T_16))))))),8);
    bufp->fullCData(oldp+300,(((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4) 
                                 << 4U) ^ ((0x80U & 
                                            (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_4) 
                                              << 5U) 
                                             | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_2) 
                                                 << 7U) 
                                                & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4) 
                                                   << 5U)))) 
                                           | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_2) 
                                               << 6U) 
                                              | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_1) 
                                                  << 5U) 
                                                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F3) 
                                                    << 4U))))) 
                               | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3) 
                                  ^ ((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_3) 
                                             << 1U) 
                                            | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_2) 
                                                << 3U) 
                                               & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3) 
                                                  << 1U)))) 
                                     | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_2) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F2))))))),8);
    bufp->fullIData(oldp+301,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[0]),32);
    bufp->fullIData(oldp+302,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[1]),32);
    bufp->fullIData(oldp+303,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[2]),32);
    bufp->fullIData(oldp+304,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[3]),32);
    bufp->fullIData(oldp+305,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[4]),32);
    bufp->fullIData(oldp+306,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[5]),32);
    bufp->fullIData(oldp+307,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[6]),32);
    bufp->fullIData(oldp+308,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[7]),32);
    bufp->fullIData(oldp+309,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[8]),32);
    bufp->fullIData(oldp+310,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[9]),32);
    bufp->fullIData(oldp+311,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[10]),32);
    bufp->fullIData(oldp+312,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[11]),32);
    bufp->fullIData(oldp+313,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[12]),32);
    bufp->fullIData(oldp+314,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[13]),32);
    bufp->fullIData(oldp+315,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[14]),32);
    bufp->fullIData(oldp+316,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[15]),32);
    bufp->fullIData(oldp+317,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[16]),32);
    bufp->fullIData(oldp+318,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[17]),32);
    bufp->fullIData(oldp+319,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[18]),32);
    bufp->fullIData(oldp+320,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[19]),32);
    bufp->fullIData(oldp+321,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[20]),32);
    bufp->fullIData(oldp+322,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[21]),32);
    bufp->fullIData(oldp+323,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[22]),32);
    bufp->fullIData(oldp+324,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[23]),32);
    bufp->fullIData(oldp+325,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[24]),32);
    bufp->fullIData(oldp+326,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[25]),32);
    bufp->fullIData(oldp+327,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[26]),32);
    bufp->fullIData(oldp+328,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[27]),32);
    bufp->fullIData(oldp+329,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[28]),32);
    bufp->fullIData(oldp+330,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[29]),32);
    bufp->fullIData(oldp+331,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[30]),32);
    bufp->fullIData(oldp+332,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[31]),32);
    bufp->fullIData(oldp+333,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_io_rdata1_MPORT_data),32);
    bufp->fullIData(oldp+334,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_io_rdata2_MPORT_data),32);
    bufp->fullIData(oldp+335,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [1U]),32);
    bufp->fullIData(oldp+336,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [2U]),32);
    bufp->fullIData(oldp+337,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [3U]),32);
    bufp->fullIData(oldp+338,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [4U]),32);
    bufp->fullIData(oldp+339,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [5U]),32);
    bufp->fullIData(oldp+340,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [6U]),32);
    bufp->fullIData(oldp+341,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [7U]),32);
    bufp->fullIData(oldp+342,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [8U]),32);
    bufp->fullIData(oldp+343,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [9U]),32);
    bufp->fullIData(oldp+344,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0xaU]),32);
    bufp->fullIData(oldp+345,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0xbU]),32);
    bufp->fullIData(oldp+346,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0xcU]),32);
    bufp->fullIData(oldp+347,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0xdU]),32);
    bufp->fullIData(oldp+348,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0xeU]),32);
    bufp->fullIData(oldp+349,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0xfU]),32);
    bufp->fullIData(oldp+350,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x10U]),32);
    bufp->fullIData(oldp+351,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x11U]),32);
    bufp->fullIData(oldp+352,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x12U]),32);
    bufp->fullIData(oldp+353,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x13U]),32);
    bufp->fullIData(oldp+354,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x14U]),32);
    bufp->fullIData(oldp+355,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x15U]),32);
    bufp->fullIData(oldp+356,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x16U]),32);
    bufp->fullIData(oldp+357,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x17U]),32);
    bufp->fullIData(oldp+358,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x18U]),32);
    bufp->fullIData(oldp+359,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x19U]),32);
    bufp->fullIData(oldp+360,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x1aU]),32);
    bufp->fullIData(oldp+361,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x1bU]),32);
    bufp->fullIData(oldp+362,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x1cU]),32);
    bufp->fullIData(oldp+363,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x1dU]),32);
    bufp->fullIData(oldp+364,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x1eU]),32);
    bufp->fullIData(oldp+365,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                              [0x1fU]),32);
    bufp->fullIData(oldp+366,((((1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [1U])),32);
    bufp->fullIData(oldp+367,((((2U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [2U])),32);
    bufp->fullIData(oldp+368,((((3U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [3U])),32);
    bufp->fullIData(oldp+369,((((4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [4U])),32);
    bufp->fullIData(oldp+370,((((5U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [5U])),32);
    bufp->fullIData(oldp+371,((((6U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [6U])),32);
    bufp->fullIData(oldp+372,((((7U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [7U])),32);
    bufp->fullIData(oldp+373,((((8U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [8U])),32);
    bufp->fullIData(oldp+374,((((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [9U])),32);
    bufp->fullIData(oldp+375,((((0xaU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0xaU])),32);
    bufp->fullIData(oldp+376,((((0xbU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0xbU])),32);
    bufp->fullIData(oldp+377,((((0xcU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0xcU])),32);
    bufp->fullIData(oldp+378,((((0xdU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0xdU])),32);
    bufp->fullIData(oldp+379,((((0xeU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0xeU])),32);
    bufp->fullIData(oldp+380,((((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0xfU])),32);
    bufp->fullIData(oldp+381,((((0x10U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x10U])),32);
    bufp->fullIData(oldp+382,((((0x11U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x11U])),32);
    bufp->fullIData(oldp+383,((((0x12U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x12U])),32);
    bufp->fullIData(oldp+384,((((0x13U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x13U])),32);
    bufp->fullIData(oldp+385,((((0x14U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x14U])),32);
    bufp->fullIData(oldp+386,((((0x15U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x15U])),32);
    bufp->fullIData(oldp+387,((((0x16U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x16U])),32);
    bufp->fullIData(oldp+388,((((0x17U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x17U])),32);
    bufp->fullIData(oldp+389,((((0x18U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x18U])),32);
    bufp->fullIData(oldp+390,((((0x19U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x19U])),32);
    bufp->fullIData(oldp+391,((((0x1aU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x1aU])),32);
    bufp->fullIData(oldp+392,((((0x1bU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x1bU])),32);
    bufp->fullIData(oldp+393,((((0x1cU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x1cU])),32);
    bufp->fullIData(oldp+394,((((0x1dU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x1dU])),32);
    bufp->fullIData(oldp+395,((((0x1eU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x1eU])),32);
    bufp->fullIData(oldp+396,((((0x1fU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                               [0x1fU])),32);
    bufp->fullIData(oldp+397,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0]),32);
    bufp->fullIData(oldp+398,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[1]),32);
    bufp->fullIData(oldp+399,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[2]),32);
    bufp->fullIData(oldp+400,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[3]),32);
    bufp->fullIData(oldp+401,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[4]),32);
    bufp->fullIData(oldp+402,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[5]),32);
    bufp->fullIData(oldp+403,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[6]),32);
    bufp->fullIData(oldp+404,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[7]),32);
    bufp->fullIData(oldp+405,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[8]),32);
    bufp->fullIData(oldp+406,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[9]),32);
    bufp->fullIData(oldp+407,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[10]),32);
    bufp->fullIData(oldp+408,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[11]),32);
    bufp->fullIData(oldp+409,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[12]),32);
    bufp->fullIData(oldp+410,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[13]),32);
    bufp->fullIData(oldp+411,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[14]),32);
    bufp->fullIData(oldp+412,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[15]),32);
    bufp->fullIData(oldp+413,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[16]),32);
    bufp->fullIData(oldp+414,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[17]),32);
    bufp->fullIData(oldp+415,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[18]),32);
    bufp->fullIData(oldp+416,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[19]),32);
    bufp->fullIData(oldp+417,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[20]),32);
    bufp->fullIData(oldp+418,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[21]),32);
    bufp->fullIData(oldp+419,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[22]),32);
    bufp->fullIData(oldp+420,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[23]),32);
    bufp->fullIData(oldp+421,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[24]),32);
    bufp->fullIData(oldp+422,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[25]),32);
    bufp->fullIData(oldp+423,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[26]),32);
    bufp->fullIData(oldp+424,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[27]),32);
    bufp->fullIData(oldp+425,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[28]),32);
    bufp->fullIData(oldp+426,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[29]),32);
    bufp->fullIData(oldp+427,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[30]),32);
    bufp->fullIData(oldp+428,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[31]),32);
    bufp->fullIData(oldp+429,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__csr[0]),32);
    bufp->fullIData(oldp+430,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__csr[1]),32);
    bufp->fullIData(oldp+431,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__csr[2]),32);
    bufp->fullIData(oldp+432,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__csr[3]),32);
    bufp->fullIData(oldp+433,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__csr[4]),32);
    bufp->fullIData(oldp+434,(((8U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
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
    bufp->fullIData(oldp+435,(vlSelf->Main__DOT__cpucore__DOT__csr__DOT__crmd),32);
    bufp->fullIData(oldp+436,(vlSelf->Main__DOT__cpucore__DOT__csr__DOT__prmd),32);
    bufp->fullIData(oldp+437,(vlSelf->Main__DOT__cpucore__DOT__csr__DOT__era),32);
    bufp->fullIData(oldp+438,(vlSelf->Main__DOT__cpucore__DOT__csr__DOT__estat),32);
    bufp->fullIData(oldp+439,(vlSelf->Main__DOT__cpucore__DOT__csr__DOT__eentry),32);
    bufp->fullIData(oldp+440,(((IData)(4U) + vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc)),32);
    bufp->fullBit(oldp+441,(vlSelf->clock));
    bufp->fullBit(oldp+442,(vlSelf->reset));
    bufp->fullBit(oldp+443,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+444,(0U));
    bufp->fullIData(oldp+445,(0U),32);
    bufp->fullCData(oldp+446,(0U),4);
    bufp->fullBit(oldp+447,(1U));
    bufp->fullCData(oldp+448,(1U),5);
    bufp->fullCData(oldp+449,(2U),5);
    bufp->fullCData(oldp+450,(3U),5);
    bufp->fullCData(oldp+451,(4U),5);
    bufp->fullCData(oldp+452,(5U),5);
    bufp->fullCData(oldp+453,(6U),5);
    bufp->fullCData(oldp+454,(7U),5);
    bufp->fullCData(oldp+455,(8U),5);
    bufp->fullCData(oldp+456,(9U),5);
    bufp->fullCData(oldp+457,(0xaU),5);
    bufp->fullCData(oldp+458,(0xbU),5);
    bufp->fullCData(oldp+459,(0xcU),5);
    bufp->fullCData(oldp+460,(0xdU),5);
    bufp->fullCData(oldp+461,(0xeU),5);
    bufp->fullCData(oldp+462,(0xfU),5);
    bufp->fullCData(oldp+463,(0x10U),5);
    bufp->fullCData(oldp+464,(0x11U),5);
    bufp->fullCData(oldp+465,(0x12U),5);
    bufp->fullCData(oldp+466,(0x13U),5);
    bufp->fullCData(oldp+467,(0x14U),5);
    bufp->fullCData(oldp+468,(0x15U),5);
    bufp->fullCData(oldp+469,(0x16U),5);
    bufp->fullCData(oldp+470,(0x17U),5);
    bufp->fullCData(oldp+471,(0x18U),5);
    bufp->fullCData(oldp+472,(0x19U),5);
    bufp->fullCData(oldp+473,(0x1aU),5);
    bufp->fullCData(oldp+474,(0x1bU),5);
    bufp->fullCData(oldp+475,(0x1cU),5);
    bufp->fullCData(oldp+476,(0x1dU),5);
    bufp->fullCData(oldp+477,(0x1eU),5);
    bufp->fullCData(oldp+478,(0x1fU),5);
    bufp->fullSData(oldp+479,(0U),9);
}
