// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMain.h for the primary calling header

#ifndef VERILATED_VMAIN_EX_STAGE_H_
#define VERILATED_VMAIN_EX_STAGE_H_  // guard

#include "verilated.h"

class VMain__Syms;
class VMain_ALU;


class VMain_EX_stage final : public VerilatedModule {
  public:
    // CELLS
    VMain_ALU* __PVT__alu;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__es_bits_alu_op,4,0);
    VL_IN8(__PVT__es_bits_rf_waddr,4,0);
    VL_IN8(__PVT__es_bits_mem_we,1,0);
    VL_IN8(__PVT__es_bits_inst_name,4,0);
    VL_IN8(__PVT__es_bits_is_break,0,0);
    VL_OUT8(__PVT__toms_bits_inst_name,4,0);
    VL_OUT8(__PVT__toms_bits_res_from_mem,0,0);
    VL_OUT8(__PVT__toms_bits_rf_waddr,4,0);
    VL_OUT8(__PVT__toms_bits_is_break,0,0);
    VL_OUT8(__PVT__data_sram_en,0,0);
    VL_OUT8(__PVT__data_sram_wr,0,0);
    VL_OUT8(__PVT__data_sram_wstrb,3,0);
    CData/*4:0*/ __PVT__alu_io_alu_op;
    SData/*15:0*/ __PVT___data_sram_wstrb_T_1;
    SData/*15:0*/ __PVT___data_sram_wstrb_T_3;
    SData/*15:0*/ __PVT___data_sram_wstrb_T_5;
    VL_IN(__PVT__es_bits_pc,31,0);
    VL_IN(__PVT__es_bits_alu_src1,31,0);
    VL_IN(__PVT__es_bits_alu_src2,31,0);
    VL_IN(__PVT__es_bits_mem_wdata,31,0);
    VL_IN(__PVT__es_bits_inst,31,0);
    VL_OUT(__PVT__toms_bits_pc,31,0);
    VL_OUT(__PVT__toms_bits_alu_res,31,0);
    VL_OUT(__PVT__toms_bits_inst,31,0);
    VL_OUT(__PVT__data_sram_addr,31,0);
    VL_OUT(__PVT__data_sram_wdata,31,0);
    IData/*31:0*/ __PVT__alu_io_src1;
    IData/*31:0*/ __PVT__alu_io_src2;
    IData/*31:0*/ __PVT__alu_io_res;

    // INTERNAL VARIABLES
    VMain__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMain_EX_stage(VMain__Syms* symsp, const char* v__name);
    ~VMain_EX_stage();
    VL_UNCOPYABLE(VMain_EX_stage);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
