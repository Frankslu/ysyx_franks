// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMain__Syms.h"


void VMain___024root__trace_chg_sub_0(VMain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VMain___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root__trace_chg_top_0\n"); );
    // Init
    VMain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMain___024root*>(voidSelf);
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMain___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VMain___024root__trace_chg_sub_0(VMain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__inst_sram_en_REG));
        bufp->chgIData(oldp+1,(vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc),32);
        bufp->chgIData(oldp+2,(vlSelf->Main__DOT__iram_rdata),32);
        bufp->chgBit(oldp+3,((2U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we))));
        bufp->chgBit(oldp+4,((0U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we))));
        bufp->chgIData(oldp+5,((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___io_res_T_18)),32);
        bufp->chgIData(oldp+6,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata2),32);
        bufp->chgCData(oldp+7,(((0xdU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                 ? 7U : ((0xcU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                          ? 3U : ((0xbU 
                                                   == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                                   ? 1U
                                                   : 0xdU)))),4);
        bufp->chgIData(oldp+8,(vlSelf->Main__DOT__dram_rdata),32);
        bufp->chgBit(oldp+9,(vlSelf->Main__DOT__cpucore__DOT__pIF_br_taken));
        bufp->chgIData(oldp+10,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fout_s),32);
        bufp->chgIData(oldp+11,(((IData)(vlSelf->Main__DOT__cpucore__DOT__pIF_br_taken)
                                  ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fout_s
                                  : ((IData)(vlSelf->Main__DOT__cpucore__DOT__pIF_csr_br_taken)
                                      ? vlSelf->Main__DOT__cpucore__DOT__pIF_csr_br_pc
                                      : ((IData)(4U) 
                                         + vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc)))),32);
        bufp->chgBit(oldp+12,(vlSelf->Main__DOT__cpucore__DOT__pIF_csr_br_taken));
        bufp->chgIData(oldp+13,(vlSelf->Main__DOT__cpucore__DOT__pIF_csr_br_pc),32);
        bufp->chgIData(oldp+14,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a),32);
        bufp->chgIData(oldp+15,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2),32);
        bufp->chgCData(oldp+16,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op),5);
        bufp->chgCData(oldp+17,(((0xeU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                  ? 1U : (0x1fU & vlSelf->Main__DOT__iram_rdata))),5);
        bufp->chgBit(oldp+18,((0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T)));
        bufp->chgCData(oldp+19,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we),2);
        bufp->chgCData(oldp+20,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name),5);
        bufp->chgSData(oldp+21,((0x3fffU & (vlSelf->Main__DOT__iram_rdata 
                                            >> 0xaU))),14);
        bufp->chgBit(oldp+22,(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_csr_we));
        bufp->chgBit(oldp+23,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once_ex));
        bufp->chgBit(oldp+24,((0x14U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))));
        bufp->chgIData(oldp+25,(((1U == (0x1fU & (vlSelf->Main__DOT__iram_rdata 
                                                  >> 5U)))
                                  ? 0xffffffffU : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata1)),32);
        bufp->chgBit(oldp+26,((0x12U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))));
        bufp->chgBit(oldp+27,((0U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))));
        bufp->chgIData(oldp+28,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data),32);
        bufp->chgCData(oldp+29,(((0x13U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                  ? 0xbU : 0U)),6);
        bufp->chgIData(oldp+30,(((IData)(((0U == (0xfffc00U 
                                                  & vlSelf->Main__DOT__iram_rdata)) 
                                          & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_csr_we)))
                                  ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT___crmd_T_3
                                  : ((0x14U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                      ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT___crmd_T_6
                                      : ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once_ex)
                                          ? (0xfffffff8U 
                                             & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__crmd)
                                          : vlSelf->Main__DOT__cpucore__DOT__csr__DOT__crmd)))),32);
        bufp->chgIData(oldp+31,(((IData)(((0x400U == 
                                           (0xfffc00U 
                                            & vlSelf->Main__DOT__iram_rdata)) 
                                          & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_csr_we)))
                                  ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT___prmd_T_3
                                  : ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once_ex)
                                      ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT___prmd_T_6
                                      : vlSelf->Main__DOT__cpucore__DOT__csr__DOT__prmd))),32);
        bufp->chgIData(oldp+32,(((IData)(((0x1400U 
                                           == (0xfffc00U 
                                               & vlSelf->Main__DOT__iram_rdata)) 
                                          & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_csr_we)))
                                  ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT___estat_T_3
                                  : ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once_ex)
                                      ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT___estat_T_5
                                      : vlSelf->Main__DOT__cpucore__DOT__csr__DOT__estat))),32);
        bufp->chgIData(oldp+33,(((IData)(((0x1800U 
                                           == (0xfffc00U 
                                               & vlSelf->Main__DOT__iram_rdata)) 
                                          & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_csr_we)))
                                  ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT___era_T_3
                                  : ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once_ex)
                                      ? vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc
                                      : vlSelf->Main__DOT__cpucore__DOT__csr__DOT__era))),32);
        bufp->chgIData(oldp+34,(((IData)(((0x3000U 
                                           == (0xfffc00U 
                                               & vlSelf->Main__DOT__iram_rdata)) 
                                          & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID_toes_bits_csr_we)))
                                  ? vlSelf->Main__DOT__cpucore__DOT__csr__DOT___eentry_T_3
                                  : vlSelf->Main__DOT__cpucore__DOT__csr__DOT__eentry)),32);
        bufp->chgIData(oldp+35,(((0x15U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                  ? (((((((0U == (0x3fffU 
                                                  & (vlSelf->Main__DOT__iram_rdata 
                                                     >> 0xaU)))
                                           ? 0xffffffffU
                                           : 0U) & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__crmd) 
                                        | (((1U == 
                                             (0x3fffU 
                                              & (vlSelf->Main__DOT__iram_rdata 
                                                 >> 0xaU)))
                                             ? 0xffffffffU
                                             : 0U) 
                                           & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__prmd)) 
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
        bufp->chgBit(oldp+36,((1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we))));
        bufp->chgIData(oldp+37,((((((((0U == (0x3fffU 
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
                                      : 0U) & vlSelf->Main__DOT__cpucore__DOT__csr__DOT__eentry))),32);
        bufp->chgBit(oldp+38,((0x15U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))));
        bufp->chgCData(oldp+39,((0x1fU & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),5);
        bufp->chgBit(oldp+40,((9U != (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+41,((0xbU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgIData(oldp+42,((IData)(((0x10U & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)
                                          ? ((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                              ? (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_4 
                                                 << 0x10U)
                                              : (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_4 
                                                 >> 0x10U))
                                          : vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_4))),32);
        bufp->chgBit(oldp+43,((1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+44,((2U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+45,((3U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+46,((4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+47,((5U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+48,((6U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+49,((7U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+50,((8U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+51,((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+52,((0xaU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+53,((0xcU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+54,((0xdU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+55,((0xeU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+56,((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+57,((0x10U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+58,((0x12U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+59,((0x11U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+60,((0x13U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+61,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_0__DOT__c_carry_1_0));
        bufp->chgQData(oldp+62,((((QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1_out_cout)) 
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
        bufp->chgBit(oldp+64,((1U & (((~ (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2 
                                          >> 0x1fU)) 
                                      & (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                                         >> 0x1fU)) 
                                     | ((~ ((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                                             ^ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2) 
                                            >> 0x1fU)) 
                                        & ((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1__DOT__sum_3) 
                                           >> 3U))))));
        bufp->chgBit(oldp+65,((1U & (~ (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___DOT__add_1_out_cout)))));
        bufp->chgIData(oldp+66,((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                                 & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
        bufp->chgIData(oldp+67,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__or_res),32);
        bufp->chgIData(oldp+68,((~ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__or_res)),32);
        bufp->chgIData(oldp+69,((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                                 ^ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
        bufp->chgQData(oldp+70,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__mul_pre),64);
        bufp->chgIData(oldp+72,((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__mul_pre)),32);
        bufp->chgIData(oldp+73,((IData)((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__mul_pre 
                                         >> 0x20U))),32);
        bufp->chgIData(oldp+74,((IData)((VL_MULS_QQQ(64, 
                                                     VL_EXTENDS_QI(64,32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a), 
                                                     VL_EXTENDS_QI(64,32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)) 
                                         >> 0x20U))),32);
        bufp->chgIData(oldp+75,(VL_DIV_III(32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
        bufp->chgIData(oldp+76,(VL_MODDIV_III(32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
        bufp->chgIData(oldp+77,(VL_MODDIVS_III(32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
        bufp->chgIData(oldp+78,((IData)((0x1ffffffffULL 
                                         & VL_DIVS_QQQ(33, 
                                                       (0x1ffffffffULL 
                                                        & VL_EXTENDS_QI(33,32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a)), 
                                                       (0x1ffffffffULL 
                                                        & VL_EXTENDS_QI(33,32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)))))),32);
        bufp->chgQData(oldp+79,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__buf_),64);
        bufp->chgQData(oldp+81,((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__buf_ 
                                 << 1U)),64);
        bufp->chgQData(oldp+83,((((QData)((IData)(((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT___buf_T_3)
                                                    ? 0xffffffffU
                                                    : 0U))) 
                                  << 0x1fU) | (QData)((IData)(
                                                              (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___add_res_adder___05Fin_a 
                                                               >> 1U))))),63);
        bufp->chgQData(oldp+85,(((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                  ? (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__buf_ 
                                     << 1U) : (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__buf_ 
                                               >> 1U))),64);
        bufp->chgQData(oldp+87,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_1),64);
        bufp->chgQData(oldp+89,((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_1 
                                 << 2U)),64);
        bufp->chgQData(oldp+91,((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_1 
                                 >> 2U)),62);
        bufp->chgQData(oldp+93,(((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                  ? (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_1 
                                     << 2U) : (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_1 
                                               >> 2U))),64);
        bufp->chgQData(oldp+95,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_2),64);
        bufp->chgQData(oldp+97,((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_2 
                                 << 4U)),64);
        bufp->chgQData(oldp+99,((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_2 
                                 >> 4U)),60);
        bufp->chgQData(oldp+101,(((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                   ? (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_2 
                                      << 4U) : (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_2 
                                                >> 4U))),64);
        bufp->chgQData(oldp+103,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_3),64);
        bufp->chgQData(oldp+105,((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_3 
                                  << 8U)),64);
        bufp->chgQData(oldp+107,((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_3 
                                  >> 8U)),56);
        bufp->chgQData(oldp+109,(((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                   ? (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_3 
                                      << 8U) : (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_3 
                                                >> 8U))),64);
        bufp->chgQData(oldp+111,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_4),64);
        bufp->chgQData(oldp+113,((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_4 
                                  << 0x10U)),64);
        bufp->chgQData(oldp+115,((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_4 
                                  >> 0x10U)),48);
        bufp->chgQData(oldp+117,(((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                   ? (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_4 
                                      << 0x10U) : (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_4 
                                                   >> 0x10U))),64);
        bufp->chgQData(oldp+119,(((0x10U & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)
                                   ? ((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))
                                       ? (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_4 
                                          << 0x10U)
                                       : (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_4 
                                          >> 0x10U))
                                   : vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__shift_res_s__DOT__select_4)),64);
        bufp->chgCData(oldp+121,((0x1fU & (vlSelf->Main__DOT__iram_rdata 
                                           >> 5U))),5);
        bufp->chgCData(oldp+122,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_io_rdata2_MPORT_addr),5);
        bufp->chgIData(oldp+123,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata1),32);
        bufp->chgCData(oldp+124,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr),5);
        bufp->chgIData(oldp+125,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a),32);
        bufp->chgIData(oldp+126,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b),32);
        bufp->chgBit(oldp+127,((1U & (((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_4) 
                                         >> 3U) | (
                                                   (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_4) 
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
                                           & (0xfU 
                                              == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4))) 
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
                                            & ((0xfU 
                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3)) 
                                               & ((0xfU 
                                                   == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2)) 
                                                  & (0xfU 
                                                     == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_1))))))))));
        bufp->chgCData(oldp+128,((0x1fU & vlSelf->Main__DOT__iram_rdata)),5);
        bufp->chgCData(oldp+129,((0x1fU & (vlSelf->Main__DOT__iram_rdata 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+130,((0xfffU & (vlSelf->Main__DOT__iram_rdata 
                                            >> 0xaU))),12);
        bufp->chgIData(oldp+131,((((- (IData)((1U & 
                                               (vlSelf->Main__DOT__iram_rdata 
                                                >> 0x15U)))) 
                                   << 0xcU) | (0xfffU 
                                               & (vlSelf->Main__DOT__iram_rdata 
                                                  >> 0xaU)))),32);
        bufp->chgIData(oldp+132,((((- (IData)((1U & 
                                               (vlSelf->Main__DOT__iram_rdata 
                                                >> 0x19U)))) 
                                   << 0x12U) | (0x3fffcU 
                                                & (vlSelf->Main__DOT__iram_rdata 
                                                   >> 8U)))),32);
        bufp->chgIData(oldp+133,((0xfffff000U & (vlSelf->Main__DOT__iram_rdata 
                                                 << 7U))),32);
        bufp->chgIData(oldp+134,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__imm26),32);
        bufp->chgIData(oldp+135,((~ vlSelf->Main__DOT__iram_rdata)),32);
        bufp->chgBit(oldp+136,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+137,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+138,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+139,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x14U))));
        bufp->chgBit(oldp+140,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+141,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+142,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+143,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+144,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+145,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+146,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+147,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+148,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+149,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+150,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 0x1fU)))));
        bufp->chgCData(oldp+151,(((0x40U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                                >> 0x19U)) 
                                            << 6U)) 
                                  | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_he1db0bdc__0))),7);
        bufp->chgBit(oldp+152,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 0x12U)))));
        bufp->chgCData(oldp+153,(((0x80U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                                >> 0x18U)) 
                                            << 7U)) 
                                  | ((0x40U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                                   >> 0x19U)) 
                                               << 6U)) 
                                     | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_he1db0bdc__0)))),8);
        bufp->chgBit(oldp+154,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+155,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x10U))));
        bufp->chgBit(oldp+156,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x11U))));
        bufp->chgBit(oldp+157,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0xfU))));
        bufp->chgBit(oldp+158,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x12U))));
        bufp->chgBit(oldp+159,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x13U))));
        bufp->chgBit(oldp+160,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+161,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x15U))));
        bufp->chgBit(oldp+162,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x16U))));
        bufp->chgBit(oldp+163,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x19U))));
        bufp->chgBit(oldp+164,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x17U))));
        bufp->chgBit(oldp+165,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x18U))));
        bufp->chgBit(oldp+166,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+167,((1U & (~ vlSelf->Main__DOT__iram_rdata))));
        bufp->chgBit(oldp+168,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 1U)))));
        bufp->chgBit(oldp+169,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 2U)))));
        bufp->chgBit(oldp+170,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 3U)))));
        bufp->chgBit(oldp+171,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 4U)))));
        bufp->chgBit(oldp+172,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 5U)))));
        bufp->chgBit(oldp+173,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 6U)))));
        bufp->chgBit(oldp+174,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 7U)))));
        bufp->chgBit(oldp+175,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 8U)))));
        bufp->chgBit(oldp+176,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 9U)))));
        bufp->chgBit(oldp+177,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+178,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0xbU))));
        bufp->chgBit(oldp+179,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0xcU))));
        bufp->chgBit(oldp+180,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0xdU))));
        bufp->chgBit(oldp+181,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 0xeU)))));
        bufp->chgCData(oldp+182,(((0x80U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                                >> 0x18U)) 
                                            << 7U)) 
                                  | ((0x40U & (vlSelf->Main__DOT__iram_rdata 
                                               >> 0x13U)) 
                                     | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hdf4b931c__0)))),8);
        bufp->chgSData(oldp+183,(((0x8000U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                                  >> 0x10U)) 
                                              << 0xfU)) 
                                  | ((0x4000U & ((~ 
                                                  (vlSelf->Main__DOT__iram_rdata 
                                                   >> 0x11U)) 
                                                 << 0xeU)) 
                                     | ((0x2000U & 
                                         ((~ (vlSelf->Main__DOT__iram_rdata 
                                              >> 0x12U)) 
                                          << 0xdU)) 
                                        | ((0x1000U 
                                            & (vlSelf->Main__DOT__iram_rdata 
                                               >> 7U)) 
                                           | ((0x800U 
                                               & ((~ 
                                                   (vlSelf->Main__DOT__iram_rdata 
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
        bufp->chgCData(oldp+184,(((0x80U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                                >> 8U)) 
                                            << 7U)) 
                                  | ((0x40U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                                   >> 9U)) 
                                               << 6U)) 
                                     | ((0x20U & ((~ 
                                                   (vlSelf->Main__DOT__iram_rdata 
                                                    >> 0xaU)) 
                                                  << 5U)) 
                                        | ((0x10U & 
                                            (vlSelf->Main__DOT__iram_rdata 
                                             >> 7U)) 
                                           | ((8U & 
                                               (vlSelf->Main__DOT__iram_rdata 
                                                >> 9U)) 
                                              | ((4U 
                                                  & (vlSelf->Main__DOT__iram_rdata 
                                                     >> 0xbU)) 
                                                 | ((2U 
                                                     & ((~ 
                                                         (vlSelf->Main__DOT__iram_rdata 
                                                          >> 0xeU)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (~ 
                                                          (vlSelf->Main__DOT__iram_rdata 
                                                           >> 0xfU))))))))))),8);
        bufp->chgBit(oldp+185,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+186,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+187,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+188,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x1eU))));
        bufp->chgCData(oldp+189,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_lo_lo_hi),2);
        bufp->chgSData(oldp+190,((((IData)((0x1ffU 
                                            == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_66))) 
                                   << 8U) | (((IData)(
                                                      (0x1ffU 
                                                       == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_72))) 
                                              << 7U) 
                                             | (((IData)(
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
        bufp->chgCData(oldp+191,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5),3);
        bufp->chgCData(oldp+192,((((IData)((0x1ffU 
                                            == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_72))) 
                                   << 6U) | (((IData)(
                                                      (0x1ffU 
                                                       == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_74))) 
                                              << 5U) 
                                             | (((IData)(
                                                         (0x7fU 
                                                          == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_92))) 
                                                 << 4U) 
                                                | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h6d60535a__0))))),7);
        bufp->chgCData(oldp+193,((((IData)((0x1ffU 
                                            == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_72))) 
                                   << 7U) | (((IData)(
                                                      ((0x400000U 
                                                        == 
                                                        (0xc00000U 
                                                         & vlSelf->Main__DOT__iram_rdata)) 
                                                       & (0xffU 
                                                          == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_hf55cf174__0)))) 
                                              << 6U) 
                                             | (((IData)(
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
        bufp->chgCData(oldp+194,(((((vlSelf->Main__DOT__iram_rdata 
                                     >> 0xfU) & (0xffffU 
                                                 == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_42))) 
                                   << 5U) | ((((vlSelf->Main__DOT__iram_rdata 
                                                >> 0xfU) 
                                               & (0x7fffU 
                                                  == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_46))) 
                                              << 4U) 
                                             | (((IData)(
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
        bufp->chgCData(oldp+195,((((IData)((0U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5))) 
                                   << 7U) | (((IData)(
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
                                                               != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))))))))),8);
        bufp->chgIData(oldp+196,((((IData)((0x7fffU 
                                            == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_46))) 
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
        bufp->chgCData(oldp+197,(((0x80U & ((~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5)))) 
                                            << 7U)) 
                                  | (((IData)((0U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_lo_lo_hi))) 
                                      << 6U) | ((0x20U 
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
                                                               != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))))))))),8);
        bufp->chgIData(oldp+198,((((IData)((0x7fffU 
                                            == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_46))) 
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
        bufp->chgCData(oldp+199,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type),4);
        bufp->chgIData(oldp+200,(((2U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))
                                   ? (0x1fU & (vlSelf->Main__DOT__iram_rdata 
                                               >> 0xaU))
                                   : ((3U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))
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
                                           : ((4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))
                                               ? 4U
                                               : ((5U 
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
                                                     : 0U)))))))),32);
        bufp->chgBit(oldp+201,((((0x10U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)) 
                                 & (4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))) 
                                | ((0U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we)) 
                                   | (0xaU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))))));
        bufp->chgBit(oldp+202,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__rj_eq_rd));
        bufp->chgQData(oldp+203,((((QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1_out_cout)) 
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
        bufp->chgBit(oldp+205,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__slt_res));
        bufp->chgBit(oldp+206,((1U & (~ (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_adder___DOT__add_1_out_cout)))));
        bufp->chgBit(oldp+207,(((0x10U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)) 
                                | ((0x11U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)) 
                                   | (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))))));
        bufp->chgSData(oldp+208,((0xffffU & vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a)),16);
        bufp->chgSData(oldp+209,((0xffffU & vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b)),16);
        bufp->chgSData(oldp+210,((((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4) 
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
                                              | (2U 
                                                 & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1) 
                                                    << 1U)))))))),16);
        bufp->chgBit(oldp+211,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT___c_T_16));
        bufp->chgSData(oldp+212,((vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_a 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+213,((vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___05Fin_b 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+214,((((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4) 
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
        bufp->chgCData(oldp+215,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_2),4);
        bufp->chgCData(oldp+216,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2),4);
        bufp->chgBit(oldp+217,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F1));
        bufp->chgCData(oldp+218,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1),4);
        bufp->chgCData(oldp+219,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_1),4);
        bufp->chgBit(oldp+220,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F0));
        bufp->chgCData(oldp+221,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_4),4);
        bufp->chgCData(oldp+222,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4),4);
        bufp->chgBit(oldp+223,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F3));
        bufp->chgCData(oldp+224,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_3),4);
        bufp->chgCData(oldp+225,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_3),4);
        bufp->chgBit(oldp+226,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F2));
        bufp->chgBit(oldp+227,((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2))));
        bufp->chgBit(oldp+228,((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_1))));
        bufp->chgBit(oldp+229,((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4))));
        bufp->chgBit(oldp+230,((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_3))));
        bufp->chgBit(oldp+231,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry___05F2));
        bufp->chgBit(oldp+232,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry___05F3));
        bufp->chgCData(oldp+233,((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry___05F3) 
                                   << 3U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry___05F2) 
                                              << 2U) 
                                             | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F0) 
                                                << 1U)))),4);
        bufp->chgBit(oldp+234,((1U & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1))));
        bufp->chgBit(oldp+235,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_1_2));
        bufp->chgBit(oldp+236,((1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1) 
                                       >> 2U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_1_2) 
                                                 & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_1) 
                                                    >> 2U))))));
        bufp->chgCData(oldp+237,(((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1) 
                                          << 1U) | 
                                         (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_1_2) 
                                           << 3U) & 
                                          ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_1) 
                                           << 1U)))) 
                                  | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_1_2) 
                                      << 2U) | (2U 
                                                & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1) 
                                                   << 1U))))),4);
        bufp->chgCData(oldp+238,(((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_1) 
                                  ^ ((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1) 
                                             << 1U) 
                                            | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_1_2) 
                                                << 3U) 
                                               & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_1) 
                                                  << 1U)))) 
                                     | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_1_2) 
                                         << 2U) | (2U 
                                                   & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_1) 
                                                      << 1U)))))),4);
        bufp->chgBit(oldp+239,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_1));
        bufp->chgBit(oldp+240,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_2));
        bufp->chgBit(oldp+241,((1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_2) 
                                       >> 2U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_2) 
                                                 & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2) 
                                                    >> 2U))))));
        bufp->chgCData(oldp+242,(((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_2) 
                                          << 1U) | 
                                         (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_2) 
                                           << 3U) & 
                                          ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2) 
                                           << 1U)))) 
                                  | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_2) 
                                      << 2U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_1) 
                                                 << 1U) 
                                                | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F0))))),4);
        bufp->chgCData(oldp+243,(((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2) 
                                  ^ ((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_2) 
                                             << 1U) 
                                            | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_2) 
                                                << 3U) 
                                               & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2) 
                                                  << 1U)))) 
                                     | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_2) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_2_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g___05F0)))))),4);
        bufp->chgBit(oldp+244,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_1));
        bufp->chgBit(oldp+245,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_2));
        bufp->chgBit(oldp+246,((1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_3) 
                                       >> 2U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_2) 
                                                 & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_3) 
                                                    >> 2U))))));
        bufp->chgCData(oldp+247,(((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_3) 
                                          << 1U) | 
                                         (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_2) 
                                           << 3U) & 
                                          ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_3) 
                                           << 1U)))) 
                                  | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_2) 
                                      << 2U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_1) 
                                                 << 1U) 
                                                | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry___05F2))))),4);
        bufp->chgCData(oldp+248,(((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_3) 
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
                                                   | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry___05F2)))))),4);
        bufp->chgBit(oldp+249,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_1));
        bufp->chgBit(oldp+250,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_2));
        bufp->chgBit(oldp+251,((1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_4) 
                                       >> 2U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_2) 
                                                 & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4) 
                                                    >> 2U))))));
        bufp->chgCData(oldp+252,(((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_4) 
                                          << 1U) | 
                                         (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_2) 
                                           << 3U) & 
                                          ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4) 
                                           << 1U)))) 
                                  | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_2) 
                                      << 2U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_1) 
                                                 << 1U) 
                                                | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry___05F3))))),4);
        bufp->chgCData(oldp+253,(((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4) 
                                  ^ ((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_4) 
                                             << 1U) 
                                            | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_2) 
                                                << 3U) 
                                               & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4) 
                                                  << 1U)))) 
                                     | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_2) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_4_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry___05F3)))))),4);
        bufp->chgCData(oldp+254,(((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_2) 
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
                                               << 1U))))))),8);
        bufp->chgCData(oldp+255,(((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__p_4) 
                                    << 4U) ^ ((0x80U 
                                               & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__g_4) 
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
                                            << 2U) 
                                           | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry_3_1) 
                                               << 1U) 
                                              | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT__c_carry___05F2))))))),8);
        bufp->chgCData(oldp+256,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_2),4);
        bufp->chgCData(oldp+257,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2),4);
        bufp->chgBit(oldp+258,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g___05F1));
        bufp->chgCData(oldp+259,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_1),4);
        bufp->chgCData(oldp+260,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_1),4);
        bufp->chgBit(oldp+261,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g___05F0));
        bufp->chgCData(oldp+262,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_4),4);
        bufp->chgCData(oldp+263,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4),4);
        bufp->chgBit(oldp+264,((1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_4) 
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
        bufp->chgCData(oldp+265,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_3),4);
        bufp->chgCData(oldp+266,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3),4);
        bufp->chgBit(oldp+267,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g___05F2));
        bufp->chgBit(oldp+268,((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2))));
        bufp->chgBit(oldp+269,((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_1))));
        bufp->chgBit(oldp+270,((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4))));
        bufp->chgBit(oldp+271,((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3))));
        bufp->chgBit(oldp+272,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F1));
        bufp->chgBit(oldp+273,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F2));
        bufp->chgBit(oldp+274,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F3));
        bufp->chgCData(oldp+275,((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F3) 
                                   << 3U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F2) 
                                              << 2U) 
                                             | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F1) 
                                                 << 1U) 
                                                | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT___c_T_16))))),4);
        bufp->chgBit(oldp+276,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_1));
        bufp->chgBit(oldp+277,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_2));
        bufp->chgBit(oldp+278,((1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_1) 
                                       >> 2U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_2) 
                                                 & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_1) 
                                                    >> 2U))))));
        bufp->chgCData(oldp+279,(((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_1) 
                                          << 1U) | 
                                         (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_2) 
                                           << 3U) & 
                                          ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_1) 
                                           << 1U)))) 
                                  | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_2) 
                                      << 2U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_1_1) 
                                                 << 1U) 
                                                | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT___c_T_16))))),4);
        bufp->chgCData(oldp+280,(((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_1) 
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
                                                   | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT___c_T_16)))))),4);
        bufp->chgBit(oldp+281,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_1));
        bufp->chgBit(oldp+282,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_2));
        bufp->chgBit(oldp+283,((1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_2) 
                                       >> 2U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_2) 
                                                 & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2) 
                                                    >> 2U))))));
        bufp->chgCData(oldp+284,(((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_2) 
                                          << 1U) | 
                                         (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_2) 
                                           << 3U) & 
                                          ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2) 
                                           << 1U)))) 
                                  | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_2) 
                                      << 2U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_1) 
                                                 << 1U) 
                                                | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F1))))),4);
        bufp->chgCData(oldp+285,(((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2) 
                                  ^ ((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_2) 
                                             << 1U) 
                                            | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_2) 
                                                << 3U) 
                                               & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2) 
                                                  << 1U)))) 
                                     | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_2) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_2_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F1)))))),4);
        bufp->chgBit(oldp+286,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_1));
        bufp->chgBit(oldp+287,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_2));
        bufp->chgBit(oldp+288,((1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_3) 
                                       >> 2U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_2) 
                                                 & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3) 
                                                    >> 2U))))));
        bufp->chgCData(oldp+289,(((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_3) 
                                          << 1U) | 
                                         (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_2) 
                                           << 3U) & 
                                          ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3) 
                                           << 1U)))) 
                                  | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_2) 
                                      << 2U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_1) 
                                                 << 1U) 
                                                | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F2))))),4);
        bufp->chgCData(oldp+290,(((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_3) 
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
                                                   | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F2)))))),4);
        bufp->chgBit(oldp+291,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_1));
        bufp->chgBit(oldp+292,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_2));
        bufp->chgBit(oldp+293,((1U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_4) 
                                       >> 2U) | ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_2) 
                                                 & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4) 
                                                    >> 2U))))));
        bufp->chgCData(oldp+294,(((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_4) 
                                          << 1U) | 
                                         (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_2) 
                                           << 3U) & 
                                          ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4) 
                                           << 1U)))) 
                                  | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_2) 
                                      << 2U) | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_1) 
                                                 << 1U) 
                                                | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F3))))),4);
        bufp->chgCData(oldp+295,(((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4) 
                                  ^ ((8U & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_4) 
                                             << 1U) 
                                            | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_2) 
                                                << 3U) 
                                               & ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4) 
                                                  << 1U)))) 
                                     | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_2) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_4_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F3)))))),4);
        bufp->chgCData(oldp+296,(((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_2) 
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
                                              | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_0__DOT___c_T_16))))))),8);
        bufp->chgCData(oldp+297,(((((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__p_4) 
                                    << 4U) ^ ((0x80U 
                                               & (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__g_4) 
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
                                            << 2U) 
                                           | (((IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry_3_1) 
                                               << 1U) 
                                              | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__br_target_adder___DOT__add_1__DOT__c_carry___05F2))))))),8);
        bufp->chgIData(oldp+298,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[0]),32);
        bufp->chgIData(oldp+299,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[1]),32);
        bufp->chgIData(oldp+300,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[2]),32);
        bufp->chgIData(oldp+301,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[3]),32);
        bufp->chgIData(oldp+302,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[4]),32);
        bufp->chgIData(oldp+303,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[5]),32);
        bufp->chgIData(oldp+304,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[6]),32);
        bufp->chgIData(oldp+305,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[7]),32);
        bufp->chgIData(oldp+306,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[8]),32);
        bufp->chgIData(oldp+307,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[9]),32);
        bufp->chgIData(oldp+308,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[10]),32);
        bufp->chgIData(oldp+309,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[11]),32);
        bufp->chgIData(oldp+310,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[12]),32);
        bufp->chgIData(oldp+311,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[13]),32);
        bufp->chgIData(oldp+312,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[14]),32);
        bufp->chgIData(oldp+313,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[15]),32);
        bufp->chgIData(oldp+314,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[16]),32);
        bufp->chgIData(oldp+315,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[17]),32);
        bufp->chgIData(oldp+316,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[18]),32);
        bufp->chgIData(oldp+317,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[19]),32);
        bufp->chgIData(oldp+318,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[20]),32);
        bufp->chgIData(oldp+319,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[21]),32);
        bufp->chgIData(oldp+320,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[22]),32);
        bufp->chgIData(oldp+321,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[23]),32);
        bufp->chgIData(oldp+322,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[24]),32);
        bufp->chgIData(oldp+323,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[25]),32);
        bufp->chgIData(oldp+324,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[26]),32);
        bufp->chgIData(oldp+325,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[27]),32);
        bufp->chgIData(oldp+326,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[28]),32);
        bufp->chgIData(oldp+327,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[29]),32);
        bufp->chgIData(oldp+328,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[30]),32);
        bufp->chgIData(oldp+329,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[31]),32);
        bufp->chgIData(oldp+330,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_io_rdata1_MPORT_data),32);
        bufp->chgIData(oldp+331,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_io_rdata2_MPORT_data),32);
        bufp->chgIData(oldp+332,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [1U]),32);
        bufp->chgIData(oldp+333,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [2U]),32);
        bufp->chgIData(oldp+334,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [3U]),32);
        bufp->chgIData(oldp+335,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [4U]),32);
        bufp->chgIData(oldp+336,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [5U]),32);
        bufp->chgIData(oldp+337,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [6U]),32);
        bufp->chgIData(oldp+338,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [7U]),32);
        bufp->chgIData(oldp+339,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [8U]),32);
        bufp->chgIData(oldp+340,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [9U]),32);
        bufp->chgIData(oldp+341,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0xaU]),32);
        bufp->chgIData(oldp+342,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0xbU]),32);
        bufp->chgIData(oldp+343,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0xcU]),32);
        bufp->chgIData(oldp+344,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0xdU]),32);
        bufp->chgIData(oldp+345,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0xeU]),32);
        bufp->chgIData(oldp+346,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0xfU]),32);
        bufp->chgIData(oldp+347,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x10U]),32);
        bufp->chgIData(oldp+348,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x11U]),32);
        bufp->chgIData(oldp+349,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x12U]),32);
        bufp->chgIData(oldp+350,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x13U]),32);
        bufp->chgIData(oldp+351,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x14U]),32);
        bufp->chgIData(oldp+352,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x15U]),32);
        bufp->chgIData(oldp+353,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x16U]),32);
        bufp->chgIData(oldp+354,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x17U]),32);
        bufp->chgIData(oldp+355,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x18U]),32);
        bufp->chgIData(oldp+356,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x19U]),32);
        bufp->chgIData(oldp+357,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x1aU]),32);
        bufp->chgIData(oldp+358,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x1bU]),32);
        bufp->chgIData(oldp+359,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x1cU]),32);
        bufp->chgIData(oldp+360,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x1dU]),32);
        bufp->chgIData(oldp+361,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x1eU]),32);
        bufp->chgIData(oldp+362,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x1fU]),32);
        bufp->chgIData(oldp+363,((((1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [1U])),32);
        bufp->chgIData(oldp+364,((((2U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [2U])),32);
        bufp->chgIData(oldp+365,((((3U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [3U])),32);
        bufp->chgIData(oldp+366,((((4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [4U])),32);
        bufp->chgIData(oldp+367,((((5U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [5U])),32);
        bufp->chgIData(oldp+368,((((6U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [6U])),32);
        bufp->chgIData(oldp+369,((((7U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [7U])),32);
        bufp->chgIData(oldp+370,((((8U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [8U])),32);
        bufp->chgIData(oldp+371,((((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [9U])),32);
        bufp->chgIData(oldp+372,((((0xaU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0xaU])),32);
        bufp->chgIData(oldp+373,((((0xbU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0xbU])),32);
        bufp->chgIData(oldp+374,((((0xcU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0xcU])),32);
        bufp->chgIData(oldp+375,((((0xdU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0xdU])),32);
        bufp->chgIData(oldp+376,((((0xeU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0xeU])),32);
        bufp->chgIData(oldp+377,((((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0xfU])),32);
        bufp->chgIData(oldp+378,((((0x10U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x10U])),32);
        bufp->chgIData(oldp+379,((((0x11U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x11U])),32);
        bufp->chgIData(oldp+380,((((0x12U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x12U])),32);
        bufp->chgIData(oldp+381,((((0x13U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x13U])),32);
        bufp->chgIData(oldp+382,((((0x14U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x14U])),32);
        bufp->chgIData(oldp+383,((((0x15U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x15U])),32);
        bufp->chgIData(oldp+384,((((0x16U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x16U])),32);
        bufp->chgIData(oldp+385,((((0x17U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x17U])),32);
        bufp->chgIData(oldp+386,((((0x18U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x18U])),32);
        bufp->chgIData(oldp+387,((((0x19U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x19U])),32);
        bufp->chgIData(oldp+388,((((0x1aU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x1aU])),32);
        bufp->chgIData(oldp+389,((((0x1bU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x1bU])),32);
        bufp->chgIData(oldp+390,((((0x1cU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x1cU])),32);
        bufp->chgIData(oldp+391,((((0x1dU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x1dU])),32);
        bufp->chgIData(oldp+392,((((0x1eU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x1eU])),32);
        bufp->chgIData(oldp+393,((((0x1fU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x1fU])),32);
        bufp->chgIData(oldp+394,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0]),32);
        bufp->chgIData(oldp+395,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[1]),32);
        bufp->chgIData(oldp+396,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[2]),32);
        bufp->chgIData(oldp+397,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[3]),32);
        bufp->chgIData(oldp+398,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[4]),32);
        bufp->chgIData(oldp+399,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[5]),32);
        bufp->chgIData(oldp+400,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[6]),32);
        bufp->chgIData(oldp+401,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[7]),32);
        bufp->chgIData(oldp+402,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[8]),32);
        bufp->chgIData(oldp+403,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[9]),32);
        bufp->chgIData(oldp+404,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[10]),32);
        bufp->chgIData(oldp+405,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[11]),32);
        bufp->chgIData(oldp+406,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[12]),32);
        bufp->chgIData(oldp+407,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[13]),32);
        bufp->chgIData(oldp+408,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[14]),32);
        bufp->chgIData(oldp+409,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[15]),32);
        bufp->chgIData(oldp+410,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[16]),32);
        bufp->chgIData(oldp+411,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[17]),32);
        bufp->chgIData(oldp+412,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[18]),32);
        bufp->chgIData(oldp+413,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[19]),32);
        bufp->chgIData(oldp+414,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[20]),32);
        bufp->chgIData(oldp+415,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[21]),32);
        bufp->chgIData(oldp+416,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[22]),32);
        bufp->chgIData(oldp+417,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[23]),32);
        bufp->chgIData(oldp+418,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[24]),32);
        bufp->chgIData(oldp+419,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[25]),32);
        bufp->chgIData(oldp+420,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[26]),32);
        bufp->chgIData(oldp+421,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[27]),32);
        bufp->chgIData(oldp+422,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[28]),32);
        bufp->chgIData(oldp+423,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[29]),32);
        bufp->chgIData(oldp+424,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[30]),32);
        bufp->chgIData(oldp+425,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[31]),32);
        bufp->chgIData(oldp+426,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__csr[0]),32);
        bufp->chgIData(oldp+427,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__csr[1]),32);
        bufp->chgIData(oldp+428,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__csr[2]),32);
        bufp->chgIData(oldp+429,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__csr[3]),32);
        bufp->chgIData(oldp+430,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__csr[4]),32);
        bufp->chgIData(oldp+431,(((8U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
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
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->Main__DOT__dram_rdata 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->Main__DOT__dram_rdata))
                                                   : 0xdeadU)))))),32);
        bufp->chgIData(oldp+432,(vlSelf->Main__DOT__cpucore__DOT__csr__DOT__crmd),32);
        bufp->chgIData(oldp+433,(vlSelf->Main__DOT__cpucore__DOT__csr__DOT__prmd),32);
        bufp->chgIData(oldp+434,(vlSelf->Main__DOT__cpucore__DOT__csr__DOT__era),32);
        bufp->chgIData(oldp+435,(vlSelf->Main__DOT__cpucore__DOT__csr__DOT__estat),32);
        bufp->chgIData(oldp+436,(vlSelf->Main__DOT__cpucore__DOT__csr__DOT__eentry),32);
        bufp->chgIData(oldp+437,(((IData)(4U) + vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc)),32);
    }
    bufp->chgBit(oldp+438,(vlSelf->clock));
    bufp->chgBit(oldp+439,(vlSelf->reset));
    bufp->chgBit(oldp+440,((1U & (~ (IData)(vlSelf->reset)))));
}

void VMain___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root__trace_cleanup\n"); );
    // Init
    VMain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMain___024root*>(voidSelf);
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
