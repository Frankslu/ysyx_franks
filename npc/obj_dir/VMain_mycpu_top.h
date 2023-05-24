// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMain.h for the primary calling header

#ifndef VERILATED_VMAIN_MYCPU_TOP_H_
#define VERILATED_VMAIN_MYCPU_TOP_H_  // guard

#include "verilated.h"

class VMain__Syms;
class VMain_preIF;
class VMain_IF_stage;
class VMain_ID_stage;
class VMain_EX_stage;
class VMain_MEM_stage;
class VMain_WB_stage;


class VMain_mycpu_top final : public VerilatedModule {
  public:
    // CELLS
    VMain_preIF* __PVT__pIF;
    VMain_IF_stage* __PVT__IF;
    VMain_ID_stage* __PVT__ID;
    VMain_EX_stage* __PVT__EXE;
    VMain_MEM_stage* __PVT__MEM;
    VMain_WB_stage* __PVT__WB;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clock,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_OUT8(__PVT__inst_sram_en,0,0);
        VL_OUT8(__PVT__data_sram_en,0,0);
        VL_OUT8(__PVT__data_sram_wr,0,0);
        VL_OUT8(__PVT__data_sram_wstrb,3,0);
        CData/*0:0*/ __PVT__pIF_clock;
        CData/*0:0*/ __PVT__pIF_reset;
        CData/*0:0*/ __PVT__pIF_br_taken;
        CData/*0:0*/ __PVT__pIF_inst_sram_en;
        CData/*0:0*/ __PVT__pIF_tofs_valid;
        CData/*0:0*/ __PVT__IF_tods_valid;
        CData/*0:0*/ __PVT__IF_fs_valid;
        CData/*0:0*/ __PVT__ID_clock;
        CData/*0:0*/ __PVT__ID_toes_valid;
        CData/*4:0*/ __PVT__ID_toes_bits_alu_op;
        CData/*4:0*/ __PVT__ID_toes_bits_rf_waddr;
        CData/*0:0*/ __PVT__ID_toes_bits_rf_we;
        CData/*1:0*/ __PVT__ID_toes_bits_mem_we;
        CData/*4:0*/ __PVT__ID_toes_bits_inst_name;
        CData/*0:0*/ __PVT__ID_toes_bits_dpi_c_is_break;
        CData/*0:0*/ __PVT__ID_ds_valid;
        CData/*0:0*/ __PVT__ID_torf_rf_we;
        CData/*4:0*/ __PVT__ID_torf_rf_waddr;
        CData/*0:0*/ __PVT__ID_torf_valid;
        CData/*0:0*/ __PVT__ID_torf_dpi_c_is_break;
        CData/*0:0*/ __PVT__ID_br_taken;
        CData/*0:0*/ __PVT__EXE_es_valid;
        CData/*4:0*/ __PVT__EXE_es_bits_alu_op;
        CData/*4:0*/ __PVT__EXE_es_bits_rf_waddr;
        CData/*0:0*/ __PVT__EXE_es_bits_rf_we;
        CData/*1:0*/ __PVT__EXE_es_bits_mem_we;
        CData/*4:0*/ __PVT__EXE_es_bits_inst_name;
        CData/*0:0*/ __PVT__EXE_es_bits_dpi_c_is_break;
        CData/*0:0*/ __PVT__EXE_toms_valid;
        CData/*4:0*/ __PVT__EXE_toms_bits_inst_name;
        CData/*0:0*/ __PVT__EXE_toms_bits_res_from_mem;
        CData/*0:0*/ __PVT__EXE_toms_bits_rf_we;
        CData/*4:0*/ __PVT__EXE_toms_bits_rf_waddr;
        CData/*0:0*/ __PVT__EXE_toms_bits_dpi_c_is_break;
        CData/*0:0*/ __PVT__EXE_data_sram_en;
        CData/*0:0*/ __PVT__EXE_data_sram_wr;
        CData/*3:0*/ __PVT__EXE_data_sram_wstrb;
        CData/*0:0*/ __PVT__MEM_ms_valid;
        CData/*4:0*/ __PVT__MEM_ms_bits_inst_name;
        CData/*0:0*/ __PVT__MEM_ms_bits_res_from_mem;
        CData/*0:0*/ __PVT__MEM_ms_bits_rf_we;
        CData/*4:0*/ __PVT__MEM_ms_bits_rf_waddr;
        CData/*0:0*/ __PVT__MEM_ms_bits_dpi_c_is_break;
        CData/*0:0*/ __PVT__MEM_tows_valid;
        CData/*0:0*/ __PVT__MEM_tows_bits_rf_we;
        CData/*4:0*/ __PVT__MEM_tows_bits_rf_waddr;
        CData/*0:0*/ __PVT__MEM_tows_bits_dpi_c_is_break;
        CData/*0:0*/ __PVT__WB_ws_valid;
        CData/*0:0*/ __PVT__WB_ws_bits_rf_we;
        CData/*4:0*/ __PVT__WB_ws_bits_rf_waddr;
        CData/*0:0*/ __PVT__WB_ws_bits_dpi_c_is_break;
        CData/*0:0*/ __PVT__WB_torf_rf_we;
        CData/*4:0*/ __PVT__WB_torf_rf_waddr;
        CData/*0:0*/ __PVT__WB_torf_valid;
        CData/*0:0*/ __PVT__WB_torf_dpi_c_is_break;
        VL_OUT(__PVT__inst_sram_addr,31,0);
        VL_IN(__PVT__inst_sram_rdata,31,0);
        VL_OUT(__PVT__data_sram_addr,31,0);
    };
    struct {
        VL_OUT(__PVT__data_sram_wdata,31,0);
        VL_IN(__PVT__data_sram_rdata,31,0);
        IData/*31:0*/ __PVT__pIF_br_target;
        IData/*31:0*/ __PVT__pIF_inst_sram_addr;
        IData/*31:0*/ __PVT__pIF_tofs_bits_pc;
        IData/*31:0*/ __PVT__pIF_tofs_bits_next_pc;
        IData/*31:0*/ __PVT__IF_tods_bits_pc;
        IData/*31:0*/ __PVT__IF_tods_bits_inst;
        IData/*31:0*/ __PVT__IF_tods_bits_next_pc;
        IData/*31:0*/ __PVT__IF_inst_sram_rdata;
        IData/*31:0*/ __PVT__IF_fs_bits_pc;
        IData/*31:0*/ __PVT__IF_fs_bits_next_pc;
        IData/*31:0*/ __PVT__ID_toes_bits_alu_src1;
        IData/*31:0*/ __PVT__ID_toes_bits_alu_src2;
        IData/*31:0*/ __PVT__ID_toes_bits_mem_wdata;
        IData/*31:0*/ __PVT__ID_toes_bits_dpi_c_inst;
        IData/*31:0*/ __PVT__ID_toes_bits_dpi_c_next_pc;
        IData/*31:0*/ __PVT__ID_ds_bits_pc;
        IData/*31:0*/ __PVT__ID_ds_bits_inst;
        IData/*31:0*/ __PVT__ID_ds_bits_next_pc;
        IData/*31:0*/ __PVT__ID_torf_rf_wdata;
        IData/*31:0*/ __PVT__ID_torf_dpi_c_inst;
        IData/*31:0*/ __PVT__ID_torf_dpi_c_next_pc;
        IData/*31:0*/ __PVT__ID_br_target;
        IData/*31:0*/ __PVT__EXE_es_bits_alu_src1;
        IData/*31:0*/ __PVT__EXE_es_bits_alu_src2;
        IData/*31:0*/ __PVT__EXE_es_bits_mem_wdata;
        IData/*31:0*/ __PVT__EXE_es_bits_dpi_c_inst;
        IData/*31:0*/ __PVT__EXE_es_bits_dpi_c_next_pc;
        IData/*31:0*/ __PVT__EXE_toms_bits_alu_res;
        IData/*31:0*/ __PVT__EXE_toms_bits_dpi_c_inst;
        IData/*31:0*/ __PVT__EXE_toms_bits_dpi_c_next_pc;
        IData/*31:0*/ __PVT__EXE_data_sram_addr;
        IData/*31:0*/ __PVT__EXE_data_sram_wdata;
        IData/*31:0*/ __PVT__MEM_ms_bits_alu_res;
        IData/*31:0*/ __PVT__MEM_ms_bits_dpi_c_inst;
        IData/*31:0*/ __PVT__MEM_ms_bits_dpi_c_next_pc;
        IData/*31:0*/ __PVT__MEM_tows_bits_rf_wdata;
        IData/*31:0*/ __PVT__MEM_tows_bits_dpi_c_inst;
        IData/*31:0*/ __PVT__MEM_tows_bits_dpi_c_next_pc;
        IData/*31:0*/ __PVT__MEM_data_sram_rdata;
        IData/*31:0*/ __PVT__WB_ws_bits_rf_wdata;
        IData/*31:0*/ __PVT__WB_ws_bits_dpi_c_inst;
        IData/*31:0*/ __PVT__WB_ws_bits_dpi_c_next_pc;
        IData/*31:0*/ __PVT__WB_torf_rf_wdata;
        IData/*31:0*/ __PVT__WB_torf_dpi_c_inst;
        IData/*31:0*/ __PVT__WB_torf_dpi_c_next_pc;
    };

    // INTERNAL VARIABLES
    VMain__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMain_mycpu_top(VMain__Syms* symsp, const char* v__name);
    ~VMain_mycpu_top();
    VL_UNCOPYABLE(VMain_mycpu_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
