// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain___024root.h"

void VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once__DOT__inst_exec_once_TOP(CData/*7:0*/ valid, CData/*7:0*/ inv, IData/*31:0*/ inst, IData/*31:0*/ pc);

VL_INLINE_OPT void VMain___024root___ico_sequent__TOP__0(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___ico_sequent__TOP__0\n"); );
    // Body
    VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once__DOT__inst_exec_once_TOP(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->reset))), 
                                                                                (0U 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type)), vlSelf->Main__DOT__iram_rdata, 
                                                                                ((IData)(vlSelf->Main__DOT__cpucore__DOT__pIF_br_taken)
                                                                                 ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fout_s
                                                                                 : 
                                                                                (((0x14U 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name)) 
                                                                                | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once_ex))
                                                                                 ? 
                                                                                ((0x14U 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))
                                                                                 ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT__era
                                                                                 : vlSelf->Main__DOT__cpucore__DOT__csr__DOT__eentry)
                                                                                 : 
                                                                                ((IData)(4U) 
                                                                                + vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc))));
}

void VMain___024root___eval_ico(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VMain___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VMain___024root___eval_act(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_act\n"); );
}

void VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once__DOT__record_exception_TOP(CData/*7:0*/ ex, CData/*7:0*/ ertn, IData/*31:0*/ ecode, IData/*31:0*/ esubcode, IData/*31:0*/ pc);
void VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once__DOT__record_syscall_TOP(CData/*7:0*/ ex, IData/*31:0*/ pc);
void VMain___024root____Vdpiimwrap_Main__DOT__iram__DOT__vaddr_fetch_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);
void VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__npc_brk__DOT__npc_break_TOP(CData/*7:0*/ is_break);
void VMain___024root____Vdpiimwrap_Main__DOT__dram__DOT__vaddr_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask, IData/*31:0*/ &rdata);
void VMain___024root____Vdpiimwrap_Main__DOT__dram__DOT__vaddr_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);

