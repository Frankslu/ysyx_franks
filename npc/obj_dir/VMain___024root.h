// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMain.h for the primary calling header

#ifndef VERILATED_VMAIN___024ROOT_H_
#define VERILATED_VMAIN___024ROOT_H_  // guard

#include "verilated.h"

class VMain__Syms;

class VMain___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        CData/*1:0*/ Main__DOT__cpucore__DOT__ID_toes_bits_mem_we;
        CData/*4:0*/ Main__DOT__cpucore__DOT__ID_toes_bits_inst_name;
        CData/*4:0*/ Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_raddr2;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_17;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_19;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_41;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_53;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_55;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_57;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_63;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_79;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_83;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_85;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_87;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_89;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_91;
        CData/*7:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_92;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_95;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_97;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_101;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_105;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_115;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_117;
        CData/*3:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_118;
        CData/*4:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_122;
        CData/*3:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_128;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_133;
        CData/*2:0*/ Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5;
        CData/*3:0*/ Main__DOT__cpucore__DOT__ID__DOT__inst_type;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT__rj_eq_rd;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT__slt_res;
        CData/*7:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hc442db33__0;
        CData/*6:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hf81c125f__0;
        CData/*7:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hf55cf174__0;
        CData/*3:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hea5ce459__0;
        CData/*5:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h8b89584c__0;
        CData/*6:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h2efe7c47__0;
        CData/*7:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h137d715b__0;
        CData/*7:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h3cb35f4c__0;
        CData/*2:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h1bd59172__0;
        CData/*1:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h2b6f7eb5__0;
        CData/*1:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hd18ef98c__0;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h8d80ac40__0;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h68e26b49__0;
        CData/*1:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h6def06bc__0;
        CData/*2:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h5554197b__0;
        CData/*5:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_he1db0bdc__0;
        CData/*4:0*/ Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op;
        CData/*0:0*/ Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_sub;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_10;
        SData/*14:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_26;
        SData/*15:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_32;
        SData/*15:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_42;
        SData/*14:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_46;
        SData/*8:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_64;
        SData/*8:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_76;
        SData/*8:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_102;
        SData/*8:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_108;
        SData/*11:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h924e2e84__0;
        SData/*13:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h3ae392be__0;
    };
    struct {
        SData/*13:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h52afcb45__0;
        SData/*13:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h138f6fae__0;
        SData/*13:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h3b60932f__0;
        SData/*14:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hbb8003c0__0;
        SData/*11:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hbb50ecb2__0;
        SData/*11:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hb79c9193__0;
        SData/*12:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h92bfeef8__0;
        SData/*14:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hf06ea362__0;
        SData/*12:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h2a536b4b__0;
        SData/*8:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h5a2ad26b__0;
        SData/*9:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h20fcf308__0;
        SData/*12:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h75ee0a09__0;
        IData/*31:0*/ Main__DOT__dram_rdata;
        IData/*31:0*/ Main__DOT__iram_rdata;
        IData/*31:0*/ Main__DOT__cpucore__DOT__pIF_br_target;
        IData/*31:0*/ Main__DOT__cpucore__DOT__pIF__DOT__pc;
        IData/*31:0*/ Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata1;
        IData/*31:0*/ Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata2;
        IData/*31:0*/ Main__DOT__cpucore__DOT__ID__DOT__imm;
        IData/*31:0*/ Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__pc;
        IData/*31:0*/ Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2;
        IData/*31:0*/ Main__DOT__cpucore__DOT__EXE__DOT__alu_io_res;
        IData/*31:0*/ Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__or_res;
        IData/*31:0*/ __VdfgTmp_h39ab4b1a__0;
        IData/*31:0*/ __VdfgTmp_h6b07fa0a__0;
        IData/*31:0*/ __Vtask_Main__DOT__dram__DOT__pmem_write__2__rdata;
        IData/*31:0*/ __Vtask_Main__DOT__dram__DOT__pmem_read__3__rdata;
        IData/*31:0*/ __Vtask_Main__DOT__iram__DOT__pmem_fetch__4__rdata;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ Main__DOT__cpucore__DOT__ID__DOT__rj_sub_rd;
        QData/*32:0*/ Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_res;
        QData/*63:0*/ Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__mul_pre;
        VlUnpacked<IData/*31:0*/, 32> Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf;
        VlUnpacked<IData/*31:0*/, 32> Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VMain__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMain___024root(VMain__Syms* symsp, const char* v__name);
    ~VMain___024root();
    VL_UNCOPYABLE(VMain___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
