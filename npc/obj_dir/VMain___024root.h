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
        CData/*5:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_82;
        CData/*6:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_84;
        CData/*6:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_86;
        CData/*7:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_88;
        CData/*7:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_90;
        CData/*7:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_92;
        CData/*4:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_114;
        CData/*5:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_116;
        CData/*3:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_118;
        CData/*4:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_122;
        CData/*3:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_128;
        CData/*4:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_132;
        CData/*5:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_2;
        CData/*6:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_4;
        CData/*4:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_6;
        CData/*3:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_8;
        CData/*2:0*/ Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5;
        CData/*4:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_10;
        CData/*1:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_12;
        CData/*4:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_20;
        CData/*1:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_22;
        CData/*5:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_28;
        CData/*3:0*/ Main__DOT__cpucore__DOT__ID__DOT__inst_type;
        CData/*1:0*/ Main__DOT__cpucore__DOT__ID__DOT__mem_we;
        CData/*4:0*/ Main__DOT__cpucore__DOT__ID__DOT__inst_name;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT__rj_eq_rd;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT__slt_res;
        CData/*5:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_he1db0bdc__0;
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
        CData/*1:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h360c0578__0;
        CData/*1:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hd18ef98c__0;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h8d80ac40__0;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h68e26b49__0;
        CData/*1:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h6def06bc__0;
        CData/*2:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h5554197b__0;
        CData/*4:0*/ Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_io_rdata2_MPORT_addr;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__is_break;
        CData/*0:0*/ Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__valid;
        CData/*4:0*/ Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op;
        CData/*0:0*/ Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_sub;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __VactContinue;
        SData/*14:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T;
        SData/*14:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_4;
        SData/*15:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_10;
        SData/*14:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_16;
        SData/*14:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_18;
        SData/*14:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_26;
        SData/*15:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_32;
        SData/*15:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_40;
        SData/*15:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_42;
        SData/*14:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_46;
        SData/*15:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_54;
    };
    struct {
        SData/*15:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_56;
        SData/*8:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_62;
        SData/*8:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_64;
        SData/*8:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_70;
        SData/*8:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_72;
        SData/*8:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_76;
        SData/*9:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_78;
        SData/*8:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_94;
        SData/*8:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_96;
        SData/*8:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_100;
        SData/*8:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_102;
        SData/*9:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_104;
        SData/*8:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_108;
        SData/*13:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_16;
        SData/*8:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_18;
        SData/*15:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_24;
        SData/*11:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_26;
        SData/*8:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_30;
        SData/*11:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h924e2e84__0;
        SData/*13:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h3ae392be__0;
        SData/*13:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h52afcb45__0;
        SData/*13:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h138f6fae__0;
        SData/*14:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hf06ea362__0;
        SData/*13:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h3b60932f__0;
        SData/*12:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h2a536b4b__0;
        SData/*14:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hbb8003c0__0;
        SData/*11:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hbb50ecb2__0;
        SData/*11:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hb79c9193__0;
        SData/*12:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h92bfeef8__0;
        SData/*8:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h5a2ad26b__0;
        SData/*9:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h20fcf308__0;
        SData/*12:0*/ Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h75ee0a09__0;
        IData/*31:0*/ Main__DOT__dram_rdata;
        IData/*31:0*/ Main__DOT__iram_rdata;
        IData/*31:0*/ Main__DOT__cpucore__DOT__pIF__DOT__pc;
        IData/*31:0*/ Main__DOT__cpucore__DOT__pIF__DOT__snpc;
        IData/*31:0*/ Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata1;
        IData/*31:0*/ Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata2;
        IData/*16:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_52;
        IData/*16:0*/ Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T;
        IData/*31:0*/ Main__DOT__cpucore__DOT__ID__DOT__imm;
        IData/*31:0*/ Main__DOT__cpucore__DOT__ID__DOT___br_target_T_1;
        IData/*31:0*/ Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_io_rdata1_MPORT_data;
        IData/*31:0*/ Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_io_rdata2_MPORT_data;
        IData/*31:0*/ Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__pc;
        IData/*31:0*/ Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst;
        IData/*31:0*/ Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2;
        IData/*31:0*/ Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__or_res;
        IData/*31:0*/ __Vtask_Main__DOT__dram__DOT__vaddr_write__3__rdata;
        IData/*31:0*/ __Vtask_Main__DOT__dram__DOT__vaddr_read__4__rdata;
        IData/*31:0*/ __Vtask_Main__DOT__iram__DOT__vaddr_fetch__5__rdata;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_T;
        QData/*32:0*/ Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_res;
        QData/*63:0*/ Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__mul_pre;
        QData/*63:0*/ Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___io_res_T_11;
        QData/*63:0*/ Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___io_res_T_18;
        VlUnpacked<IData/*31:0*/, 32> Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf;
        VlUnpacked<IData/*31:0*/, 32> Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
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