VL_INLINE_OPT void VMain___024root___nba_sequent__TOP__0(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__Main__DOT__cpucore__DOT__pIF__DOT__pc;
    __Vdly__Main__DOT__cpucore__DOT__pIF__DOT__pc = 0;
    CData/*4:0*/ __Vdlyvdim0__Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf__v0;
    __Vdlyvdim0__Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf__v0;
    __Vdlyvval__Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf__v0;
    __Vdlyvset__Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf__v0 = 0;
    // Body
    __Vdlyvset__Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf__v0 = 0U;
    VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once__DOT__record_exception_TOP(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once_ex, 
                                                                                (0x14U 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name)), 
                                                                                ((0x13U 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))
                                                                                 ? 0xbU
                                                                                 : 
                                                                                ((0x12U 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))
                                                                                 ? 0xcU
                                                                                 : 0U)), 0U, vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc);
    VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once__DOT__record_syscall_TOP(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once_ex, vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc);
    __Vdly__Main__DOT__cpucore__DOT__pIF__DOT__pc = vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc;
    if (vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en) {
        __Vdlyvval__Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf__v0 
            = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data;
        __Vdlyvset__Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf__v0 = 1U;
        __Vdlyvdim0__Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf__v0 
            = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr;
    }
    if (vlSelf->reset) {
        __Vdly__Main__DOT__cpucore__DOT__pIF__DOT__pc = 0x1bfffffcU;
        vlSelf->Main__DOT__cpucore__DOT__csr__DOT__estat = 0U;
        vlSelf->Main__DOT__cpucore__DOT__csr__DOT__prmd = 0U;
        vlSelf->Main__DOT__cpucore__DOT__csr__DOT__crmd = 8U;
        vlSelf->Main__DOT__cpucore__DOT__csr__DOT__eentry = 0U;
        vlSelf->Main__DOT__cpucore__DOT__csr__DOT__era = 0U;
    } else {
        __Vdly__Main__DOT__cpucore__DOT__pIF__DOT__pc 
            = ((IData)(vlSelf->Main__DOT__cpucore__DOT__pIF_br_taken)
                ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fout_s
                : (((0x14U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name)) 
                    | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once_ex))
                    ? ((0x14U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))
                        ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT__era
                        : vlSelf->Main__DOT__cpucore__DOT__csr__DOT__eentry)
                    : vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__snpc));
        if ((IData)(((0x1400U == (0xfffc00U & vlSelf->Main__DOT__iram_rdata)) 
                     & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_csr_we)))) {
            vlSelf->Main__DOT__cpucore__DOT__csr__DOT__estat 
                = vlSelf->Main__DOT__cpucore__DOT__csr__DOT___estat_T_3;
        } else if (vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once_ex) {
            vlSelf->Main__DOT__cpucore__DOT__csr__DOT__estat 
                = vlSelf->Main__DOT__cpucore__DOT__csr__DOT___estat_T_5;
        }
        if ((IData)(((0x400U == (0xfffc00U & vlSelf->Main__DOT__iram_rdata)) 
                     & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_csr_we)))) {
            vlSelf->Main__DOT__cpucore__DOT__csr__DOT__prmd 
                = vlSelf->Main__DOT__cpucore__DOT__csr__DOT___prmd_T_3;
        } else if (vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once_ex) {
            vlSelf->Main__DOT__cpucore__DOT__csr__DOT__prmd 
                = vlSelf->Main__DOT__cpucore__DOT__csr__DOT___prmd_T_6;
        }
        if ((IData)(((0U == (0xfffc00U & vlSelf->Main__DOT__iram_rdata)) 
                     & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_csr_we)))) {
            vlSelf->Main__DOT__cpucore__DOT__csr__DOT__crmd 
                = vlSelf->Main__DOT__cpucore__DOT__csr__DOT___crmd_T_3;
        } else if ((0x14U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))) {
            vlSelf->Main__DOT__cpucore__DOT__csr__DOT__crmd 
                = vlSelf->Main__DOT__cpucore__DOT__csr__DOT___crmd_T_6;
        } else if (vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once_ex) {
            vlSelf->Main__DOT__cpucore__DOT__csr__DOT__crmd 
                = (vlSelf->Main__DOT__cpucore__DOT__csr__DOT____VdfgTmp_hf9f99d99__0 
                   << 3U);
        }
        if ((IData)(((0x3000U == (0xfffc00U & vlSelf->Main__DOT__iram_rdata)) 
                     & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_csr_we)))) {
            vlSelf->Main__DOT__cpucore__DOT__csr__DOT__eentry 
                = vlSelf->Main__DOT__cpucore__DOT__csr__DOT___eentry_T_3;
        }
        if ((IData)(((0x1800U == (0xfffc00U & vlSelf->Main__DOT__iram_rdata)) 
                     & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_csr_we)))) {
            vlSelf->Main__DOT__cpucore__DOT__csr__DOT__era 
                = vlSelf->Main__DOT__cpucore__DOT__csr__DOT___era_T_3;
        } else if (vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once_ex) {
            vlSelf->Main__DOT__cpucore__DOT__csr__DOT__era 
                = vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc;
        }
    }
    vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__inst_sram_en_REG 
        = (1U & (~ (IData)(vlSelf->reset)));
    if (__Vdlyvset__Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf__v0) {
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[__Vdlyvdim0__Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf__v0] 
            = __Vdlyvval__Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf__v0;
    }
    vlSelf->Main__DOT__cpucore__DOT__csr__DOT____VdfgTmp_hf9f99d99__0 
        = (vlSelf->Main__DOT__cpucore__DOT__csr__DOT__crmd 
           >> 3U);
    vlSelf->Main__DOT__cpucore__DOT__csr__DOT___prmd_T_6 
        = ((0xfffffff8U & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__prmd) 
           | (7U & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__crmd));
    vlSelf->Main__DOT__cpucore__DOT__csr__DOT___crmd_T_6 
        = ((0xfffffff8U & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__crmd) 
           | (7U & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__prmd));
    vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc = __Vdly__Main__DOT__cpucore__DOT__pIF__DOT__pc;
    vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__snpc 
        = ((IData)(4U) + vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc);
    if (vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__inst_sram_en_REG) {
        VMain___024root____Vdpiimwrap_Main__DOT__iram__DOT__vaddr_fetch_TOP(vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc, vlSelf->__Vtask_Main__DOT__iram__DOT__vaddr_fetch__8__rdata);
        vlSelf->Main__DOT__iram_rdata = vlSelf->__Vtask_Main__DOT__iram__DOT__vaddr_fetch__8__rdata;
    }
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__imm26 
        = (((- (IData)((1U & (vlSelf->Main__DOT__iram_rdata 
                              >> 9U)))) << 0x1cU) | 
           ((0xffc0000U & (vlSelf->Main__DOT__iram_rdata 
                           << 0x12U)) | (0x3fffcU & 
                                         (vlSelf->Main__DOT__iram_rdata 
                                          >> 8U))));
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
    vlSelf->Main__DOT__cpucore__DOT__csr__DOT___crmd_T 
        = ((1U == (0x1fU & (vlSelf->Main__DOT__iram_rdata 
                            >> 5U))) ? 0U : ((0U == 
                                              (0x1fU 
                                               & (vlSelf->Main__DOT__iram_rdata 
                                                  >> 5U)))
                                              ? 0xffffffffU
                                              : (~ vlSelf->__VdfgTmp_h6b07fa0a__0)));
    if ((0U == (0x1fU & (vlSelf->Main__DOT__iram_rdata 
                         >> 5U)))) {
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT____VdfgTmp_h80eb44dd__0 = 0U;
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT____VdfgTmp_h805c553a__0 = 0U;
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT____VdfgTmp_h800aa055__0 = 0U;
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT____VdfgTmp_h80fabba5__0 = 0U;
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT____VdfgTmp_h800aa055__0 = 0U;
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT____VdfgTmp_h80eb44dd__0 = 0U;
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT____VdfgTmp_h805c553a__0 = 0U;
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT____VdfgTmp_h80fabba5__0 = 0U;
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata1 = 0U;
    } else {
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT____VdfgTmp_h80eb44dd__0 
            = (0xfU & (vlSelf->__VdfgTmp_h6b07fa0a__0 
                       >> 4U));
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT____VdfgTmp_h805c553a__0 
            = (0xfU & vlSelf->__VdfgTmp_h6b07fa0a__0);
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT____VdfgTmp_h800aa055__0 
            = (0xfU & (vlSelf->__VdfgTmp_h6b07fa0a__0 
                       >> 0xcU));
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT____VdfgTmp_h80fabba5__0 
            = (0xfU & (vlSelf->__VdfgTmp_h6b07fa0a__0 
                       >> 8U));
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT____VdfgTmp_h800aa055__0 
            = (vlSelf->__VdfgTmp_h6b07fa0a__0 >> 0x1cU);
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT____VdfgTmp_h80eb44dd__0 
            = (0xfU & (vlSelf->__VdfgTmp_h6b07fa0a__0 
                       >> 0x14U));
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT____VdfgTmp_h805c553a__0 
            = (0xfU & (vlSelf->__VdfgTmp_h6b07fa0a__0 
                       >> 0x10U));
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT____VdfgTmp_h80fabba5__0 
            = (0xfU & (vlSelf->__VdfgTmp_h6b07fa0a__0 
                       >> 0x18U));
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata1 
            = vlSelf->__VdfgTmp_h6b07fa0a__0;
    }
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_132 
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
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_121 
        = (IData)(((0xc000000U == (0x1c000000U & vlSelf->Main__DOT__iram_rdata)) 
                   & (7U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h1bd59172__0))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_119 
        = (IData)(((0xc000000U == (0xc000000U & vlSelf->Main__DOT__iram_rdata)) 
                   & (7U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h1bd59172__0))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_122 
        = ((8U & (vlSelf->Main__DOT__iram_rdata >> 0x19U)) 
           | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h1bd59172__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_112 
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
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_95 
        = (IData)(((0U == (0x1800000U & vlSelf->Main__DOT__iram_rdata)) 
                   & (0x3fU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h8b89584c__0))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h2efe7c47__0 
        = ((0x40U & ((~ (vlSelf->Main__DOT__iram_rdata 
                         >> 0x19U)) << 6U)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h8b89584c__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hea5ce459__0 
        = ((8U & (vlSelf->Main__DOT__iram_rdata >> 0x19U)) 
           | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h5554197b__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h1a7f0360__0 
        = ((0x10U & ((~ (vlSelf->Main__DOT__iram_rdata 
                         >> 0x1bU)) << 4U)) | ((8U 
                                                & ((~ 
                                                    (vlSelf->Main__DOT__iram_rdata 
                                                     >> 0x1cU)) 
                                                   << 3U)) 
                                               | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h5554197b__0)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_131 
        = ((vlSelf->Main__DOT__iram_rdata >> 0x1bU) 
           & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_122)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_126 
        = ((0x10U & ((~ (vlSelf->Main__DOT__iram_rdata 
                         >> 0x1bU)) << 4U)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_122));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hd18ef98c__0 
        = (((IData)((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_122))) 
            << 1U) | (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_132)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h06deb864__0 
        = ((0x100U & ((~ (vlSelf->Main__DOT__iram_rdata 
                          >> 0x17U)) << 8U)) | ((0x80U 
                                                 & (vlSelf->Main__DOT__iram_rdata 
                                                    >> 0x11U)) 
                                                | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h2efe7c47__0)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h137d715b__0 
        = ((0x80U & ((~ (vlSelf->Main__DOT__iram_rdata 
                         >> 0x18U)) << 7U)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h2efe7c47__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_97 
        = ((~ (vlSelf->Main__DOT__iram_rdata >> 0x16U)) 
           & (0x7fU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h2efe7c47__0)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_99 
        = ((~ (vlSelf->Main__DOT__iram_rdata >> 0x17U)) 
           & (0x7fU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h2efe7c47__0)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_89 
        = (IData)(((0x4000000U == (0x6000000U & vlSelf->Main__DOT__iram_rdata)) 
                   & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hea5ce459__0))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_91 
        = (IData)(((0x4000000U == (0xe000000U & vlSelf->Main__DOT__iram_rdata)) 
                   & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hea5ce459__0))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_93 
        = (IData)(((0xc000000U == (0xe000000U & vlSelf->Main__DOT__iram_rdata)) 
                   & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hea5ce459__0))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hdf4b931c__0 
        = ((0x20U & (vlSelf->Main__DOT__iram_rdata 
                     >> 0x15U)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h1a7f0360__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_he1db0bdc__0 
        = ((0x20U & ((~ (vlSelf->Main__DOT__iram_rdata 
                         >> 0x1aU)) << 5U)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h1a7f0360__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h360c0578__0 
        = (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_121) 
            << 1U) | ((vlSelf->Main__DOT__iram_rdata 
                       >> 0x1aU) & (0x1fU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_126))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_111 
        = ((vlSelf->Main__DOT__iram_rdata >> 0x16U) 
           & (0x1ffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h06deb864__0)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_101 
        = ((~ (vlSelf->Main__DOT__iram_rdata >> 0x16U)) 
           & (0xffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h137d715b__0)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h6d60535a__0 
        = (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_95) 
            << 3U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_97) 
                       << 2U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_99) 
                                  << 1U) | (0x1fU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_126)))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_87 
        = (IData)(((0x2483800U == (0x3ffffffU & vlSelf->Main__DOT__iram_rdata)) 
                   & (0x3fU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hdf4b931c__0))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_85 
        = (IData)(((0U == (0x3000000U & vlSelf->Main__DOT__iram_rdata)) 
                   & (0x3fU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hdf4b931c__0))));
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
    vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_mem_we 
        = ((2U & ((~ ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_95) 
                      | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_97) 
                         | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_99)))) 
                  << 1U)) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_95) 
                             | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_101)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_73 
        = (IData)(((0x800000U == (0xc00000U & vlSelf->Main__DOT__iram_rdata)) 
                   & (0x7fU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hf81c125f__0))));
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
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_65 
        = ((~ (vlSelf->Main__DOT__iram_rdata >> 0x16U)) 
           & (0xffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hc442db33__0)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_66 
        = ((0x100U & ((~ (vlSelf->Main__DOT__iram_rdata 
                          >> 0x17U)) << 8U)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hc442db33__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_75 
        = ((vlSelf->Main__DOT__iram_rdata >> 0x16U) 
           & (0xffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hf55cf174__0)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_78 
        = ((0x100U & (vlSelf->Main__DOT__iram_rdata 
                      >> 0xfU)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hf55cf174__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_57 
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
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_81 
        = ((~ (vlSelf->Main__DOT__iram_rdata >> 0x16U)) 
           & (0x1ffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_78)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_59 
        = (IData)(((0x8000U == (0x38000U & vlSelf->Main__DOT__iram_rdata)) 
                   & (0x1fffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h92bfeef8__0))));
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
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h095fdd5d__0 
        = ((0x4000U & (vlSelf->Main__DOT__iram_rdata 
                       >> 3U)) | ((0x2000U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                                  >> 0x12U)) 
                                              << 0xdU)) 
                                  | ((0x1000U & (vlSelf->Main__DOT__iram_rdata 
                                                 >> 7U)) 
                                     | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hbb50ecb2__0))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_1 
        = (IData)(((0U == (0x38000U & vlSelf->Main__DOT__iram_rdata)) 
                   & (0xfffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h924e2e84__0))));
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
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_53 
        = ((~ (vlSelf->Main__DOT__iram_rdata >> 0xfU)) 
           & (0x7fffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h095fdd5d__0)));
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
    vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name 
        = ((0x10U & ((~ ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_95) 
                         | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_97) 
                            | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_99) 
                               | (0U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hd18ef98c__0)))))) 
                     << 4U)) | ((8U & ((~ ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_53) 
                                           | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_85) 
                                              | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_87) 
                                                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_93) 
                                                    | (((~ 
                                                         (vlSelf->Main__DOT__iram_rdata 
                                                          >> 0x17U)) 
                                                        & (0xffU 
                                                           == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h137d715b__0))) 
                                                       | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_119) 
                                                          | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_131) 
                                                             | (0xfU 
                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_132)))))))))) 
                                       << 3U)) | ((4U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_53) 
                                                        | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_93) 
                                                           | ((IData)(
                                                                      ((0x800000U 
                                                                        == 
                                                                        (0xc00000U 
                                                                         & vlSelf->Main__DOT__iram_rdata)) 
                                                                       & (0xffU 
                                                                          == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h137d715b__0)))) 
                                                              | (((~ 
                                                                   (vlSelf->Main__DOT__iram_rdata 
                                                                    >> 0x16U)) 
                                                                  & (0x1ffU 
                                                                     == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h06deb864__0))) 
                                                                 | ((0x1ffU 
                                                                     == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_112)) 
                                                                    | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_119) 
                                                                       | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_131) 
                                                                          | ((~ 
                                                                              (vlSelf->Main__DOT__iram_rdata 
                                                                               >> 0x1bU)) 
                                                                             & (0xfU 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_132))))))))))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_85) 
                                                           | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_87) 
                                                              | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_93) 
                                                                 | ((IData)(
                                                                            ((0x800000U 
                                                                              == 
                                                                              (0xc00000U 
                                                                               & vlSelf->Main__DOT__iram_rdata)) 
                                                                             & (0x7fU 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h2efe7c47__0)))) 
                                                                    | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_111) 
                                                                       | (((~ 
                                                                            (vlSelf->Main__DOT__iram_rdata 
                                                                             >> 0x16U)) 
                                                                           & (0x1ffU 
                                                                              == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_112))) 
                                                                          | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_119) 
                                                                             | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_131) 
                                                                                | ((vlSelf->Main__DOT__iram_rdata 
                                                                                >> 0x1bU) 
                                                                                & (0xfU 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_132)))))))))))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           ((IData)(
                                                                    ((0U 
                                                                      == 
                                                                      (0x18000U 
                                                                       & vlSelf->Main__DOT__iram_rdata)) 
                                                                     & (0x7fffU 
                                                                        == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h095fdd5d__0)))) 
                                                            | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_87) 
                                                               | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_101) 
                                                                  | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_111) 
                                                                     | (((vlSelf->Main__DOT__iram_rdata 
                                                                          >> 0x16U) 
                                                                         & (0x1ffU 
                                                                            == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_112))) 
                                                                        | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_121) 
                                                                           | ((~ 
                                                                               (vlSelf->Main__DOT__iram_rdata 
                                                                                >> 0x1aU)) 
                                                                              & ((0xfU 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_122)) 
                                                                                | (0xfU 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_132))))))))))))))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_41 
        = ((~ (vlSelf->Main__DOT__iram_rdata >> 0xfU)) 
           & (0x7fffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hbb8003c0__0)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_42 
        = ((0x8000U & ((~ (vlSelf->Main__DOT__iram_rdata 
                           >> 0x10U)) << 0xfU)) | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hbb8003c0__0));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_5 
        = ((~ (vlSelf->Main__DOT__iram_rdata >> 0xfU)) 
           & (0x3fffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h3ae392be__0)));
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
    VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__npc_brk__DOT__npc_break_TOP(
                                                                                (0x12U 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name)));
    vlSelf->Main__DOT__cpucore__DOT__csr__DOT___estat_T_5 
        = ((((0x13U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))
              ? 0xbU : ((0x12U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))
                         ? 0xcU : 0U)) << 0x10U) | 
           (0xffffU & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__estat));
    vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_csr_we 
        = ((0U != (0x1fU & (vlSelf->Main__DOT__iram_rdata 
                            >> 5U))) & (0x15U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name)));
    if ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))) {
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr = 1U;
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b 
            = vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc;
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a 
            = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__imm26;
    } else if ((0xeU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))) {
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr = 1U;
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b 
            = vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc;
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a 
            = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__imm26;
    } else {
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr 
            = (0x1fU & vlSelf->Main__DOT__iram_rdata);
        if ((0x12U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))) {
            vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b 
                = vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc;
            vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a = 0U;
        } else if ((0x10U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))) {
            vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b = 0U;
            vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a 
                = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata1;
        } else {
            vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b 
                = vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc;
            vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a 
                = (((- (IData)((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x19U)))) 
                    << 0x12U) | (0x3fffcU & (vlSelf->Main__DOT__iram_rdata 
                                             >> 8U)));
        }
    }
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
        = (((0x10U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name)) 
            | ((0x11U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name)) 
               | (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))))
            ? vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata1);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en 
        = ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_1) 
           | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_5) 
              | ((0xffffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_10)) 
                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_17) 
                    | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_19) 
                       | ((0x7fffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_26)) 
                          | ((0x7fffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_46)) 
                             | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_57) 
                                | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_59) 
                                   | ((0x1ffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_66)) 
                                      | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_73) 
                                         | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_75) 
                                            | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_85) 
                                               | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_89) 
                                                  | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_95) 
                                                     | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_101) 
                                                        | (0U 
                                                           != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h360c0578__0))))))))))))))))));
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
                                    | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_57) 
                                       | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_59) 
                                          | (((vlSelf->Main__DOT__iram_rdata 
                                               >> 0x16U) 
                                              & (0x1ffU 
                                                 == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_78))) 
                                             | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_91))))))))) 
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
                                            | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_81) 
                                               | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_91)))))) 
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
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_66))) 
                                                                            | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_81)))))))))))) 
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
                                                              | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_57) 
                                                                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_65) 
                                                                    | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_73) 
                                                                       | ((IData)(
                                                                                ((0x400000U 
                                                                                == 
                                                                                (0xc00000U 
                                                                                & vlSelf->Main__DOT__iram_rdata)) 
                                                                                & (0xffU 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hf55cf174__0)))) 
                                                                          | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_93) 
                                                                             | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_95) 
                                                                                | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_97) 
                                                                                | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_99) 
                                                                                | (0U 
                                                                                != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h360c0578__0))))))))))))))))))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type 
        = ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_53) 
             | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_75) 
                | ((0x1ffU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_78)) 
                   | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_85) 
                      | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_87))))) 
            << 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_89) 
                        | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_119) 
                           | (0U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hd18ef98c__0)))) 
                       << 2U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_57) 
                                   | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_59) 
                                      | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_65) 
                                         | ((0x1ffU 
                                             == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_66)) 
                                            | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_85) 
                                               | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_91) 
                                                  | (0U 
                                                     != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h6d60535a__0)))))))) 
                                  << 1U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_1) 
                                            | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_5) 
                                               | ((0xffffU 
                                                   == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_10)) 
                                                  | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_17) 
                                                     | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_19) 
                                                        | ((0x7fffU 
                                                            == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_26)) 
                                                           | ((0x7fffU 
                                                               == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_46)) 
                                                              | ((0x1ffU 
                                                                  == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_66)) 
                                                                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_73) 
                                                                    | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_75) 
                                                                       | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_93) 
                                                                          | (0U 
                                                                             != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h6d60535a__0))))))))))))))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4 
        = ((vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a 
            ^ vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b) 
           >> 0x1cU);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_4 
        = ((vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a 
            & vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b) 
           >> 0x1cU);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3 
        = (0xfU & ((vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a 
                    ^ vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b) 
                   >> 0x18U));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_3 
        = (0xfU & ((vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a 
                    & vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b) 
                   >> 0x18U));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2 
        = (0xfU & ((vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a 
                    ^ vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b) 
                   >> 0x14U));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_2 
        = (0xfU & ((vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a 
                    & vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b) 
                   >> 0x14U));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_1 
        = (0xfU & ((vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a 
                    ^ vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b) 
                   >> 0x10U));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_1 
        = (0xfU & ((vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a 
                    & vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b) 
                   >> 0x10U));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4 
        = (0xfU & ((vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a 
                    ^ vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b) 
                   >> 0xcU));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_4 
        = (0xfU & ((vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a 
                    & vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b) 
                   >> 0xcU));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_3 
        = (0xfU & ((vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a 
                    & vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b) 
                   >> 8U));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_2 
        = (0xfU & ((vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a 
                    & vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b) 
                   >> 4U));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_1 
        = (0xfU & (vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a 
                   ^ vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1 
        = (0xfU & (vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a 
                   & vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_3 
        = (0xfU & ((vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a 
                    ^ vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b) 
                   >> 8U));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2 
        = (0xfU & ((vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a 
                    ^ vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b) 
                   >> 4U));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__buf_ 
        = (((QData)((IData)((((0xbU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op)) 
                              & (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                                 >> 0x1fU)) ? 0xffffffffU
                              : 0U))) << 0x20U) | (QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a)));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0_in_cin 
        = ((2U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op)) 
           | ((3U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op)) 
              | (4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once_ex 
        = ((~ (((0x13U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name)) 
                & (1U == (0x7fffU & vlSelf->Main__DOT__iram_rdata))) 
               | ((0x12U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name)) 
                  | (0x14U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))))) 
           & (8U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_raddr2 
        = (0x1fU & ((((0x10U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name)) 
                      & (4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))) 
                     | ((0U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_mem_we)) 
                        | (0xaU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))))
                     ? vlSelf->Main__DOT__iram_rdata
                     : (vlSelf->Main__DOT__iram_rdata 
                        >> 0xaU)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_1_2 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1) 
                  >> 1U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1) 
                            & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_1) 
                               >> 1U))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F0 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1) 
                  >> 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1) 
                              >> 2U) & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_1) 
                                        >> 3U)) | ((IData)(
                                                           (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1) 
                                                             >> 1U) 
                                                            & (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_1))))) 
                                                   | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1) 
                                                      & (0xeU 
                                                         == 
                                                         (0xeU 
                                                          & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_1))))))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F2 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_3) 
                  >> 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_3) 
                              >> 2U) & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_3) 
                                        >> 3U)) | ((IData)(
                                                           (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_3) 
                                                             >> 1U) 
                                                            & (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_3))))) 
                                                   | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_3) 
                                                      & (0xeU 
                                                         == 
                                                         (0xeU 
                                                          & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_3))))))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F1 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_2) 
                  >> 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_2) 
                              >> 2U) & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2) 
                                        >> 3U)) | ((IData)(
                                                           (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_2) 
                                                             >> 1U) 
                                                            & (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2))))) 
                                                   | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_2) 
                                                      & (0xeU 
                                                         == 
                                                         (0xeU 
                                                          & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2))))))));
    vlSelf->__VdfgTmp_h8e11cbc3__0 = vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
        [vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_raddr2];
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_1 
        = (1U & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_2) 
                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F0) 
                    & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_0 
        = ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F1) 
           | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F0) 
              & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0_out_cout 
        = (1U & ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_4) 
                   >> 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_4) 
                               >> 2U) & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4) 
                                         >> 3U)) | 
                             ((IData)((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_4) 
                                        >> 1U) & (0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4))))) 
                              | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_4) 
                                 & (0xeU == (0xeU & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4))))))) 
                 | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F2) 
                     & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4))) 
                    | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F1) 
                        & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4)) 
                           & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_3)))) 
                       | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F0) 
                          & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4)) 
                             & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_3)) 
                                & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2)))))))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h8d80ac40__0 
        = ((0U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_raddr2)) 
           & (vlSelf->__VdfgTmp_h8e11cbc3__0 >> 0x1fU));
    if ((0U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_raddr2))) {
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___05Fin_b = 0xffffffffU;
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata2 = 0U;
    } else {
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___05Fin_b 
            = (~ vlSelf->__VdfgTmp_h8e11cbc3__0);
        vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata2 
            = vlSelf->__VdfgTmp_h8e11cbc3__0;
    }
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_2 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_2) 
                  >> 1U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_1) 
                            & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2) 
                               >> 1U))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_1 
        = (1U & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_3) 
                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_0) 
                    & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_3))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_0 
        = ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F2) 
           | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_0) 
              & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_3))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_1 
        = (1U & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_1) 
                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0_out_cout) 
                    & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_1))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_0 
        = (1U & ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_1) 
                   >> 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_1) 
                               >> 2U) & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_1) 
                                         >> 3U)) | 
                             ((IData)((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_1) 
                                        >> 1U) & (0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_1))))) 
                              | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_1) 
                                 & (0xeU == (0xeU & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_1))))))) 
                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0_out_cout) 
                    & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_1)))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g_2 
        = ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT____VdfgTmp_h80eb44dd__0) 
           & (vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___05Fin_b 
              >> 0x14U));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g_1 
        = ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT____VdfgTmp_h805c553a__0) 
           & (vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___05Fin_b 
              >> 0x10U));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g_3 
        = ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT____VdfgTmp_h80fabba5__0) 
           & (vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___05Fin_b 
              >> 0x18U));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_4 
        = (0xfU & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT____VdfgTmp_h800aa055__0) 
                   ^ (vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___05Fin_b 
                      >> 0xcU)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_3 
        = (0xfU & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT____VdfgTmp_h80fabba5__0) 
                   ^ (vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___05Fin_b 
                      >> 8U)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_2 
        = (0xfU & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT____VdfgTmp_h80eb44dd__0) 
                   ^ (vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___05Fin_b 
                      >> 4U)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_1 
        = (0xfU & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT____VdfgTmp_h805c553a__0) 
                   ^ vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___05Fin_b));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__g_2 
        = ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT____VdfgTmp_h80eb44dd__0) 
           & (vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___05Fin_b 
              >> 4U));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__g_1 
        = ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT____VdfgTmp_h805c553a__0) 
           & vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___05Fin_b);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__g_4 
        = ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT____VdfgTmp_h800aa055__0) 
           & (vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___05Fin_b 
              >> 0xcU));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__g_3 
        = ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT____VdfgTmp_h80fabba5__0) 
           & (vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___05Fin_b 
              >> 8U));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_4 
        = (0xfU & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT____VdfgTmp_h800aa055__0) 
                   ^ (vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___05Fin_b 
                      >> 0x1cU)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g_4 
        = ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT____VdfgTmp_h800aa055__0) 
           & (vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___05Fin_b 
              >> 0x1cU));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_3 
        = (0xfU & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT____VdfgTmp_h80fabba5__0) 
                   ^ (vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___05Fin_b 
                      >> 0x18U)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_2 
        = (0xfU & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT____VdfgTmp_h80eb44dd__0) 
                   ^ (vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___05Fin_b 
                      >> 0x14U)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_1 
        = (0xfU & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT____VdfgTmp_h805c553a__0) 
                   ^ (vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___05Fin_b 
                      >> 0x10U)));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__rj_eq_rd 
        = (vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata1 
           == vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata2);
    vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_alu_src2 
        = (((1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type)) 
            | (0xaU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type)))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata2
            : ((2U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))
                ? (0x1fU & (vlSelf->Main__DOT__iram_rdata 
                            >> 0xaU)) : ((3U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->Main__DOT__iram_rdata 
                                                             >> 0x15U)))) 
                                              << 0xcU) 
                                             | (0xfffU 
                                                & (vlSelf->Main__DOT__iram_rdata 
                                                   >> 0xaU)))
                                          : ((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))
                                              ? (0xfffU 
                                                 & (vlSelf->Main__DOT__iram_rdata 
                                                    >> 0xaU))
                                              : ((4U 
                                                  == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))
                                                  ? 4U
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))
                                                   ? 
                                                  (0xfffff000U 
                                                   & (vlSelf->Main__DOT__iram_rdata 
                                                      << 7U))
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))
                                                    ? 
                                                   (0xfffff000U 
                                                    & (vlSelf->Main__DOT__iram_rdata 
                                                       << 7U))
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))
                                                     ? 4U
                                                     : 0U))))))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_2 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_3) 
                  >> 1U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_1) 
                            & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_3) 
                               >> 1U))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_1 
        = (1U & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_4) 
                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_0) 
                    & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_2 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_1) 
                  >> 1U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_1) 
                            & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_1) 
                               >> 1U))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_1 
        = (1U & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_2) 
                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_0) 
                    & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_0 
        = (1U & ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_2) 
                   >> 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_2) 
                               >> 2U) & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2) 
                                         >> 3U)) | 
                             ((IData)((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_2) 
                                        >> 1U) & (0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2))))) 
                              | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_2) 
                                 & (0xeU == (0xeU & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2))))))) 
                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_0) 
                    & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2)))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0_out_cout 
        = (1U & ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__g_4) 
                   >> 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__g_4) 
                               >> 2U) & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_4) 
                                         >> 3U)) | 
                             ((IData)((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__g_4) 
                                        >> 1U) & (0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_4))))) 
                              | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__g_4) 
                                 & (0xeU == (0xeU & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_4))))))) 
                 | (((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__g_3) 
                       >> 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__g_3) 
                                   >> 2U) & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_3) 
                                             >> 3U)) 
                                 | ((IData)((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__g_3) 
                                              >> 1U) 
                                             & (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_3))))) 
                                    | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__g_3) 
                                       & (0xeU == (0xeU 
                                                   & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_3))))))) 
                     & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_4))) 
                    | (((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__g_2) 
                          >> 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__g_2) 
                                      >> 2U) & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_2) 
                                                >> 3U)) 
                                    | ((IData)((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__g_2) 
                                                 >> 1U) 
                                                & (0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_2))))) 
                                       | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__g_2) 
                                          & (0xeU == 
                                             (0xeU 
                                              & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_2))))))) 
                        & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_4)) 
                           & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_3)))) 
                       | (((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__g_1) 
                             >> 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__g_1) 
                                         >> 2U) & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_1) 
                                                   >> 3U)) 
                                       | ((IData)((
                                                   ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__g_1) 
                                                    >> 1U) 
                                                   & (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_1))))) 
                                          | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__g_1) 
                                             & (0xeU 
                                                == 
                                                (0xeU 
                                                 & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_1))))))) 
                           & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_4)) 
                              & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_3)) 
                                 & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_2))))) 
                          | ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_4)) 
                             & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_3)) 
                                & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_2)) 
                                   & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0__DOT__p_1))))))))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g___05F2 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g_3) 
                  >> 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g_3) 
                              >> 2U) & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_3) 
                                        >> 3U)) | ((IData)(
                                                           (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g_3) 
                                                             >> 1U) 
                                                            & (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_3))))) 
                                                   | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g_3) 
                                                      & (0xeU 
                                                         == 
                                                         (0xeU 
                                                          & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_3))))))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g___05F1 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g_2) 
                  >> 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g_2) 
                              >> 2U) & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_2) 
                                        >> 3U)) | ((IData)(
                                                           (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g_2) 
                                                             >> 1U) 
                                                            & (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_2))))) 
                                                   | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g_2) 
                                                      & (0xeU 
                                                         == 
                                                         (0xeU 
                                                          & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_2))))))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g___05F0 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g_1) 
                  >> 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g_1) 
                              >> 2U) & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_1) 
                                        >> 3U)) | ((IData)(
                                                           (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g_1) 
                                                             >> 1U) 
                                                            & (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_1))))) 
                                                   | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g_1) 
                                                      & (0xeU 
                                                         == 
                                                         (0xeU 
                                                          & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_1))))))));
    vlSelf->Main__DOT__cpucore__DOT__csr__DOT___crmd_T_2 
        = (((1U == (0x1fU & (vlSelf->Main__DOT__iram_rdata 
                             >> 5U))) ? 0xffffffffU
             : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata1) 
           & vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_alu_src2);
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__or_res 
        = (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
           | vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_alu_src2);
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__mul_pre 
        = ((QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a)) 
           * (QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_alu_src2)));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_1 
        = ((1U & vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_alu_src2)
            ? ((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                ? (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__buf_ 
                   << 1U) : (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__buf_ 
                             >> 1U)) : vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__buf_);
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_b 
        = ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0_in_cin)
            ? (~ vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_alu_src2)
            : vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_alu_src2);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_2 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_4) 
                  >> 1U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_1) 
                            & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4) 
                               >> 1U))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_2 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_2) 
                  >> 1U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_1) 
                            & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2) 
                               >> 1U))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_1 
        = (1U & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_3) 
                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_0) 
                    & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_0 
        = (1U & ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_3) 
                   >> 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_3) 
                               >> 2U) & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3) 
                                         >> 3U)) | 
                             ((IData)((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_3) 
                                        >> 1U) & (0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3))))) 
                              | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_3) 
                                 & (0xeU == (0xeU & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3))))))) 
                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_0) 
                    & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3)))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1_out_cout 
        = (1U & ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g_4) 
                   >> 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g_4) 
                               >> 2U) & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_4) 
                                         >> 3U)) | 
                             ((IData)((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g_4) 
                                        >> 1U) & (0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_4))))) 
                              | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g_4) 
                                 & (0xeU == (0xeU & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_4))))))) 
                 | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g___05F2) 
                     & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_4))) 
                    | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g___05F1) 
                        & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_4)) 
                           & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_3)))) 
                       | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g___05F0) 
                           & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_4)) 
                              & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_3)) 
                                 & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_2))))) 
                          | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0_out_cout) 
                             & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_4)) 
                                & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_3)) 
                                   & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_2)) 
                                      & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_1)))))))))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__c_carry_4_0 
        = ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g___05F2) 
           | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g___05F1) 
               | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g___05F0) 
                   | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_0_out_cout) 
                      & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_1)))) 
                  & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_2)))) 
              & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_3))));
    vlSelf->Main__DOT__cpucore__DOT__csr__DOT___eentry_T_3 
        = ((vlSelf->Main__DOT__cpucore__DOT__csr__DOT___crmd_T 
            & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__eentry) 
           | vlSelf->Main__DOT__cpucore__DOT__csr__DOT___crmd_T_2);
    vlSelf->Main__DOT__cpucore__DOT__csr__DOT___prmd_T_3 
        = ((vlSelf->Main__DOT__cpucore__DOT__csr__DOT___crmd_T 
            & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__prmd) 
           | vlSelf->Main__DOT__cpucore__DOT__csr__DOT___crmd_T_2);
    vlSelf->Main__DOT__cpucore__DOT__csr__DOT___era_T_3 
        = ((vlSelf->Main__DOT__cpucore__DOT__csr__DOT___crmd_T 
            & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__era) 
           | vlSelf->Main__DOT__cpucore__DOT__csr__DOT___crmd_T_2);
    vlSelf->Main__DOT__cpucore__DOT__csr__DOT___estat_T_3 
        = ((vlSelf->Main__DOT__cpucore__DOT__csr__DOT___crmd_T 
            & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__estat) 
           | vlSelf->Main__DOT__cpucore__DOT__csr__DOT___crmd_T_2);
    vlSelf->Main__DOT__cpucore__DOT__csr__DOT___crmd_T_3 
        = ((vlSelf->Main__DOT__cpucore__DOT__csr__DOT___crmd_T 
            & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__crmd) 
           | vlSelf->Main__DOT__cpucore__DOT__csr__DOT___crmd_T_2);
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_2 
        = ((2U & vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_alu_src2)
            ? ((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                ? (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_1 
                   << 2U) : (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_1 
                             >> 2U)) : vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_1);
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_4 
        = ((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
            ^ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_b) 
           >> 0x1cU);
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_4 
        = ((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
            & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_b) 
           >> 0x1cU);
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_3 
        = (0xfU & ((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                    & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_b) 
                   >> 0x18U));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_2 
        = (0xfU & ((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                    & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_b) 
                   >> 0x14U));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_3 
        = (0xfU & ((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                    ^ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_b) 
                   >> 0x18U));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_1 
        = (0xfU & ((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                    & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_b) 
                   >> 0x10U));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_4 
        = (0xfU & ((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                    ^ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_b) 
                   >> 0xcU));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_4 
        = (0xfU & ((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                    & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_b) 
                   >> 0xcU));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_2 
        = (0xfU & ((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                    ^ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_b) 
                   >> 0x14U));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_3 
        = (0xfU & ((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                    & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_b) 
                   >> 8U));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_2 
        = (0xfU & ((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                    & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_b) 
                   >> 4U));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_1 
        = (0xfU & ((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                    ^ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_b) 
                   >> 0x10U));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_1 
        = (0xfU & (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                   & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_b));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_3 
        = (0xfU & ((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                    ^ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_b) 
                   >> 8U));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_2 
        = (0xfU & ((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                    ^ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_b) 
                   >> 4U));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_1 
        = (0xfU & (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                   ^ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_b));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_2 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_3) 
                  >> 1U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_1) 
                            & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3) 
                               >> 1U))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_1 
        = (1U & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_4) 
                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_0) 
                    & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__c_carry_4_1 
        = (1U & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g_4) 
                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__c_carry_4_0) 
                    & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_4))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__csr[4U] 
        = ((IData)(((0x3000U == (0xfffc00U & vlSelf->Main__DOT__iram_rdata)) 
                    & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_csr_we)))
            ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT___eentry_T_3
            : vlSelf->Main__DOT__cpucore__DOT__csr__DOT__eentry);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__csr[1U] 
        = ((IData)(((0x400U == (0xfffc00U & vlSelf->Main__DOT__iram_rdata)) 
                    & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_csr_we)))
            ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT___prmd_T_3
            : ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once_ex)
                ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT___prmd_T_6
                : vlSelf->Main__DOT__cpucore__DOT__csr__DOT__prmd));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__csr[3U] 
        = ((IData)(((0x1800U == (0xfffc00U & vlSelf->Main__DOT__iram_rdata)) 
                    & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_csr_we)))
            ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT___era_T_3
            : ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once_ex)
                ? vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc
                : vlSelf->Main__DOT__cpucore__DOT__csr__DOT__era));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__csr[2U] 
        = ((IData)(((0x1400U == (0xfffc00U & vlSelf->Main__DOT__iram_rdata)) 
                    & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_csr_we)))
            ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT___estat_T_3
            : ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once_ex)
                ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT___estat_T_5
                : vlSelf->Main__DOT__cpucore__DOT__csr__DOT__estat));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__csr[0U] 
        = ((IData)(((0U == (0xfffc00U & vlSelf->Main__DOT__iram_rdata)) 
                    & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_csr_we)))
            ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT___crmd_T_3
            : ((0x14U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))
                ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT___crmd_T_6
                : ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once_ex)
                    ? (0xfffffff8U & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__crmd)
                    : vlSelf->Main__DOT__cpucore__DOT__csr__DOT__crmd)));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_3 
        = ((4U & vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_alu_src2)
            ? ((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                ? (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_2 
                   << 4U) : (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_2 
                             >> 4U)) : vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_2);
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g___05F2 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_3) 
                  >> 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_3) 
                              >> 2U) & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_3) 
                                        >> 3U)) | ((IData)(
                                                           (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_3) 
                                                             >> 1U) 
                                                            & (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_3))))) 
                                                   | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_3) 
                                                      & (0xeU 
                                                         == 
                                                         (0xeU 
                                                          & (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_3))))))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g___05F1 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_2) 
                  >> 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_2) 
                              >> 2U) & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_2) 
                                        >> 3U)) | ((IData)(
                                                           (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_2) 
                                                             >> 1U) 
                                                            & (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_2))))) 
                                                   | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_2) 
                                                      & (0xeU 
                                                         == 
                                                         (0xeU 
                                                          & (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_2))))))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g___05F0 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_1) 
                  >> 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_1) 
                              >> 2U) & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_1) 
                                        >> 3U)) | ((IData)(
                                                           (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_1) 
                                                             >> 1U) 
                                                            & (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_1))))) 
                                                   | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_1) 
                                                      & (0xeU 
                                                         == 
                                                         (0xeU 
                                                          & (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_1))))))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g___05F2 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_3) 
                  >> 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_3) 
                              >> 2U) & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_3) 
                                        >> 3U)) | ((IData)(
                                                           (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_3) 
                                                             >> 1U) 
                                                            & (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_3))))) 
                                                   | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_3) 
                                                      & (0xeU 
                                                         == 
                                                         (0xeU 
                                                          & (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_3))))))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g___05F1 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_2) 
                  >> 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_2) 
                              >> 2U) & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_2) 
                                        >> 3U)) | ((IData)(
                                                           (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_2) 
                                                             >> 1U) 
                                                            & (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_2))))) 
                                                   | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_2) 
                                                      & (0xeU 
                                                         == 
                                                         (0xeU 
                                                          & (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_2))))))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_1_1 
        = (1U & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_1) 
                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0_in_cin) 
                    & (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_1))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g___05F0 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_1) 
                  >> 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_1) 
                              >> 2U) & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_1) 
                                        >> 3U)) | ((IData)(
                                                           (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_1) 
                                                             >> 1U) 
                                                            & (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_1))))) 
                                                   | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_1) 
                                                      & (0xeU 
                                                         == 
                                                         (0xeU 
                                                          & (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_1))))))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_2 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_4) 
                  >> 1U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_1) 
                            & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4) 
                               >> 1U))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__c_carry_4_2 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g_4) 
                  >> 1U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__c_carry_4_1) 
                            & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_4) 
                               >> 1U))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_4 
        = ((8U & vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_alu_src2)
            ? ((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                ? (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_3 
                   << 8U) : (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_3 
                             >> 8U)) : vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_3);
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_1_2 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_1) 
                  >> 1U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_1_1) 
                            & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_1) 
                               >> 1U))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_2_0 
        = ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g___05F0) 
           | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0_in_cin) 
              & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_1))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0_out_cout 
        = (1U & ((((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_4) 
                   >> 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_4) 
                               >> 2U) & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_4) 
                                         >> 3U)) | 
                             ((IData)((((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_4) 
                                        >> 1U) & (0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_4))))) 
                              | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_4) 
                                 & (0xeU == (0xeU & (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_4))))))) 
                 | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g___05F2) 
                     & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_4))) 
                    | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g___05F1) 
                        & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_4)) 
                           & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_3)))) 
                       | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g___05F0) 
                           & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_4)) 
                              & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_3)) 
                                 & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_2))))) 
                          | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0_in_cin) 
                             & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_4)) 
                                & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_3)) 
                                   & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_2)) 
                                      & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_1)))))))))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fout_s 
        = (((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4) 
              << 0x1cU) ^ ((0x80000000U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_4) 
                                            << 0x1dU) 
                                           | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_2) 
                                               << 0x1fU) 
                                              & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4) 
                                                 << 0x1dU)))) 
                           | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_2) 
                               << 0x1eU) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_1) 
                                             << 0x1dU) 
                                            | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_0) 
                                               << 0x1cU))))) 
            | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3) 
                 << 0x18U) ^ ((0x8000000U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_3) 
                                              << 0x19U) 
                                             | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_2) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3) 
                                                   << 0x19U)))) 
                              | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_2) 
                                  << 0x1aU) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_1) 
                                                << 0x19U) 
                                               | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_0) 
                                                  << 0x18U))))) 
               | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2) 
                    << 0x14U) ^ ((0x800000U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_2) 
                                                << 0x15U) 
                                               | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_2) 
                                                   << 0x17U) 
                                                  & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2) 
                                                     << 0x15U)))) 
                                 | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_2) 
                                     << 0x16U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_1) 
                                                   << 0x15U) 
                                                  | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_0) 
                                                     << 0x14U))))) 
                  | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_1) 
                      << 0x10U) ^ ((0x80000U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_1) 
                                                 << 0x11U) 
                                                | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_2) 
                                                    << 0x13U) 
                                                   & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_1) 
                                                      << 0x11U)))) 
                                   | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_2) 
                                       << 0x12U) | 
                                      (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_1) 
                                        << 0x11U) | 
                                       ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0_out_cout) 
                                        << 0x10U)))))))) 
           | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4) 
                << 0xcU) ^ ((0x8000U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_4) 
                                         << 0xdU) | 
                                        (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_2) 
                                          << 0xfU) 
                                         & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4) 
                                            << 0xdU)))) 
                            | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_2) 
                                << 0xeU) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_1) 
                                             << 0xdU) 
                                            | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_0) 
                                               << 0xcU))))) 
              | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_3) 
                   << 8U) ^ ((0x800U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_3) 
                                         << 9U) | (
                                                   ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_2) 
                                                    << 0xbU) 
                                                   & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_3) 
                                                      << 9U)))) 
                             | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_2) 
                                 << 0xaU) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_1) 
                                              << 9U) 
                                             | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_0) 
                                                << 8U))))) 
                 | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2) 
                      << 4U) ^ ((0x80U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_2) 
                                           << 5U) | 
                                          (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_2) 
                                            << 7U) 
                                           & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2) 
                                              << 5U)))) 
                                | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_2) 
                                    << 6U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_1) 
                                               << 5U) 
                                              | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F0) 
                                                 << 4U))))) 
                    | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_1) 
                       ^ ((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1) 
                                  << 1U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_1_2) 
                                             << 3U) 
                                            & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_1) 
                                               << 1U)))) 
                          | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_1_2) 
                              << 2U) | (2U & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1) 
                                              << 1U)))))))));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__slt_res 
        = (1U & (((~ (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h8d80ac40__0)) 
                  & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h68e26b49__0)) 
                 | ((~ ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h68e26b49__0) 
                        ^ (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h8d80ac40__0))) 
                    & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_4) 
                        >> 3U) ^ ((1U & ((0x1fffffffU 
                                          & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__g_4) 
                                             >> 2U)) 
                                         | (0x1fffffffU 
                                            & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__c_carry_4_2) 
                                               & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__p_4) 
                                                  >> 2U))))) 
                                  | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1__DOT__c_carry_4_0) 
                                     >> 3U))))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_2_1 
        = (1U & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_2) 
                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_2_0) 
                    & (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_2))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_3_0 
        = ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g___05F1) 
           | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_2_0) 
              & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_2))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1_out_cout 
        = (1U & ((((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_4) 
                   >> 3U) | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_4) 
                               >> 2U) & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_4) 
                                         >> 3U)) | 
                             ((IData)((((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_4) 
                                        >> 1U) & (0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_4))))) 
                              | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_4) 
                                 & (0xeU == (0xeU & (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_4))))))) 
                 | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g___05F2) 
                     & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_4))) 
                    | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g___05F1) 
                        & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_4)) 
                           & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_3)))) 
                       | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g___05F0) 
                           & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_4)) 
                              & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_3)) 
                                 & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_2))))) 
                          | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0_out_cout) 
                             & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_4)) 
                                & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_3)) 
                                   & ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_2)) 
                                      & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_1)))))))))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_1_1 
        = (1U & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_1) 
                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0_out_cout) 
                    & (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_1))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_2_0 
        = ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g___05F0) 
           | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0_out_cout) 
              & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_1))));
    vlSelf->Main__DOT__cpucore__DOT__pIF_br_taken = 
        (((0U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name)) 
          & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__rj_eq_rd)) 
         | (((~ (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__rj_eq_rd)) 
             & (1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))) 
            | (((2U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name)) 
                & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__slt_res)) 
               | (((~ (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__slt_res)) 
                   & (3U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))) 
                  | (((~ (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1_out_cout)) 
                      & (4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))) 
                     | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1_out_cout) 
                         & (5U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))) 
                        | ((0xeU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name)) 
                           | ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name)) 
                              | ((0x10U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name)) 
                                 | (0x12U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name)))))))))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_2_2 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_2) 
                  >> 1U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_2_1) 
                            & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_2) 
                               >> 1U))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_3_1 
        = (1U & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_3) 
                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_3_0) 
                    & (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_3))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_4_0 
        = ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g___05F2) 
           | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_3_0) 
              & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_3))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_1_2 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_1) 
                  >> 1U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_1_1) 
                            & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_1) 
                               >> 1U))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_2_1 
        = (1U & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_2) 
                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_2_0) 
                    & (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_2))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_3_0 
        = ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g___05F1) 
           | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_2_0) 
              & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_2))));
    VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once__DOT__inst_exec_once_TOP(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->reset))), 
                                                                                (0U 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type)), vlSelf->Main__DOT__iram_rdata, 
                                                                                ((IData)(vlSelf->Main__DOT__cpucore__DOT__pIF_br_taken)
                                                                                 ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fout_s
                                                                                 : 
                                                                                (((0x14U 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name)) 
                                                                                | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once_ex))
                                                                                 ? 
                                                                                ((0x14U 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))
                                                                                 ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT__era
                                                                                 : vlSelf->Main__DOT__cpucore__DOT__csr__DOT__eentry)
                                                                                 : 
                                                                                ((IData)(4U) 
                                                                                + vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_3_2 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_3) 
                  >> 1U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_3_1) 
                            & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_3) 
                               >> 1U))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_4_1 
        = (1U & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_4) 
                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_4_0) 
                    & (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_4))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_2_2 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_2) 
                  >> 1U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_2_1) 
                            & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_2) 
                               >> 1U))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_3_1 
        = (1U & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_3) 
                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_3_0) 
                    & (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_3))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_4_0 
        = ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g___05F2) 
           | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_3_0) 
              & (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_3))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_4_2 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__g_4) 
                  >> 1U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_4_1) 
                            & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_4) 
                               >> 1U))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_3_2 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_3) 
                  >> 1U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_3_1) 
                            & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_3) 
                               >> 1U))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_4_1 
        = (1U & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_4) 
                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_4_0) 
                    & (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_4))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_4_2 
        = (1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_4) 
                  >> 1U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_4_1) 
                            & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_4) 
                               >> 1U))));
    vlSelf->__VdfgTmp_ha33f277c__0 = ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_4) 
                                      ^ ((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__g_4) 
                                                 << 1U) 
                                                | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_4_2) 
                                                    << 3U) 
                                                   & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_4) 
                                                      << 1U)))) 
                                         | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_4_2) 
                                             << 2U) 
                                            | (((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_4_1) 
                                                << 1U) 
                                               | (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_4_0)))));
    vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_res 
        = (IData)((((1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op)) 
                    | (2U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op)))
                    ? (((QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1_out_cout)) 
                        << 0x20U) | (QData)((IData)(
                                                    ((((IData)(vlSelf->__VdfgTmp_ha33f277c__0) 
                                                       << 0x1cU) 
                                                      | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__p_3) 
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
                                                                 | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_3_0) 
                                                                    << 0x18U))))) 
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
                                                                    | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__c_carry_2_0) 
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
                                                                      | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0_out_cout) 
                                                                         << 0x10U)))))))) 
                                                     | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_4) 
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
                                                                | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_4_0) 
                                                                   << 0xcU))))) 
                                                        | ((((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__p_3) 
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
                                                                   | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_3_0) 
                                                                      << 8U))))) 
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
                                                                      | ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_2_0) 
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
                                                                        | (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0_in_cin))))))))))))
                    : (QData)((IData)(((3U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                        ? (1U & (((~ 
                                                   (vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_alu_src2 
                                                    >> 0x1fU)) 
                                                  & (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                                                     >> 0x1fU)) 
                                                 | ((~ 
                                                     ((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                                                       ^ vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_alu_src2) 
                                                      >> 0x1fU)) 
                                                    & ((IData)(vlSelf->__VdfgTmp_ha33f277c__0) 
                                                       >> 3U))))
                                        : ((4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                            ? (1U & 
                                               (~ (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1_out_cout)))
                                            : ((5U 
                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                                ? (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                                                   & vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_alu_src2)
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                                    ? vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__or_res
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                                     ? 
                                                    (~ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__or_res)
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                                      ? 
                                                     (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                                                      ^ vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_alu_src2)
                                                      : 
                                                     (((9U 
                                                        == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op)) 
                                                       | ((0xbU 
                                                           == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op)) 
                                                          | (0xaU 
                                                             == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))))
                                                       ? (IData)(
                                                                 ((0x10U 
                                                                   & vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_alu_src2)
                                                                   ? 
                                                                  ((9U 
                                                                    == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                                                    ? 
                                                                   (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_4 
                                                                    << 0x10U)
                                                                    : 
                                                                   (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_4 
                                                                    >> 0x10U))
                                                                   : vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_4))
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                                        ? vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_alu_src2
                                                        : 
                                                       ((0xdU 
                                                         == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                                         ? (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__mul_pre)
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                                          ? (IData)(
                                                                    (VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a), 
                                                                                VL_EXTENDS_QI(64,32, vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_alu_src2)) 
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
                                                                                & VL_EXTENDS_QI(33,32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a)), 
                                                                                (0x1ffffffffULL 
                                                                                & VL_EXTENDS_QI(33,32, vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_alu_src2)))))
                                                            : 
                                                           ((0x12U 
                                                             == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                                             ? 
                                                            VL_MODDIVS_III(32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a, vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_alu_src2)
                                                             : 
                                                            ((0x11U 
                                                              == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                                              ? 
                                                             VL_DIV_III(32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a, vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_alu_src2)
                                                              : 
                                                             ((0x13U 
                                                               == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                                               ? 
                                                              VL_MODDIV_III(32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a, vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_alu_src2)
                                                               : 0xdeadbeefU)))))))))))))))))));
    if ((2U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_mem_we))) {
        if ((0U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_mem_we))) {
            VMain___024root____Vdpiimwrap_Main__DOT__dram__DOT__vaddr_write_TOP(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_res, vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata2, 
                                                                                ((0xdU 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))
                                                                                 ? 7U
                                                                                 : 
                                                                                ((0xcU 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((0xbU 
                                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))
                                                                                 ? 1U
                                                                                 : 0xdU))), vlSelf->__Vtask_Main__DOT__dram__DOT__vaddr_write__6__rdata);
            vlSelf->Main__DOT__dram_rdata = vlSelf->__Vtask_Main__DOT__dram__DOT__vaddr_write__6__rdata;
        } else {
            VMain___024root____Vdpiimwrap_Main__DOT__dram__DOT__vaddr_read_TOP(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_res, vlSelf->__Vtask_Main__DOT__dram__DOT__vaddr_read__7__rdata);
            vlSelf->Main__DOT__dram_rdata = vlSelf->__Vtask_Main__DOT__dram__DOT__vaddr_read__7__rdata;
        }
    }
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data 
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
            : ((0x15U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_inst_name))
                ? ((((0U == (0x3fffU & (vlSelf->Main__DOT__iram_rdata 
                                        >> 0xaU))) ? 0xffffffffU
                      : 0U) & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__crmd) 
                   | ((((1U == (0x3fffU & (vlSelf->Main__DOT__iram_rdata 
                                           >> 0xaU)))
                         ? 0xffffffffU : 0U) & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__prmd) 
                      | ((((5U == (0x3fffU & (vlSelf->Main__DOT__iram_rdata 
                                              >> 0xaU)))
                            ? 0xffffffffU : 0U) & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__estat) 
                         | ((((6U == (0x3fffU & (vlSelf->Main__DOT__iram_rdata 
                                                 >> 0xaU)))
                               ? 0xffffffffU : 0U) 
                             & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__era) 
                            | (((0xcU == (0x3fffU & 
                                          (vlSelf->Main__DOT__iram_rdata 
                                           >> 0xaU)))
                                 ? 0xffffffffU : 0U) 
                               & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__eentry)))))
                : vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_res));
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[1U] 
        = (((1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [1U]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[2U] 
        = (((2U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [2U]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[3U] 
        = (((3U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [3U]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[4U] 
        = (((4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [4U]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[5U] 
        = (((5U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [5U]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[6U] 
        = (((6U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [6U]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[7U] 
        = (((7U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [7U]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[8U] 
        = (((8U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [8U]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[9U] 
        = (((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [9U]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0xaU] 
        = (((0xaU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [0xaU]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0xbU] 
        = (((0xbU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [0xbU]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0xcU] 
        = (((0xcU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [0xcU]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0xdU] 
        = (((0xdU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [0xdU]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0xeU] 
        = (((0xeU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [0xeU]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0xfU] 
        = (((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [0xfU]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x10U] 
        = (((0x10U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [0x10U]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x11U] 
        = (((0x11U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [0x11U]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x12U] 
        = (((0x12U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [0x12U]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x13U] 
        = (((0x13U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [0x13U]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x14U] 
        = (((0x14U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [0x14U]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x15U] 
        = (((0x15U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [0x15U]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x16U] 
        = (((0x16U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [0x16U]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x17U] 
        = (((0x17U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [0x17U]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x18U] 
        = (((0x18U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [0x18U]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x19U] 
        = (((0x19U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [0x19U]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x1aU] 
        = (((0x1aU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [0x1aU]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x1bU] 
        = (((0x1bU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [0x1bU]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x1cU] 
        = (((0x1cU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [0x1cU]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x1dU] 
        = (((0x1dU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [0x1dU]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x1eU] 
        = (((0x1eU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [0x1eU]);
    vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0x1fU] 
        = (((0x1fU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
            & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_en))
            ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
            : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
           [0x1fU]);
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

void VMain___024root___eval_triggers__ico(VMain___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VMain___024root___dump_triggers__ico(VMain___024root* vlSelf);
#endif  // VL_DEBUG
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
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VMain___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VMain___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/franks/ysyx-workbench/npc/vsrc/Main.v", 2406, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VMain___024root___eval_ico(vlSelf);
        }
    }
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
                    VL_FATAL_MT("/home/franks/ysyx-workbench/npc/vsrc/Main.v", 2406, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/franks/ysyx-workbench/npc/vsrc/Main.v", 2406, "", "NBA region did not converge.");
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
