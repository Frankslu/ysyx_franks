// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMain.h for the primary calling header

#ifndef VERILATED_VMAIN_MEM_STAGE_H_
#define VERILATED_VMAIN_MEM_STAGE_H_  // guard

#include "verilated.h"

class VMain__Syms;

class VMain_MEM_stage final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__ms_valid,0,0);
    VL_IN8(__PVT__ms_bits_inst_name,4,0);
    VL_IN8(__PVT__ms_bits_res_from_mem,0,0);
    VL_IN8(__PVT__ms_bits_rf_waddr,4,0);
    VL_IN8(__PVT__ms_bits_is_break,0,0);
    VL_OUT8(__PVT__tows_valid,0,0);
    VL_OUT8(__PVT__tows_bits_rf_waddr,4,0);
    VL_OUT8(__PVT__tows_bits_is_break,0,0);
    CData/*7:0*/ __PVT___mem_rdata_sign_T;
    SData/*15:0*/ __PVT___mem_rdata_sign_T_1;
    VL_IN(__PVT__ms_bits_pc,31,0);
    VL_IN(__PVT__ms_bits_alu_res,31,0);
    VL_IN(__PVT__ms_bits_inst,31,0);
    VL_OUT(__PVT__tows_bits_pc,31,0);
    VL_OUT(__PVT__tows_bits_rf_wdata,31,0);
    VL_OUT(__PVT__tows_bits_inst,31,0);
    VL_IN(__PVT__data_sram_rdata,31,0);
    IData/*31:0*/ __PVT___mem_rdata_T_1;
    IData/*31:0*/ __PVT___mem_rdata_T_4;
    IData/*31:0*/ __PVT___mem_rdata_T_7;
    IData/*31:0*/ __PVT___mem_rdata_T_9;
    IData/*31:0*/ __PVT___mem_rdata_T_11;
    IData/*31:0*/ __PVT___mem_rdata_T_13;
    IData/*31:0*/ __PVT__mem_rdata;

    // INTERNAL VARIABLES
    VMain__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMain_MEM_stage(VMain__Syms* symsp, const char* v__name);
    ~VMain_MEM_stage();
    VL_UNCOPYABLE(VMain_MEM_stage);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
