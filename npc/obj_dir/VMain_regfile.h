// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMain.h for the primary calling header

#ifndef VERILATED_VMAIN_REGFILE_H_
#define VERILATED_VMAIN_REGFILE_H_  // guard

#include "verilated.h"

class VMain__Syms;
class VMain_Difftest;
class VMain_npc_break;
class VMain_Exec;


class VMain_regfile final : public VerilatedModule {
  public:
    // CELLS
    VMain_Difftest* __PVT__difftest;
    VMain_npc_break* __PVT__npc_brk;
    VMain_Exec* __PVT__inst_exec_once;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clock,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_IN8(__PVT__io_raddr1,4,0);
        VL_IN8(__PVT__io_raddr2,4,0);
        VL_IN8(__PVT__io_waddr,4,0);
        VL_IN8(__PVT__io_is_break,0,0);
        CData/*0:0*/ __PVT__rf_io_rdata1_MPORT_en;
        CData/*4:0*/ __PVT__rf_io_rdata1_MPORT_addr;
        CData/*0:0*/ __PVT__rf_io_rdata2_MPORT_en;
        CData/*4:0*/ __PVT__rf_io_rdata2_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_0_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_0_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_1_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_1_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_2_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_2_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_3_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_3_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_4_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_4_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_5_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_5_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_6_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_6_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_7_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_7_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_8_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_8_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_9_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_9_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_10_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_10_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_11_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_11_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_12_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_12_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_13_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_13_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_14_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_14_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_15_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_15_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_16_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_16_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_17_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_17_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_18_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_18_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_19_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_19_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_20_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_20_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_21_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_21_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_22_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_22_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_23_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_23_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_24_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_24_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_25_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_25_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_26_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_26_MPORT_addr;
    };
    struct {
        CData/*0:0*/ __PVT__rf_difftest_io_rf_27_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_27_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_28_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_28_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_29_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_29_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_30_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_30_MPORT_addr;
        CData/*0:0*/ __PVT__rf_difftest_io_rf_31_MPORT_en;
        CData/*4:0*/ __PVT__rf_difftest_io_rf_31_MPORT_addr;
        CData/*4:0*/ __PVT__rf_MPORT_addr;
        CData/*0:0*/ __PVT__rf_MPORT_mask;
        CData/*0:0*/ __PVT__rf_MPORT_en;
        CData/*0:0*/ __PVT__npc_brk_is_break;
        CData/*0:0*/ __PVT__inst_exec_once_valid;
        CData/*0:0*/ __PVT__is_break;
        CData/*0:0*/ __PVT__valid;
        CData/*4:0*/ __Vdlyvdim0__rf__v0;
        CData/*0:0*/ __Vdlyvset__rf__v0;
        CData/*0:0*/ __Vdly__is_break;
        CData/*0:0*/ __Vdly__valid;
        VL_OUT(__PVT__io_rdata1,31,0);
        VL_OUT(__PVT__io_rdata2,31,0);
        VL_IN(__PVT__io_wdata,31,0);
        VL_IN(__PVT__io_rf_pc,31,0);
        VL_IN(__PVT__io_inst,31,0);
        IData/*31:0*/ __PVT__rf_io_rdata1_MPORT_data;
        IData/*31:0*/ __PVT__rf_io_rdata2_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_0_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_1_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_2_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_3_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_4_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_5_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_6_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_7_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_8_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_9_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_10_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_11_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_12_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_13_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_14_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_15_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_16_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_17_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_18_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_19_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_20_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_21_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_22_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_23_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_24_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_25_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_26_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_27_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_28_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_29_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_30_MPORT_data;
        IData/*31:0*/ __PVT__rf_difftest_io_rf_31_MPORT_data;
        IData/*31:0*/ __PVT__rf_MPORT_data;
        IData/*31:0*/ __PVT__difftest_rf_0;
        IData/*31:0*/ __PVT__difftest_rf_1;
        IData/*31:0*/ __PVT__difftest_rf_2;
    };
    struct {
        IData/*31:0*/ __PVT__difftest_rf_3;
        IData/*31:0*/ __PVT__difftest_rf_4;
        IData/*31:0*/ __PVT__difftest_rf_5;
        IData/*31:0*/ __PVT__difftest_rf_6;
        IData/*31:0*/ __PVT__difftest_rf_7;
        IData/*31:0*/ __PVT__difftest_rf_8;
        IData/*31:0*/ __PVT__difftest_rf_9;
        IData/*31:0*/ __PVT__difftest_rf_10;
        IData/*31:0*/ __PVT__difftest_rf_11;
        IData/*31:0*/ __PVT__difftest_rf_12;
        IData/*31:0*/ __PVT__difftest_rf_13;
        IData/*31:0*/ __PVT__difftest_rf_14;
        IData/*31:0*/ __PVT__difftest_rf_15;
        IData/*31:0*/ __PVT__difftest_rf_16;
        IData/*31:0*/ __PVT__difftest_rf_17;
        IData/*31:0*/ __PVT__difftest_rf_18;
        IData/*31:0*/ __PVT__difftest_rf_19;
        IData/*31:0*/ __PVT__difftest_rf_20;
        IData/*31:0*/ __PVT__difftest_rf_21;
        IData/*31:0*/ __PVT__difftest_rf_22;
        IData/*31:0*/ __PVT__difftest_rf_23;
        IData/*31:0*/ __PVT__difftest_rf_24;
        IData/*31:0*/ __PVT__difftest_rf_25;
        IData/*31:0*/ __PVT__difftest_rf_26;
        IData/*31:0*/ __PVT__difftest_rf_27;
        IData/*31:0*/ __PVT__difftest_rf_28;
        IData/*31:0*/ __PVT__difftest_rf_29;
        IData/*31:0*/ __PVT__difftest_rf_30;
        IData/*31:0*/ __PVT__difftest_rf_31;
        IData/*31:0*/ __PVT__inst_exec_once_inst;
        IData/*31:0*/ __PVT__inst_exec_once_pc;
        IData/*31:0*/ __PVT__pc;
        IData/*31:0*/ __PVT__inst;
        IData/*31:0*/ __Vdlyvval__rf__v0;
        IData/*31:0*/ __Vdly__pc;
        IData/*31:0*/ __Vdly__inst;
        VlUnpacked<IData/*31:0*/, 32> __PVT__rf;
    };

    // INTERNAL VARIABLES
    VMain__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMain_regfile(VMain__Syms* symsp, const char* v__name);
    ~VMain_regfile();
    VL_UNCOPYABLE(VMain_regfile);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
