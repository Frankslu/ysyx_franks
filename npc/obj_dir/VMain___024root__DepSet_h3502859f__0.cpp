// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain___024root.h"

void VMain___024root___eval_act(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_act\n"); );
}

void VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__npc_brk__DOT__npc_break_TOP(CData/*7:0*/ is_break);
void VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once__DOT__inst_exec_once_TOP(CData/*7:0*/ valid, IData/*31:0*/ inst);
void VMain___024root____Vdpiimwrap_Main__DOT__iram__DOT__vaddr_fetch_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);
void VMain___024root____Vdpiimwrap_Main__DOT__dram__DOT__vaddr_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask, IData/*31:0*/ &rdata);
void VMain___024root____Vdpiimwrap_Main__DOT__dram__DOT__vaddr_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);

VL_INLINE_OPT void VMain___024root___nba_sequent__TOP__0(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf__v0;
    __Vdlyvdim0__Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf__v0;
    __Vdlyvval__Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf__v0 = 0;
    // Body
    __Vdlyvval__Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf__v0 
        = ((1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_mem_we))
            ? ((8U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))
                ? vlSelf->Main__DOT__dram_rdata : (
                                                   (0xaU 
                                                    == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))
                                                    ? 
                                                   (0xffffU 
                                                    & vlSelf->Main__DOT__dram_rdata)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->Main__DOT__dram_rdata 
                                                                     >> 0xfU)))) 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & vlSelf->Main__DOT__dram_rdata))
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))
                                                      ? 
                                                     (0xffU 
                                                      & vlSelf->Main__DOT__dram_rdata)
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->Main__DOT__dram_rdata 
                                                                       >> 7U)))) 
                                                        << 8U) 
                                                       | (0xffU 
                                                          & vlSelf->Main__DOT__dram_rdata))
                                                       : 0xdeadU)))))
            : vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_res);
    __Vdlyvdim0__Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf__v0 
        = ((0xeU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))
            ? 1U : (0x1fU & vlSelf->Main__DOT__iram_rdata));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__valid 
        = (1U & (~ (IData)(vlSelf->reset)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__is_break 
        = ((~ (IData)(vlSelf->reset)) & (7U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst 
        = vlSelf->Main__DOT__iram_rdata;
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__pc 
        = vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc;
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[__Vdlyvdim0__Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf__v0] 
        = __Vdlyvval__Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf__v0;
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0U] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [0U];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[1U] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [1U];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[2U] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [2U];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[3U] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [3U];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[4U] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [4U];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[5U] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [5U];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[6U] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [6U];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[7U] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [7U];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[8U] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [8U];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[9U] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [9U];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0xaU] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [0xaU];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0xbU] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [0xbU];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0xcU] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [0xcU];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0xdU] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [0xdU];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0xeU] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [0xeU];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0xfU] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [0xfU];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x10U] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [0x10U];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x11U] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [0x11U];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x12U] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [0x12U];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x13U] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [0x13U];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x14U] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [0x14U];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x15U] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [0x15U];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x16U] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [0x16U];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x17U] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [0x17U];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x18U] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [0x18U];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x19U] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [0x19U];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x1aU] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [0x1aU];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x1bU] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [0x1bU];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x1cU] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [0x1cU];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x1dU] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [0x1dU];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x1eU] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [0x1eU];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x1fU] 
        = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [0x1fU];
    VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__npc_brk__DOT__npc_break_TOP(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__is_break);
    VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once__DOT__inst_exec_once_TOP(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__valid, vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst);
    if (vlSelf->reset) {
        vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc = 0x1c000000U;
    } else if ((((0U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name)) 
                 & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__rj_eq_rd)) 
                | (((~ (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__rj_eq_rd)) 
                    & (1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))) 
                   | (((2U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name)) 
                       & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__slt_res)) 
                      | (((~ (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__slt_res)) 
                          & (3U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))) 
                         | (((~ (IData)((vlSelf->Main__DOT__cpucore__DOT__ID__DOT__rj_sub_rd 
                                         >> 0x20U))) 
                             & (4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))) 
                            | (((IData)((vlSelf->Main__DOT__cpucore__DOT__ID__DOT__rj_sub_rd 
                                         >> 0x20U)) 
                                & (5U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))) 
                               | ((0xeU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name)) 
                                  | ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name)) 
                                     | (0x10U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))))))))))) {
        vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc 
            = vlSelf->Main__DOT__cpucore__DOT__pIF_br_target;
    }
    VMain___024root____Vdpiimwrap_Main__DOT__iram__DOT__vaddr_fetch_TOP(vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc, vlSelf->__Vtask_Main__DOT__iram__DOT__vaddr_fetch__5__rdata);
    vlSelf->Main__DOT__iram_rdata = vlSelf->__Vtask_Main__DOT__iram__DOT__vaddr_fetch__5__rdata;
    vlSelf->__VdfgTmp_h6b07fa0a__0 = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [(0x1fU & (vlSelf->Main__DOT__iram_rdata >> 5U))];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h2b6f7eb5__0 
        = ((2U & (vlSelf->Main__DOT__iram_rdata >> 0x1dU)) 
           | (1U & (~ (vlSelf->Main__DOT__iram_rdata 
                       >> 0x1fU))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h6def06bc__0 
        = ((2U & ((~ (vlSelf->Main__DOT__iram_rdata 
                      >> 0x1eU)) << 1U)) | (1U & (~ 
                                                  (vlSelf->Main__DOT__iram_rdata 
                                                   >> 0x1fU))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h68e26b49__0 
        = ((0U != (0x1fU & (vlSelf->Main__DOT__iram_rdata 
                            >> 5U))) & (vlSelf->__VdfgTmp_h6b07fa0a__0 
                                        >> 0x1fU));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata1 
        = ((0U == (0x1fU & (vlSelf->Main__DOT__iram_rdata 
                            >> 5U))) ? 0U : vlSelf->__VdfgTmp_h6b07fa0a__0);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_128 
        = ((8U & ((~ (vlSelf->Main__DOT__iram_rdata 
                      >> 0x1cU)) << 3U)) | ((4U & (vlSelf->Main__DOT__iram_rdata 
                                                   >> 0x1bU)) 
                                            | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h2b6f7eb5__0)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h1bd59172__0 
        = ((4U & ((~ (vlSelf->Main__DOT__iram_rdata 
                      >> 0x1dU)) << 2U)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h2b6f7eb5__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h8b89584c__0 
        = ((0x20U & ((~ (vlSelf->Main__DOT__iram_rdata 
                         >> 0x1aU)) << 5U)) | ((0x10U 
                                                & (vlSelf->Main__DOT__iram_rdata 
                                                   >> 0x17U)) 
                                               | ((8U 
                                                   & ((~ 
                                                       (vlSelf->Main__DOT__iram_rdata 
                                                        >> 0x1cU)) 
                                                      << 3U)) 
                                                  | ((4U 
                                                      & (vlSelf->Main__DOT__iram_rdata 
                                                         >> 0x1bU)) 
                                                     | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h6def06bc__0)))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h5554197b__0 
        = ((4U & ((~ (vlSelf->Main__DOT__iram_rdata 
                      >> 0x1dU)) << 2U)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h6def06bc__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_133 
        = ((vlSelf->Main__DOT__iram_rdata >> 0x1bU) 
           & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_128)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_117 
        = (IData)(((0xc000000U == (0x1c000000U & vlSelf->Main__DOT__iram_rdata)) 
                   & (7U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h1bd59172__0))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_115 
        = (IData)(((0xc000000U == (0xc000000U & vlSelf->Main__DOT__iram_rdata)) 
                   & (7U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h1bd59172__0))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_118 
        = ((8U & (vlSelf->Main__DOT__iram_rdata >> 0x19U)) 
           | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h1bd59172__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_108 
        = ((0x100U & ((~ (vlSelf->Main__DOT__iram_rdata 
                          >> 0x17U)) << 8U)) | ((0x80U 
                                                 & ((~ 
                                                     (vlSelf->Main__DOT__iram_rdata 
                                                      >> 0x18U)) 
                                                    << 7U)) 
                                                | ((0x40U 
                                                    & (vlSelf->Main__DOT__iram_rdata 
                                                       >> 0x13U)) 
                                                   | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h8b89584c__0))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_89 
        = (IData)(((0U == (0x1800000U & vlSelf->Main__DOT__iram_rdata)) 
                   & (0x3fU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h8b89584c__0))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h2efe7c47__0 
        = ((0x40U & ((~ (vlSelf->Main__DOT__iram_rdata 
                         >> 0x19U)) << 6U)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h8b89584c__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hea5ce459__0 
        = ((8U & (vlSelf->Main__DOT__iram_rdata >> 0x19U)) 
           | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h5554197b__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_he1db0bdc__0 
        = ((0x20U & ((~ (vlSelf->Main__DOT__iram_rdata 
                         >> 0x1aU)) << 5U)) | ((0x10U 
                                                & ((~ 
                                                    (vlSelf->Main__DOT__iram_rdata 
                                                     >> 0x1bU)) 
                                                   << 4U)) 
                                               | ((8U 
                                                   & ((~ 
                                                       (vlSelf->Main__DOT__iram_rdata 
                                                        >> 0x1cU)) 
                                                      << 3U)) 
                                                  | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h5554197b__0))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hd18ef98c__0 
        = (((IData)((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_118))) 
            << 1U) | (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_128)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_122 
        = ((0x10U & ((~ (vlSelf->Main__DOT__iram_rdata 
                         >> 0x1bU)) << 4U)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_118));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_101 
        = (IData)(((0x800000U == (0xc00000U & vlSelf->Main__DOT__iram_rdata)) 
                   & (0x7fU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h2efe7c47__0))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h3cb35f4c__0 
        = ((0x80U & (vlSelf->Main__DOT__iram_rdata 
                     >> 0x11U)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h2efe7c47__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h137d715b__0 
        = ((0x80U & ((~ (vlSelf->Main__DOT__iram_rdata 
                         >> 0x18U)) << 7U)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h2efe7c47__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_91 
        = ((~ (vlSelf->Main__DOT__iram_rdata >> 0x16U)) 
           & (0x7fU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h2efe7c47__0)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_92 
        = ((0x80U & ((~ (vlSelf->Main__DOT__iram_rdata 
                         >> 0x17U)) << 7U)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h2efe7c47__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_85 
        = (IData)(((0x4000000U == (0xe000000U & vlSelf->Main__DOT__iram_rdata)) 
                   & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hea5ce459__0))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_87 
        = (IData)(((0xc000000U == (0xe000000U & vlSelf->Main__DOT__iram_rdata)) 
                   & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hea5ce459__0))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_83 
        = (IData)(((0x4000000U == (0x6000000U & vlSelf->Main__DOT__iram_rdata)) 
                   & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hea5ce459__0))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hf81c125f__0 
        = ((0x40U & (vlSelf->Main__DOT__iram_rdata 
                     >> 0x13U)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_he1db0bdc__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h5a2ad26b__0 
        = ((0x100U & ((~ (vlSelf->Main__DOT__iram_rdata 
                          >> 0x17U)) << 8U)) | ((0x80U 
                                                 & ((~ 
                                                     (vlSelf->Main__DOT__iram_rdata 
                                                      >> 0x18U)) 
                                                    << 7U)) 
                                                | ((0x40U 
                                                    & ((~ 
                                                        (vlSelf->Main__DOT__iram_rdata 
                                                         >> 0x19U)) 
                                                       << 6U)) 
                                                   | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_he1db0bdc__0))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_102 
        = ((0x100U & ((~ (vlSelf->Main__DOT__iram_rdata 
                          >> 0x17U)) << 8U)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h3cb35f4c__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_95 
        = ((~ (vlSelf->Main__DOT__iram_rdata >> 0x16U)) 
           & (0xffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h137d715b__0)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_97 
        = ((~ (vlSelf->Main__DOT__iram_rdata >> 0x17U)) 
           & (0xffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h137d715b__0)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5 
        = (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_89) 
            << 2U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_91) 
                       << 1U) | (0xffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_92))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hc442db33__0 
        = ((0x80U & ((~ (vlSelf->Main__DOT__iram_rdata 
                         >> 0x18U)) << 7U)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hf81c125f__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hf55cf174__0 
        = ((0x80U & (vlSelf->Main__DOT__iram_rdata 
                     >> 0x11U)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hf81c125f__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hb79c9193__0 
        = ((0x800U & ((~ (vlSelf->Main__DOT__iram_rdata 
                          >> 0x14U)) << 0xbU)) | ((0x400U 
                                                   & ((~ 
                                                       (vlSelf->Main__DOT__iram_rdata 
                                                        >> 0x15U)) 
                                                      << 0xaU)) 
                                                  | ((0x200U 
                                                      & (vlSelf->Main__DOT__iram_rdata 
                                                         >> 0xdU)) 
                                                     | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h5a2ad26b__0))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h20fcf308__0 
        = ((0x200U & ((~ (vlSelf->Main__DOT__iram_rdata 
                          >> 0x16U)) << 9U)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h5a2ad26b__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_105 
        = ((vlSelf->Main__DOT__iram_rdata >> 0x16U) 
           & (0x1ffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_102)));
    vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_mem_we 
        = ((2U & ((~ (IData)((0U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5)))) 
                  << 1U)) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_95) 
                             | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_97)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_63 
        = ((~ (vlSelf->Main__DOT__iram_rdata >> 0x16U)) 
           & (0xffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hc442db33__0)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_64 
        = ((0x100U & ((~ (vlSelf->Main__DOT__iram_rdata 
                          >> 0x17U)) << 8U)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hc442db33__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_76 
        = ((0x100U & (vlSelf->Main__DOT__iram_rdata 
                      >> 0xfU)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hf55cf174__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_55 
        = (IData)(((0x8000U == (0x78000U & vlSelf->Main__DOT__iram_rdata)) 
                   & (0xfffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hb79c9193__0))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h92bfeef8__0 
        = ((0x1000U & ((~ (vlSelf->Main__DOT__iram_rdata 
                           >> 0x13U)) << 0xcU)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hb79c9193__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hbb50ecb2__0 
        = ((0x800U & ((~ (vlSelf->Main__DOT__iram_rdata 
                          >> 0x14U)) << 0xbU)) | ((0x400U 
                                                   & (vlSelf->Main__DOT__iram_rdata 
                                                      >> 0xbU)) 
                                                  | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h20fcf308__0)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h924e2e84__0 
        = ((0x800U & (vlSelf->Main__DOT__iram_rdata 
                      >> 9U)) | ((0x400U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                                >> 0x15U)) 
                                            << 0xaU)) 
                                 | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h20fcf308__0)));
    vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name 
        = ((0x10U & ((~ ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_89) 
                         | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_91) 
                            | ((0xffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_92)) 
                               | (0U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hd18ef98c__0)))))) 
                     << 4U)) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_101) 
                                  | ((0x1ffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_102)) 
                                     | ((0x1ffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_108)) 
                                        | (0x1fU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_122))))) 
                                 << 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_97) 
                                             | (((vlSelf->Main__DOT__iram_rdata 
                                                  >> 0x16U) 
                                                 & (0xffU 
                                                    == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_92))) 
                                                | ((IData)(
                                                           ((0x800000U 
                                                             == 
                                                             (0xc00000U 
                                                              & vlSelf->Main__DOT__iram_rdata)) 
                                                            & (0xffU 
                                                               == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h3cb35f4c__0)))) 
                                                   | ((0x1fU 
                                                       == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_122)) 
                                                      | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_133))))) 
                                            << 2U) 
                                           | ((2U & 
                                               ((~ 
                                                 ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_87) 
                                                  | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_101) 
                                                     | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_105) 
                                                        | (((~ 
                                                             (vlSelf->Main__DOT__iram_rdata 
                                                              >> 0x16U)) 
                                                            & (0x1ffU 
                                                               == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_108))) 
                                                           | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_115) 
                                                              | (((vlSelf->Main__DOT__iram_rdata 
                                                                   >> 0x1bU) 
                                                                  & (0xfU 
                                                                     == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_118))) 
                                                                 | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_133)))))))) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_95) 
                                                     | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_105) 
                                                        | (((vlSelf->Main__DOT__iram_rdata 
                                                             >> 0x16U) 
                                                            & (0x1ffU 
                                                               == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_108))) 
                                                           | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_117) 
                                                              | ((~ 
                                                                  (vlSelf->Main__DOT__iram_rdata 
                                                                   >> 0x1aU)) 
                                                                 & ((0xfU 
                                                                     == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_118)) 
                                                                    | (0xfU 
                                                                       == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_128))))))))))))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_79 
        = ((~ (vlSelf->Main__DOT__iram_rdata >> 0x16U)) 
           & (0x1ffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_76)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_57 
        = (IData)(((0x8000U == (0x38000U & vlSelf->Main__DOT__iram_rdata)) 
                   & (0x1fffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h92bfeef8__0))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_53 
        = (IData)(((0xa0000U == (0xf8000U & vlSelf->Main__DOT__iram_rdata)) 
                   & (0xfffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hbb50ecb2__0))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_46 
        = ((0x4000U & ((~ (vlSelf->Main__DOT__iram_rdata 
                           >> 0x11U)) << 0xeU)) | (
                                                   (0x2000U 
                                                    & ((~ 
                                                        (vlSelf->Main__DOT__iram_rdata 
                                                         >> 0x12U)) 
                                                       << 0xdU)) 
                                                   | ((0x1000U 
                                                       & ((~ 
                                                           (vlSelf->Main__DOT__iram_rdata 
                                                            >> 0x13U)) 
                                                          << 0xcU)) 
                                                      | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hbb50ecb2__0))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h2a536b4b__0 
        = ((0x1000U & (vlSelf->Main__DOT__iram_rdata 
                       >> 7U)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h924e2e84__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h138f6fae__0 
        = ((0x2000U & ((~ (vlSelf->Main__DOT__iram_rdata 
                           >> 0x11U)) << 0xdU)) | (
                                                   (0x1000U 
                                                    & (vlSelf->Main__DOT__iram_rdata 
                                                       >> 6U)) 
                                                   | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h924e2e84__0)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h75ee0a09__0 
        = ((0x1000U & ((~ (vlSelf->Main__DOT__iram_rdata 
                           >> 0x13U)) << 0xcU)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h924e2e84__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hbb8003c0__0 
        = ((0x4000U & ((~ (vlSelf->Main__DOT__iram_rdata 
                           >> 0x11U)) << 0xeU)) | (
                                                   (0x2000U 
                                                    & (vlSelf->Main__DOT__iram_rdata 
                                                       >> 5U)) 
                                                   | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h2a536b4b__0)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_17 
        = ((~ (vlSelf->Main__DOT__iram_rdata >> 0xfU)) 
           & (0x3fffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h138f6fae__0)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_19 
        = ((~ (vlSelf->Main__DOT__iram_rdata >> 0x10U)) 
           & (0x3fffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h138f6fae__0)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h3ae392be__0 
        = ((0x2000U & ((~ (vlSelf->Main__DOT__iram_rdata 
                           >> 0x11U)) << 0xdU)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h75ee0a09__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h52afcb45__0 
        = ((0x2000U & ((~ (vlSelf->Main__DOT__iram_rdata 
                           >> 0x12U)) << 0xdU)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h75ee0a09__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h3b60932f__0 
        = ((0x2000U & (vlSelf->Main__DOT__iram_rdata 
                       >> 5U)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h75ee0a09__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_41 
        = ((~ (vlSelf->Main__DOT__iram_rdata >> 0xfU)) 
           & (0x7fffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hbb8003c0__0)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_42 
        = ((0x8000U & ((~ (vlSelf->Main__DOT__iram_rdata 
                           >> 0x10U)) << 0xfU)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hbb8003c0__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_10 
        = ((0x8000U & ((~ (vlSelf->Main__DOT__iram_rdata 
                           >> 0x10U)) << 0xfU)) | (
                                                   (0x4000U 
                                                    & (vlSelf->Main__DOT__iram_rdata 
                                                       >> 3U)) 
                                                   | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h52afcb45__0)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_32 
        = ((0x8000U & (vlSelf->Main__DOT__iram_rdata 
                       >> 1U)) | ((0x4000U & (vlSelf->Main__DOT__iram_rdata 
                                              >> 3U)) 
                                  | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h3b60932f__0)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hf06ea362__0 
        = ((0x4000U & ((~ (vlSelf->Main__DOT__iram_rdata 
                           >> 0x11U)) << 0xeU)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h3b60932f__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_26 
        = ((0x4000U & (vlSelf->Main__DOT__iram_rdata 
                       >> 2U)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h3b60932f__0));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op 
        = (((IData)((0x7fffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_46))) 
            << 4U) | (((((vlSelf->Main__DOT__iram_rdata 
                          >> 0xfU) & (0x7fffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_26))) 
                        | ((0xffffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_32)) 
                           | ((IData)(((0U == (0x38000U 
                                               & vlSelf->Main__DOT__iram_rdata)) 
                                       & (0x1fffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h2a536b4b__0)))) 
                              | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_41) 
                                 | ((0xffffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_42)) 
                                    | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_55) 
                                       | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_57) 
                                          | (((vlSelf->Main__DOT__iram_rdata 
                                               >> 0x16U) 
                                              & (0x1ffU 
                                                 == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_76))) 
                                             | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_85))))))))) 
                       << 3U) | (((((vlSelf->Main__DOT__iram_rdata 
                                     >> 0xfU) & (0xffffU 
                                                 == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_10))) 
                                   | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_17) 
                                      | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_19) 
                                         | ((IData)(
                                                    ((0x400000U 
                                                      == 
                                                      (0xc00000U 
                                                       & vlSelf->Main__DOT__iram_rdata)) 
                                                     & (0x7fU 
                                                        == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hf81c125f__0)))) 
                                            | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_79) 
                                               | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_85)))))) 
                                  << 2U) | ((((IData)(
                                                      ((0x10000U 
                                                        == 
                                                        (0x18000U 
                                                         & vlSelf->Main__DOT__iram_rdata)) 
                                                       & (0x3fffU 
                                                          == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h3ae392be__0)))) 
                                              | (((~ 
                                                   (vlSelf->Main__DOT__iram_rdata 
                                                    >> 0xfU)) 
                                                  & (0xffffU 
                                                     == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_10))) 
                                                 | (((~ 
                                                      (vlSelf->Main__DOT__iram_rdata 
                                                       >> 0xfU)) 
                                                     & (0x7fffU 
                                                        == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hf06ea362__0))) 
                                                    | ((IData)(
                                                               ((0x10000U 
                                                                 == 
                                                                 (0x18000U 
                                                                  & vlSelf->Main__DOT__iram_rdata)) 
                                                                & (0x3fffU 
                                                                   == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h138f6fae__0)))) 
                                                       | (((vlSelf->Main__DOT__iram_rdata 
                                                            >> 0xfU) 
                                                           & (0xffffU 
                                                              == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_32))) 
                                                          | ((IData)(
                                                                     ((0U 
                                                                       == 
                                                                       (0x78000U 
                                                                        & vlSelf->Main__DOT__iram_rdata)) 
                                                                      & (0x1fffU 
                                                                         == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h2a536b4b__0)))) 
                                                             | (((vlSelf->Main__DOT__iram_rdata 
                                                                  >> 0xfU) 
                                                                 & (0xffffU 
                                                                    == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_42))) 
                                                                | (((vlSelf->Main__DOT__iram_rdata 
                                                                     >> 0xfU) 
                                                                    & (0x7fffU 
                                                                       == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_46))) 
                                                                   | ((IData)(
                                                                              ((0x48000U 
                                                                                == 
                                                                                (0x78000U 
                                                                                & vlSelf->Main__DOT__iram_rdata)) 
                                                                               & (0x1fffU 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h92bfeef8__0)))) 
                                                                      | ((IData)(
                                                                                ((0x88000U 
                                                                                == 
                                                                                (0xf8000U 
                                                                                & vlSelf->Main__DOT__iram_rdata)) 
                                                                                & (0xfffU 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hb79c9193__0)))) 
                                                                         | (((~ 
                                                                              (vlSelf->Main__DOT__iram_rdata 
                                                                               >> 0x16U)) 
                                                                             & (0x1ffU 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_64))) 
                                                                            | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_79)))))))))))) 
                                             << 1U) 
                                            | ((IData)(
                                                       ((0U 
                                                         == 
                                                         (0x78000U 
                                                          & vlSelf->Main__DOT__iram_rdata)) 
                                                        & (0xfffU 
                                                           == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h924e2e84__0)))) 
                                               | ((IData)(
                                                          ((0U 
                                                            == 
                                                            (0x18000U 
                                                             & vlSelf->Main__DOT__iram_rdata)) 
                                                           & (0x3fffU 
                                                              == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h52afcb45__0)))) 
                                                  | ((IData)(
                                                             ((0x8000U 
                                                               == 
                                                               (0x18000U 
                                                                & vlSelf->Main__DOT__iram_rdata)) 
                                                              & (0x7fffU 
                                                                 == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hf06ea362__0)))) 
                                                     | (((~ 
                                                          (vlSelf->Main__DOT__iram_rdata 
                                                           >> 0xfU)) 
                                                         & (0x7fffU 
                                                            == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_26))) 
                                                        | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_41) 
                                                           | (((vlSelf->Main__DOT__iram_rdata 
                                                                >> 0x10U) 
                                                               & (0x7fffU 
                                                                  == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_46))) 
                                                              | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_55) 
                                                                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_63) 
                                                                    | ((IData)(
                                                                               ((0x800000U 
                                                                                == 
                                                                                (0xc00000U 
                                                                                & vlSelf->Main__DOT__iram_rdata)) 
                                                                                & (0x7fU 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hf81c125f__0)))) 
                                                                       | ((IData)(
                                                                                ((0x400000U 
                                                                                == 
                                                                                (0xc00000U 
                                                                                & vlSelf->Main__DOT__iram_rdata)) 
                                                                                & (0xffU 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hf55cf174__0)))) 
                                                                          | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_87) 
                                                                             | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_89) 
                                                                                | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_91) 
                                                                                | ((0xffU 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_92)) 
                                                                                | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_117) 
                                                                                | ((vlSelf->Main__DOT__iram_rdata 
                                                                                >> 0x1aU) 
                                                                                & (0x1fU 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_122))))))))))))))))))))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type 
        = (((((vlSelf->Main__DOT__iram_rdata >> 0x16U) 
              & (0xffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hf55cf174__0))) 
             | (0x1ffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_76))) 
            << 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_53) 
                        | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_83) 
                           | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_115) 
                              | (0U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hd18ef98c__0))))) 
                       << 2U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_53) 
                                   | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_55) 
                                      | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_57) 
                                         | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_63) 
                                            | ((0x1ffU 
                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_64)) 
                                               | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_89) 
                                                  | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_91) 
                                                     | ((0xffU 
                                                         == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_92)) 
                                                        | (0x1fU 
                                                           == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_122)))))))))) 
                                  << 1U) | ((IData)(
                                                    ((0U 
                                                      == 
                                                      (0x38000U 
                                                       & vlSelf->Main__DOT__iram_rdata)) 
                                                     & (0xfffU 
                                                        == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h924e2e84__0)))) 
                                            | (((~ 
                                                 (vlSelf->Main__DOT__iram_rdata 
                                                  >> 0xfU)) 
                                                & (0x3fffU 
                                                   == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h3ae392be__0))) 
                                               | ((0xffffU 
                                                   == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_10)) 
                                                  | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_17) 
                                                     | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_19) 
                                                        | ((0x7fffU 
                                                            == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_26)) 
                                                           | ((0x7fffU 
                                                               == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_46)) 
                                                              | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_53) 
                                                                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_63) 
                                                                    | ((0x1ffU 
                                                                        == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_64)) 
                                                                       | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_83) 
                                                                          | (0U 
                                                                             != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5))))))))))))))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_sub 
        = ((2U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op)) 
           | ((3U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op)) 
              | (4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__imm = 
        ((2U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))
          ? (0x1fU & (vlSelf->Main__DOT__iram_rdata 
                      >> 0xaU)) : ((3U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->Main__DOT__iram_rdata 
                                                       >> 0x15U)))) 
                                        << 0xcU) | 
                                       (0xfffU & (vlSelf->Main__DOT__iram_rdata 
                                                  >> 0xaU)))
                                    : ((8U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))
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
                                                 ? 4U
                                                 : 0U))))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_raddr2 
        = (0x1fU & ((((0x10U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name)) 
                      & (4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))) 
                     | (0U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_mem_we)))
                     ? (vlSelf->Main__DOT__iram_rdata 
                        >> 0xaU) : vlSelf->Main__DOT__iram_rdata));
    vlSelf->Main__DOT__cpucore__DOT__pIF_br_target 
        = (((0x10U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))
             ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata1
             : vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc) 
           + vlSelf->Main__DOT__cpucore__DOT__ID__DOT__imm);
    vlSelf->__VdfgTmp_h39ab4b1a__0 = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_raddr2];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h8d80ac40__0 
        = ((0U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_raddr2)) 
           & (vlSelf->__VdfgTmp_h39ab4b1a__0 >> 0x1fU));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata2 
        = ((0U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_raddr2))
            ? 0U : vlSelf->__VdfgTmp_h39ab4b1a__0);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__rj_eq_rd 
        = (vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata1 
           == vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata2);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__rj_sub_rd 
        = (0x1ffffffffULL & (1ULL + ((QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata1)) 
                                     + (QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata2)))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2 
        = ((1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata2
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__imm);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__slt_res 
        = (1U & (((~ (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h8d80ac40__0)) 
                  & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h68e26b49__0)) 
                 | ((~ ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h68e26b49__0) 
                        ^ (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h8d80ac40__0))) 
                    & (IData)((vlSelf->Main__DOT__cpucore__DOT__ID__DOT__rj_sub_rd 
                               >> 0x1fU)))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__or_res 
        = (vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc 
           | vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2);
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__mul_pre 
        = ((QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc)) 
           * (QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_res 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc)) 
                             + ((QData)((IData)(((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_sub)
                                                  ? 
                                                 (~ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)
                                                  : vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2))) 
                                + (QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_sub)))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_res 
        = (IData)((((1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op)) 
                    | (2U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op)))
                    ? vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_res
                    : ((3U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                        ? (QData)((IData)((1U & (((~ 
                                                   (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2 
                                                    >> 0x1fU)) 
                                                  & (vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc 
                                                     >> 0x1fU)) 
                                                 | ((~ 
                                                     ((vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc 
                                                       ^ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2) 
                                                      >> 0x1fU)) 
                                                    & (IData)(
                                                              (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_res 
                                                               >> 0x1fU)))))))
                        : ((4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                            ? (QData)((IData)((1U & 
                                               (~ (IData)(
                                                          (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_res 
                                                           >> 0x20U))))))
                            : ((5U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                ? (QData)((IData)((vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc 
                                                   & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)))
                                : ((7U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                    ? (QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__or_res))
                                    : ((6U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                        ? (QData)((IData)(
                                                          (~ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__or_res)))
                                        : ((8U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                            ? (QData)((IData)(
                                                              (vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc 
                                                               ^ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)))
                                            : ((9U 
                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                                ? (0x7fffffffffffffffULL 
                                                   & ((QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc)) 
                                                      << 
                                                      (0x1fU 
                                                       & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)))
                                                : (
                                                   ((0xbU 
                                                     == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op)) 
                                                    | (0xaU 
                                                       == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op)))
                                                    ? 
                                                   ((((QData)((IData)(
                                                                      (((vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc 
                                                                         >> 0x1fU) 
                                                                        & (0xbU 
                                                                           == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op)))
                                                                        ? 0xffffffffU
                                                                        : 0U))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc))) 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2))
                                                    : (QData)((IData)(
                                                                      ((0xcU 
                                                                        == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                                                        ? vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2
                                                                        : 
                                                                       ((0xdU 
                                                                         == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                                                         ? (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__mul_pre)
                                                                         : 
                                                                        ((0xeU 
                                                                          == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                                                          ? (IData)(
                                                                                (VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc), 
                                                                                VL_EXTENDS_QI(64,32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)) 
                                                                                >> 0x20U))
                                                                          : 
                                                                         ((0xfU 
                                                                           == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                                                           ? (IData)(
                                                                                (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__mul_pre 
                                                                                >> 0x20U))
                                                                           : 
                                                                          ((0x10U 
                                                                            == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                                                            ? (IData)(
                                                                                (0x1ffffffffULL 
                                                                                & VL_DIVS_QQQ(33, 
                                                                                (0x1ffffffffULL 
                                                                                & VL_EXTENDS_QI(33,32, vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc)), 
                                                                                (0x1ffffffffULL 
                                                                                & VL_EXTENDS_QI(33,32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)))))
                                                                            : 
                                                                           ((0x12U 
                                                                             == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                                                             ? 
                                                                            VL_MODDIVS_III(32, vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)
                                                                             : 
                                                                            ((0x11U 
                                                                              == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                                                              ? 
                                                                             VL_DIV_III(32, vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)
                                                                              : 
                                                                             ((0x13U 
                                                                               == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                                                               ? 
                                                                              VL_MODDIV_III(32, vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)
                                                                               : 0xdeadbeefU))))))))))))))))))));
    if ((2U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_mem_we))) {
        if ((0U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_mem_we))) {
            VMain___024root____Vdpiimwrap_Main__DOT__dram__DOT__vaddr_write_TOP(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_res, vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata2, 
                                                                                ((0xdU 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))
                                                                                 ? 4U
                                                                                 : 
                                                                                ((0xcU 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((0xbU 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))
                                                                                 ? 1U
                                                                                 : 0xdU))), vlSelf->__Vtask_Main__DOT__dram__DOT__vaddr_write__3__rdata);
            vlSelf->Main__DOT__dram_rdata = vlSelf->__Vtask_Main__DOT__dram__DOT__vaddr_write__3__rdata;
        } else {
            VMain___024root____Vdpiimwrap_Main__DOT__dram__DOT__vaddr_read_TOP(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_res, vlSelf->__Vtask_Main__DOT__dram__DOT__vaddr_read__4__rdata);
            vlSelf->Main__DOT__dram_rdata = vlSelf->__Vtask_Main__DOT__dram__DOT__vaddr_read__4__rdata;
        }
    }
}

void VMain___024root___eval_nba(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VMain___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VMain___024root___eval_triggers__act(VMain___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VMain___024root___dump_triggers__act(VMain___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMain___024root___dump_triggers__nba(VMain___024root* vlSelf);
#endif  // VL_DEBUG

void VMain___024root___eval(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VMain___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VMain___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/Main.v", 1392, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VMain___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VMain___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/Main.v", 1392, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VMain___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VMain___024root___eval_debug_assertions(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
