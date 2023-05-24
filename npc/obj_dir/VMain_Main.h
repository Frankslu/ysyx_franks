// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMain.h for the primary calling header

#ifndef VERILATED_VMAIN_MAIN_H_
#define VERILATED_VMAIN_MAIN_H_  // guard

#include "verilated.h"

class VMain__Syms;
class VMain_mycpu_top;
class VMain_d_mem;
class VMain_i_mem;


class VMain_Main final : public VerilatedModule {
  public:
    // CELLS
    VMain_mycpu_top* __PVT__cpucore;
    VMain_d_mem* __PVT__dram;
    VMain_i_mem* __PVT__iram;

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __PVT__cpucore_clock;
    CData/*0:0*/ __PVT__cpucore_reset;
    CData/*0:0*/ __PVT__cpucore_inst_sram_en;
    CData/*0:0*/ __PVT__cpucore_data_sram_en;
    CData/*0:0*/ __PVT__cpucore_data_sram_wr;
    CData/*3:0*/ __PVT__cpucore_data_sram_wstrb;
    CData/*0:0*/ __PVT__dram_en;
    CData/*0:0*/ __PVT__dram_wr;
    CData/*3:0*/ __PVT__dram_wstrb;
    CData/*0:0*/ __PVT__iram_en;
    CData/*0:0*/ __PVT__iram_wr;
    CData/*3:0*/ __PVT__iram_wstrb;
    IData/*31:0*/ __PVT__cpucore_inst_sram_addr;
    IData/*31:0*/ __PVT__cpucore_inst_sram_rdata;
    IData/*31:0*/ __PVT__cpucore_data_sram_addr;
    IData/*31:0*/ __PVT__cpucore_data_sram_wdata;
    IData/*31:0*/ __PVT__cpucore_data_sram_rdata;
    IData/*31:0*/ __PVT__dram_addr;
    IData/*31:0*/ __PVT__dram_wdata;
    IData/*31:0*/ __PVT__dram_rdata;
    IData/*31:0*/ __PVT__iram_addr;
    IData/*31:0*/ __PVT__iram_wdata;
    IData/*31:0*/ __PVT__iram_rdata;

    // INTERNAL VARIABLES
    VMain__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMain_Main(VMain__Syms* symsp, const char* v__name);
    ~VMain_Main();
    VL_UNCOPYABLE(VMain_Main);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
