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
        bufp->chgIData(oldp+10,(vlSelf->Main__DOT__cpucore__DOT__pIF_br_target),32);
        bufp->chgIData(oldp+11,(((IData)(vlSelf->Main__DOT__cpucore__DOT__pIF_br_taken)
                                  ? vlSelf->Main__DOT__cpucore__DOT__pIF_br_target
                                  : ((IData)(4U) + vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc))),32);
        bufp->chgIData(oldp+12,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1),32);
        bufp->chgIData(oldp+13,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2),32);
        bufp->chgCData(oldp+14,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op),5);
        bufp->chgCData(oldp+15,(((0xeU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                  ? 1U : (0x1fU & vlSelf->Main__DOT__iram_rdata))),5);
        bufp->chgBit(oldp+16,((0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T)));
        bufp->chgCData(oldp+17,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we),2);
        bufp->chgCData(oldp+18,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name),5);
        bufp->chgBit(oldp+19,((8U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))));
        bufp->chgIData(oldp+20,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data),32);
        bufp->chgBit(oldp+21,((1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we))));
        bufp->chgBit(oldp+22,((1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+23,((2U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+24,((3U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+25,((4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+26,((5U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+27,((6U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+28,((7U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+29,((8U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+30,((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+31,((0xaU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+32,((0xbU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+33,((0xcU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+34,((0xdU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+35,((0xeU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+36,((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+37,((0x10U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+38,((0x12U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+39,((0x11U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+40,((0x13U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+41,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_sub));
        bufp->chgQData(oldp+42,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_res),33);
        bufp->chgBit(oldp+44,((1U & (((~ (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2 
                                          >> 0x1fU)) 
                                      & (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1 
                                         >> 0x1fU)) 
                                     | ((~ ((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1 
                                             ^ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2) 
                                            >> 0x1fU)) 
                                        & (IData)((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_res 
                                                   >> 0x1fU)))))));
        bufp->chgBit(oldp+45,((1U & (~ (IData)((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_res 
                                                >> 0x20U))))));
        bufp->chgIData(oldp+46,((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1 
                                 & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
        bufp->chgIData(oldp+47,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__or_res),32);
        bufp->chgIData(oldp+48,((~ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__or_res)),32);
        bufp->chgIData(oldp+49,((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1 
                                 ^ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
        bufp->chgQData(oldp+50,((0x7fffffffffffffffULL 
                                 & ((QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1)) 
                                    << (0x1fU & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)))),63);
        bufp->chgQData(oldp+52,((((QData)((IData)((
                                                   ((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1 
                                                     >> 0x1fU) 
                                                    & (0xbU 
                                                       == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op)))
                                                    ? 0xffffffffU
                                                    : 0U))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1)))),64);
        bufp->chgQData(oldp+54,(((((QData)((IData)(
                                                   (((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1 
                                                      >> 0x1fU) 
                                                     & (0xbU 
                                                        == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op)))
                                                     ? 0xffffffffU
                                                     : 0U))) 
                                   << 0x20U) | (QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1))) 
                                 >> (0x1fU & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2))),64);
        bufp->chgQData(oldp+56,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__mul_pre),64);
        bufp->chgIData(oldp+58,((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__mul_pre)),32);
        bufp->chgIData(oldp+59,((IData)((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__mul_pre 
                                         >> 0x20U))),32);
        bufp->chgIData(oldp+60,((IData)((VL_MULS_QQQ(64, 
                                                     VL_EXTENDS_QI(64,32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1), 
                                                     VL_EXTENDS_QI(64,32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)) 
                                         >> 0x20U))),32);
        bufp->chgIData(oldp+61,(VL_DIV_III(32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
        bufp->chgIData(oldp+62,(VL_MODDIV_III(32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
        bufp->chgIData(oldp+63,(VL_MODDIVS_III(32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
        bufp->chgIData(oldp+64,((IData)((0x1ffffffffULL 
                                         & VL_DIVS_QQQ(33, 
                                                       (0x1ffffffffULL 
                                                        & VL_EXTENDS_QI(33,32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src1)), 
                                                       (0x1ffffffffULL 
                                                        & VL_EXTENDS_QI(33,32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)))))),32);
        bufp->chgCData(oldp+65,((0x1fU & (vlSelf->Main__DOT__iram_rdata 
                                          >> 5U))),5);
        bufp->chgCData(oldp+66,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_io_rdata2_MPORT_addr),5);
        bufp->chgIData(oldp+67,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata1),32);
        bufp->chgCData(oldp+68,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr),5);
        bufp->chgCData(oldp+69,((0x1fU & vlSelf->Main__DOT__iram_rdata)),5);
        bufp->chgCData(oldp+70,((0x1fU & (vlSelf->Main__DOT__iram_rdata 
                                          >> 0xaU))),5);
        bufp->chgSData(oldp+71,((0xfffU & (vlSelf->Main__DOT__iram_rdata 
                                           >> 0xaU))),12);
        bufp->chgIData(oldp+72,((((- (IData)((1U & 
                                              (vlSelf->Main__DOT__iram_rdata 
                                               >> 0x15U)))) 
                                  << 0xcU) | (0xfffU 
                                              & (vlSelf->Main__DOT__iram_rdata 
                                                 >> 0xaU)))),32);
        bufp->chgIData(oldp+73,((((- (IData)((1U & 
                                              (vlSelf->Main__DOT__iram_rdata 
                                               >> 0x19U)))) 
                                  << 0x12U) | (0x3fffcU 
                                               & (vlSelf->Main__DOT__iram_rdata 
                                                  >> 8U)))),32);
        bufp->chgIData(oldp+74,((0xfffff000U & (vlSelf->Main__DOT__iram_rdata 
                                                << 7U))),32);
        bufp->chgIData(oldp+75,((((- (IData)((1U & 
                                              (vlSelf->Main__DOT__iram_rdata 
                                               >> 9U)))) 
                                  << 0x1cU) | ((0xffc0000U 
                                                & (vlSelf->Main__DOT__iram_rdata 
                                                   << 0x12U)) 
                                               | (0x3fffcU 
                                                  & (vlSelf->Main__DOT__iram_rdata 
                                                     >> 8U))))),32);
        bufp->chgIData(oldp+76,((~ vlSelf->Main__DOT__iram_rdata)),32);
        bufp->chgBit(oldp+77,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0xfU)))));
        bufp->chgBit(oldp+78,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x10U)))));
        bufp->chgBit(oldp+79,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x11U)))));
        bufp->chgBit(oldp+80,((1U & (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x14U))));
        bufp->chgBit(oldp+81,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x15U)))));
        bufp->chgBit(oldp+82,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x16U)))));
        bufp->chgBit(oldp+83,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x17U)))));
        bufp->chgBit(oldp+84,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x18U)))));
        bufp->chgBit(oldp+85,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x19U)))));
        bufp->chgBit(oldp+86,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x1aU)))));
        bufp->chgBit(oldp+87,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x1bU)))));
        bufp->chgBit(oldp+88,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x1cU)))));
        bufp->chgBit(oldp+89,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x1dU)))));
        bufp->chgBit(oldp+90,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x1eU)))));
        bufp->chgBit(oldp+91,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x1fU)))));
        bufp->chgCData(oldp+92,(((0x40U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                               >> 0x19U)) 
                                           << 6U)) 
                                 | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_he1db0bdc__0))),7);
        bufp->chgBit(oldp+93,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x12U)))));
        bufp->chgCData(oldp+94,(((0x80U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                               >> 0x18U)) 
                                           << 7U)) 
                                 | ((0x40U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                                  >> 0x19U)) 
                                              << 6U)) 
                                    | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_he1db0bdc__0)))),8);
        bufp->chgBit(oldp+95,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x13U)))));
        bufp->chgBit(oldp+96,((1U & (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x10U))));
        bufp->chgBit(oldp+97,((1U & (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x11U))));
        bufp->chgBit(oldp+98,((1U & (vlSelf->Main__DOT__iram_rdata 
                                     >> 0xfU))));
        bufp->chgBit(oldp+99,((1U & (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x12U))));
        bufp->chgBit(oldp+100,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x13U))));
        bufp->chgBit(oldp+101,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+102,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x15U))));
        bufp->chgBit(oldp+103,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x16U))));
        bufp->chgBit(oldp+104,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x19U))));
        bufp->chgBit(oldp+105,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x17U))));
        bufp->chgBit(oldp+106,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x18U))));
        bufp->chgBit(oldp+107,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+108,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+109,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+110,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+111,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x1eU))));
        bufp->chgCData(oldp+112,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_lo_lo_hi),2);
        bufp->chgCData(oldp+113,((((IData)((0x1ffU 
                                            == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_64))) 
                                   << 7U) | (((IData)(
                                                      (0x1ffU 
                                                       == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_70))) 
                                              << 6U) 
                                             | (((IData)(
                                                         (0x1ffU 
                                                          == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_72))) 
                                                 << 5U) 
                                                | (((IData)(
                                                            (0x3fU 
                                                             == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_82))) 
                                                    << 4U) 
                                                   | (((IData)(
                                                               (0xffU 
                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_88))) 
                                                       << 3U) 
                                                      | (((IData)(
                                                                  (0x1ffU 
                                                                   == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_94))) 
                                                          << 2U) 
                                                         | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h360c0578__0)))))))),8);
        bufp->chgCData(oldp+114,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5),3);
        bufp->chgCData(oldp+115,((((IData)((0x1ffU 
                                            == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_70))) 
                                   << 6U) | (((IData)(
                                                      (0x1ffU 
                                                       == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_72))) 
                                              << 5U) 
                                             | (((IData)(
                                                         (0x7fU 
                                                          == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_86))) 
                                                 << 4U) 
                                                | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h6d60535a__0))))),7);
        bufp->chgCData(oldp+116,((((IData)((0x1ffU 
                                            == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_70))) 
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
                                                          == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_86))) 
                                                 << 5U) 
                                                | (((IData)(
                                                            (0xffU 
                                                             == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_88))) 
                                                    << 4U) 
                                                   | (((IData)(
                                                               (0xffU 
                                                                == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_90))) 
                                                       << 3U) 
                                                      | (((IData)(
                                                                  (0xffU 
                                                                   == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_92))) 
                                                          << 2U) 
                                                         | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_h360c0578__0)))))))),8);
        bufp->chgCData(oldp+117,(((((vlSelf->Main__DOT__iram_rdata 
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
                                                           == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_64))) 
                                                       << 1U) 
                                                      | (0x3ffU 
                                                         == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_78)))))))),6);
        bufp->chgCData(oldp+118,((((IData)((0U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5))) 
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
        bufp->chgIData(oldp+119,((((IData)((0x7fffU 
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
        bufp->chgCData(oldp+120,(((0x80U & ((~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5)))) 
                                            << 7U)) 
                                  | (((IData)((0U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_lo_lo_hi))) 
                                      << 6U) | ((0x20U 
                                                 & ((~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_10)))) 
                                                    << 5U)) 
                                                | (((IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_8))) 
                                                    << 4U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_6))) 
                                                       << 3U) 
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
        bufp->chgIData(oldp+121,((((IData)((0x7fffU 
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
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_8))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_6))) 
                                                                                << 3U) 
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
        bufp->chgCData(oldp+122,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type),4);
        bufp->chgIData(oldp+123,(((2U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))
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
        bufp->chgBit(oldp+124,((((0x10U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)) 
                                 & (4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))) 
                                | (0U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we)))));
        bufp->chgBit(oldp+125,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__rj_eq_rd));
        bufp->chgQData(oldp+126,((0x1ffffffffULL & 
                                  (1ULL + vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_T_1))),33);
        bufp->chgBit(oldp+128,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__slt_res));
        bufp->chgBit(oldp+129,((1U & (~ (IData)((1ULL 
                                                 & ((1ULL 
                                                     + vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_T_1) 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+130,(((0x10U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)) 
                                | ((0x11U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)) 
                                   | (0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))))));
        bufp->chgIData(oldp+131,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[0]),32);
        bufp->chgIData(oldp+132,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[1]),32);
        bufp->chgIData(oldp+133,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[2]),32);
        bufp->chgIData(oldp+134,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[3]),32);
        bufp->chgIData(oldp+135,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[4]),32);
        bufp->chgIData(oldp+136,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[5]),32);
        bufp->chgIData(oldp+137,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[6]),32);
        bufp->chgIData(oldp+138,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[7]),32);
        bufp->chgIData(oldp+139,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[8]),32);
        bufp->chgIData(oldp+140,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[9]),32);
        bufp->chgIData(oldp+141,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[10]),32);
        bufp->chgIData(oldp+142,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[11]),32);
        bufp->chgIData(oldp+143,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[12]),32);
        bufp->chgIData(oldp+144,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[13]),32);
        bufp->chgIData(oldp+145,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[14]),32);
        bufp->chgIData(oldp+146,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[15]),32);
        bufp->chgIData(oldp+147,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[16]),32);
        bufp->chgIData(oldp+148,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[17]),32);
        bufp->chgIData(oldp+149,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[18]),32);
        bufp->chgIData(oldp+150,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[19]),32);
        bufp->chgIData(oldp+151,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[20]),32);
        bufp->chgIData(oldp+152,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[21]),32);
        bufp->chgIData(oldp+153,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[22]),32);
        bufp->chgIData(oldp+154,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[23]),32);
        bufp->chgIData(oldp+155,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[24]),32);
        bufp->chgIData(oldp+156,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[25]),32);
        bufp->chgIData(oldp+157,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[26]),32);
        bufp->chgIData(oldp+158,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[27]),32);
        bufp->chgIData(oldp+159,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[28]),32);
        bufp->chgIData(oldp+160,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[29]),32);
        bufp->chgIData(oldp+161,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[30]),32);
        bufp->chgIData(oldp+162,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[31]),32);
        bufp->chgIData(oldp+163,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_io_rdata1_MPORT_data),32);
        bufp->chgIData(oldp+164,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_io_rdata2_MPORT_data),32);
        bufp->chgIData(oldp+165,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [1U]),32);
        bufp->chgIData(oldp+166,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [2U]),32);
        bufp->chgIData(oldp+167,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [3U]),32);
        bufp->chgIData(oldp+168,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [4U]),32);
        bufp->chgIData(oldp+169,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [5U]),32);
        bufp->chgIData(oldp+170,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [6U]),32);
        bufp->chgIData(oldp+171,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [7U]),32);
        bufp->chgIData(oldp+172,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [8U]),32);
        bufp->chgIData(oldp+173,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [9U]),32);
        bufp->chgIData(oldp+174,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0xaU]),32);
        bufp->chgIData(oldp+175,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0xbU]),32);
        bufp->chgIData(oldp+176,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0xcU]),32);
        bufp->chgIData(oldp+177,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0xdU]),32);
        bufp->chgIData(oldp+178,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0xeU]),32);
        bufp->chgIData(oldp+179,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0xfU]),32);
        bufp->chgIData(oldp+180,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x10U]),32);
        bufp->chgIData(oldp+181,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x11U]),32);
        bufp->chgIData(oldp+182,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x12U]),32);
        bufp->chgIData(oldp+183,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x13U]),32);
        bufp->chgIData(oldp+184,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x14U]),32);
        bufp->chgIData(oldp+185,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x15U]),32);
        bufp->chgIData(oldp+186,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x16U]),32);
        bufp->chgIData(oldp+187,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x17U]),32);
        bufp->chgIData(oldp+188,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x18U]),32);
        bufp->chgIData(oldp+189,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x19U]),32);
        bufp->chgIData(oldp+190,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x1aU]),32);
        bufp->chgIData(oldp+191,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x1bU]),32);
        bufp->chgIData(oldp+192,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x1cU]),32);
        bufp->chgIData(oldp+193,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x1dU]),32);
        bufp->chgIData(oldp+194,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x1eU]),32);
        bufp->chgIData(oldp+195,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x1fU]),32);
        bufp->chgIData(oldp+196,((((1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [1U])),32);
        bufp->chgIData(oldp+197,((((2U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [2U])),32);
        bufp->chgIData(oldp+198,((((3U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [3U])),32);
        bufp->chgIData(oldp+199,((((4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [4U])),32);
        bufp->chgIData(oldp+200,((((5U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [5U])),32);
        bufp->chgIData(oldp+201,((((6U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [6U])),32);
        bufp->chgIData(oldp+202,((((7U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [7U])),32);
        bufp->chgIData(oldp+203,((((8U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [8U])),32);
        bufp->chgIData(oldp+204,((((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [9U])),32);
        bufp->chgIData(oldp+205,((((0xaU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0xaU])),32);
        bufp->chgIData(oldp+206,((((0xbU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0xbU])),32);
        bufp->chgIData(oldp+207,((((0xcU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0xcU])),32);
        bufp->chgIData(oldp+208,((((0xdU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0xdU])),32);
        bufp->chgIData(oldp+209,((((0xeU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0xeU])),32);
        bufp->chgIData(oldp+210,((((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0xfU])),32);
        bufp->chgIData(oldp+211,((((0x10U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x10U])),32);
        bufp->chgIData(oldp+212,((((0x11U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x11U])),32);
        bufp->chgIData(oldp+213,((((0x12U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x12U])),32);
        bufp->chgIData(oldp+214,((((0x13U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x13U])),32);
        bufp->chgIData(oldp+215,((((0x14U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x14U])),32);
        bufp->chgIData(oldp+216,((((0x15U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x15U])),32);
        bufp->chgIData(oldp+217,((((0x16U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x16U])),32);
        bufp->chgIData(oldp+218,((((0x17U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x17U])),32);
        bufp->chgIData(oldp+219,((((0x18U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x18U])),32);
        bufp->chgIData(oldp+220,((((0x19U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x19U])),32);
        bufp->chgIData(oldp+221,((((0x1aU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x1aU])),32);
        bufp->chgIData(oldp+222,((((0x1bU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x1bU])),32);
        bufp->chgIData(oldp+223,((((0x1cU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x1cU])),32);
        bufp->chgIData(oldp+224,((((0x1dU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x1dU])),32);
        bufp->chgIData(oldp+225,((((0x1eU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x1eU])),32);
        bufp->chgIData(oldp+226,((((0x1fU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_addr)) 
                                   & (0U != vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T))
                                   ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_MPORT_data
                                   : vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                  [0x1fU])),32);
        bufp->chgIData(oldp+227,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0]),32);
        bufp->chgIData(oldp+228,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[1]),32);
        bufp->chgIData(oldp+229,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[2]),32);
        bufp->chgIData(oldp+230,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[3]),32);
        bufp->chgIData(oldp+231,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[4]),32);
        bufp->chgIData(oldp+232,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[5]),32);
        bufp->chgIData(oldp+233,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[6]),32);
        bufp->chgIData(oldp+234,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[7]),32);
        bufp->chgIData(oldp+235,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[8]),32);
        bufp->chgIData(oldp+236,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[9]),32);
        bufp->chgIData(oldp+237,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[10]),32);
        bufp->chgIData(oldp+238,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[11]),32);
        bufp->chgIData(oldp+239,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[12]),32);
        bufp->chgIData(oldp+240,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[13]),32);
        bufp->chgIData(oldp+241,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[14]),32);
        bufp->chgIData(oldp+242,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[15]),32);
        bufp->chgIData(oldp+243,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[16]),32);
        bufp->chgIData(oldp+244,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[17]),32);
        bufp->chgIData(oldp+245,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[18]),32);
        bufp->chgIData(oldp+246,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[19]),32);
        bufp->chgIData(oldp+247,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[20]),32);
        bufp->chgIData(oldp+248,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[21]),32);
        bufp->chgIData(oldp+249,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[22]),32);
        bufp->chgIData(oldp+250,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[23]),32);
        bufp->chgIData(oldp+251,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[24]),32);
        bufp->chgIData(oldp+252,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[25]),32);
        bufp->chgIData(oldp+253,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[26]),32);
        bufp->chgIData(oldp+254,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[27]),32);
        bufp->chgIData(oldp+255,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[28]),32);
        bufp->chgIData(oldp+256,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[29]),32);
        bufp->chgIData(oldp+257,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[30]),32);
        bufp->chgIData(oldp+258,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[31]),32);
        bufp->chgIData(oldp+259,(((8U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
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
        bufp->chgIData(oldp+260,(((IData)(4U) + vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc)),32);
    }
    bufp->chgBit(oldp+261,(vlSelf->clock));
    bufp->chgBit(oldp+262,(vlSelf->reset));
    bufp->chgBit(oldp+263,((1U & (~ (IData)(vlSelf->reset)))));
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
