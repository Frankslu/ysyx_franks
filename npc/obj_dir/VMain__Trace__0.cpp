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
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->Main__DOT__iram_rdata),32);
        bufp->chgBit(oldp+1,((2U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we))));
        bufp->chgBit(oldp+2,((0U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we))));
        bufp->chgIData(oldp+3,((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___io_res_T_18)),32);
        bufp->chgIData(oldp+4,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata2),32);
        bufp->chgCData(oldp+5,(((0xdU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                 ? 7U : ((0xcU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                          ? 3U : ((0xbU 
                                                   == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                                   ? 1U
                                                   : 0xdU)))),4);
        bufp->chgIData(oldp+6,(vlSelf->Main__DOT__dram_rdata),32);
        bufp->chgBit(oldp+7,((((((((((0U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)) 
                                     & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__rj_eq_rd)) 
                                    | ((~ (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__rj_eq_rd)) 
                                       & (1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)))) 
                                   | ((2U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)) 
                                      & (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__slt_res))) 
                                  | ((~ (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__slt_res)) 
                                     & (3U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)))) 
                                 | ((~ (IData)((1ULL 
                                                & ((1ULL 
                                                    + vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_T) 
                                                   >> 0x20U)))) 
                                    & (4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)))) 
                                | ((IData)((1ULL & 
                                            ((1ULL 
                                              + vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_T) 
                                             >> 0x20U))) 
                                   & (5U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)))) 
                               | (0xeU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))) 
                              | ((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)) 
                                 | (0x10U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))))));
        bufp->chgIData(oldp+8,((((0x10U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                  ? vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata1
                                  : vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc) 
                                + vlSelf->Main__DOT__cpucore__DOT__ID__DOT__imm)),32);
        bufp->chgIData(oldp+9,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2),32);
        bufp->chgCData(oldp+10,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op),5);
        bufp->chgCData(oldp+11,(((0xeU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                  ? 1U : (0x1fU & vlSelf->Main__DOT__iram_rdata))),5);
        bufp->chgCData(oldp+12,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we),2);
        bufp->chgCData(oldp+13,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name),5);
        bufp->chgBit(oldp+14,((7U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))));
        bufp->chgIData(oldp+15,(((1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we))
                                  ? ((8U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                      ? vlSelf->Main__DOT__dram_rdata
                                      : ((0xaU == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                          ? (0xffffU 
                                             & vlSelf->Main__DOT__dram_rdata)
                                          : ((7U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                              ? (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->Main__DOT__dram_rdata 
                                                                 >> 0xfU)))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & vlSelf->Main__DOT__dram_rdata))
                                              : ((9U 
                                                  == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                                  ? 
                                                 (0xffU 
                                                  & vlSelf->Main__DOT__dram_rdata)
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->Main__DOT__dram_rdata 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->Main__DOT__dram_rdata))
                                                   : 0xdeadU)))))
                                  : (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT___io_res_T_18))),32);
        bufp->chgBit(oldp+16,((1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we))));
        bufp->chgBit(oldp+17,((1U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+18,((2U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+19,((3U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+20,((4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+21,((5U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+22,((6U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+23,((7U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+24,((8U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+25,((9U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+26,((0xaU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+27,((0xbU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+28,((0xcU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+29,((0xdU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+30,((0xeU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+31,((0xfU == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+32,((0x10U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+33,((0x12U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+34,((0x11U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+35,((0x13U == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op))));
        bufp->chgBit(oldp+36,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_sub));
        bufp->chgQData(oldp+37,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_res),33);
        bufp->chgBit(oldp+39,((1U & (((~ (vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2 
                                          >> 0x1fU)) 
                                      & (vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc 
                                         >> 0x1fU)) 
                                     | ((~ ((vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc 
                                             ^ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2) 
                                            >> 0x1fU)) 
                                        & (IData)((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_res 
                                                   >> 0x1fU)))))));
        bufp->chgBit(oldp+40,((1U & (~ (IData)((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__add_res 
                                                >> 0x20U))))));
        bufp->chgIData(oldp+41,((vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc 
                                 & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
        bufp->chgIData(oldp+42,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__or_res),32);
        bufp->chgIData(oldp+43,((~ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__or_res)),32);
        bufp->chgIData(oldp+44,((vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc 
                                 ^ vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
        bufp->chgQData(oldp+45,((0x7fffffffffffffffULL 
                                 & ((QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc)) 
                                    << (0x1fU & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)))),63);
        bufp->chgQData(oldp+47,((((QData)((IData)((
                                                   ((vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc 
                                                     >> 0x1fU) 
                                                    & (0xbU 
                                                       == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op)))
                                                    ? 0xffffffffU
                                                    : 0U))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc)))),64);
        bufp->chgQData(oldp+49,(((((QData)((IData)(
                                                   (((vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc 
                                                      >> 0x1fU) 
                                                     & (0xbU 
                                                        == (IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_alu_op)))
                                                     ? 0xffffffffU
                                                     : 0U))) 
                                   << 0x20U) | (QData)((IData)(vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc))) 
                                 >> (0x1fU & vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2))),64);
        bufp->chgQData(oldp+51,(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__mul_pre),64);
        bufp->chgIData(oldp+53,((IData)(vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__mul_pre)),32);
        bufp->chgIData(oldp+54,((IData)((vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu__DOT__mul_pre 
                                         >> 0x20U))),32);
        bufp->chgIData(oldp+55,((IData)((VL_MULS_QQQ(64, 
                                                     VL_EXTENDS_QI(64,32, vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc), 
                                                     VL_EXTENDS_QI(64,32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)) 
                                         >> 0x20U))),32);
        bufp->chgIData(oldp+56,(VL_DIV_III(32, vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
        bufp->chgIData(oldp+57,(VL_MODDIV_III(32, vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
        bufp->chgIData(oldp+58,(VL_MODDIVS_III(32, vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)),32);
        bufp->chgIData(oldp+59,((IData)((0x1ffffffffULL 
                                         & VL_DIVS_QQQ(33, 
                                                       (0x1ffffffffULL 
                                                        & VL_EXTENDS_QI(33,32, vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc)), 
                                                       (0x1ffffffffULL 
                                                        & VL_EXTENDS_QI(33,32, vlSelf->Main__DOT__cpucore__DOT__EXE__DOT__alu_io_src2)))))),32);
        bufp->chgCData(oldp+60,((0x1fU & (vlSelf->Main__DOT__iram_rdata 
                                          >> 5U))),5);
        bufp->chgCData(oldp+61,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_io_rdata2_MPORT_addr),5);
        bufp->chgIData(oldp+62,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___05Fio_rdata1),32);
        bufp->chgCData(oldp+63,((0x1fU & vlSelf->Main__DOT__iram_rdata)),5);
        bufp->chgCData(oldp+64,((0x1fU & (vlSelf->Main__DOT__iram_rdata 
                                          >> 0xaU))),5);
        bufp->chgSData(oldp+65,((0xfffU & (vlSelf->Main__DOT__iram_rdata 
                                           >> 0xaU))),12);
        bufp->chgIData(oldp+66,((((- (IData)((1U & 
                                              (vlSelf->Main__DOT__iram_rdata 
                                               >> 0x15U)))) 
                                  << 0xcU) | (0xfffU 
                                              & (vlSelf->Main__DOT__iram_rdata 
                                                 >> 0xaU)))),32);
        bufp->chgIData(oldp+67,((0xfffff000U & (vlSelf->Main__DOT__iram_rdata 
                                                << 7U))),32);
        bufp->chgIData(oldp+68,((~ vlSelf->Main__DOT__iram_rdata)),32);
        bufp->chgBit(oldp+69,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0xfU)))));
        bufp->chgBit(oldp+70,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x10U)))));
        bufp->chgBit(oldp+71,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x11U)))));
        bufp->chgBit(oldp+72,((1U & (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x14U))));
        bufp->chgBit(oldp+73,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x15U)))));
        bufp->chgBit(oldp+74,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x16U)))));
        bufp->chgBit(oldp+75,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x17U)))));
        bufp->chgBit(oldp+76,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x18U)))));
        bufp->chgBit(oldp+77,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x19U)))));
        bufp->chgBit(oldp+78,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x1aU)))));
        bufp->chgBit(oldp+79,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x1bU)))));
        bufp->chgBit(oldp+80,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x1cU)))));
        bufp->chgBit(oldp+81,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x1dU)))));
        bufp->chgBit(oldp+82,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x1eU)))));
        bufp->chgBit(oldp+83,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x1fU)))));
        bufp->chgCData(oldp+84,(((0x40U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                               >> 0x19U)) 
                                           << 6U)) 
                                 | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_he1db0bdc__0))),7);
        bufp->chgBit(oldp+85,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x12U)))));
        bufp->chgCData(oldp+86,(((0x80U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                               >> 0x18U)) 
                                           << 7U)) 
                                 | ((0x40U & ((~ (vlSelf->Main__DOT__iram_rdata 
                                                  >> 0x19U)) 
                                              << 6U)) 
                                    | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT____VdfgTmp_he1db0bdc__0)))),8);
        bufp->chgBit(oldp+87,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x13U)))));
        bufp->chgBit(oldp+88,((1U & (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x10U))));
        bufp->chgBit(oldp+89,((1U & (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x11U))));
        bufp->chgBit(oldp+90,((1U & (vlSelf->Main__DOT__iram_rdata 
                                     >> 0xfU))));
        bufp->chgBit(oldp+91,((1U & (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x12U))));
        bufp->chgBit(oldp+92,((1U & (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x13U))));
        bufp->chgBit(oldp+93,((1U & (~ (vlSelf->Main__DOT__iram_rdata 
                                        >> 0x14U)))));
        bufp->chgBit(oldp+94,((1U & (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x15U))));
        bufp->chgBit(oldp+95,((1U & (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x16U))));
        bufp->chgBit(oldp+96,((1U & (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x19U))));
        bufp->chgBit(oldp+97,((1U & (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x17U))));
        bufp->chgBit(oldp+98,((1U & (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x18U))));
        bufp->chgBit(oldp+99,((1U & (vlSelf->Main__DOT__iram_rdata 
                                     >> 0x1aU))));
        bufp->chgBit(oldp+100,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+101,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+102,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+103,((1U & (vlSelf->Main__DOT__iram_rdata 
                                      >> 0x1eU))));
        bufp->chgCData(oldp+104,((((IData)((0x1ffU 
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
        bufp->chgCData(oldp+105,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5),3);
        bufp->chgCData(oldp+106,((((IData)((0x1ffffU 
                                            == vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_52)) 
                                   << 6U) | (((IData)(
                                                      (0x1ffU 
                                                       == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_62))) 
                                              << 5U) 
                                             | (((IData)(
                                                         (0x1ffU 
                                                          == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_64))) 
                                                 << 4U) 
                                                | (((IData)(
                                                            (0x3fU 
                                                             == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_T_82))) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5)))))),7);
        bufp->chgCData(oldp+107,((((IData)((0x1ffU 
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
        bufp->chgCData(oldp+108,(((((vlSelf->Main__DOT__iram_rdata 
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
        bufp->chgCData(oldp+109,((((IData)((0U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5))) 
                                   << 7U) | (((IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_12))) 
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
        bufp->chgIData(oldp+110,((((IData)((0x7fffU 
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
                                                                                != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_12))) 
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
        bufp->chgCData(oldp+111,(((0x80U & ((~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__decode_res_orMatrixOutputs_hi_5)))) 
                                            << 7U)) 
                                  | (((IData)((0U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_12))) 
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
        bufp->chgIData(oldp+112,((((IData)((0x7fffU 
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
                                                                                != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT___decode_res_orMatrixOutputs_T_12))) 
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
        bufp->chgCData(oldp+113,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type),4);
        bufp->chgIData(oldp+114,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__imm),32);
        bufp->chgBit(oldp+115,((((0x10U != (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name)) 
                                 & (4U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_type))) 
                                | (0U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__mem_we)))));
        bufp->chgBit(oldp+116,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__rj_eq_rd));
        bufp->chgQData(oldp+117,((0x1ffffffffULL & 
                                  (1ULL + vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_T))),33);
        bufp->chgBit(oldp+119,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__slt_res));
        bufp->chgBit(oldp+120,((1U & (~ (IData)((1ULL 
                                                 & ((1ULL 
                                                     + vlSelf->Main__DOT__cpucore__DOT__ID__DOT___rj_sub_rd_T) 
                                                    >> 0x20U)))))));
        bufp->chgIData(oldp+121,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_io_rdata1_MPORT_data),32);
        bufp->chgIData(oldp+122,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf_io_rdata2_MPORT_data),32);
        bufp->chgIData(oldp+123,(((8U == (IData)(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__inst_name))
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
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+124,(vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc),32);
        bufp->chgIData(oldp+125,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[0]),32);
        bufp->chgIData(oldp+126,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[1]),32);
        bufp->chgIData(oldp+127,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[2]),32);
        bufp->chgIData(oldp+128,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[3]),32);
        bufp->chgIData(oldp+129,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[4]),32);
        bufp->chgIData(oldp+130,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[5]),32);
        bufp->chgIData(oldp+131,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[6]),32);
        bufp->chgIData(oldp+132,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[7]),32);
        bufp->chgIData(oldp+133,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[8]),32);
        bufp->chgIData(oldp+134,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[9]),32);
        bufp->chgIData(oldp+135,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[10]),32);
        bufp->chgIData(oldp+136,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[11]),32);
        bufp->chgIData(oldp+137,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[12]),32);
        bufp->chgIData(oldp+138,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[13]),32);
        bufp->chgIData(oldp+139,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[14]),32);
        bufp->chgIData(oldp+140,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[15]),32);
        bufp->chgIData(oldp+141,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[16]),32);
        bufp->chgIData(oldp+142,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[17]),32);
        bufp->chgIData(oldp+143,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[18]),32);
        bufp->chgIData(oldp+144,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[19]),32);
        bufp->chgIData(oldp+145,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[20]),32);
        bufp->chgIData(oldp+146,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[21]),32);
        bufp->chgIData(oldp+147,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[22]),32);
        bufp->chgIData(oldp+148,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[23]),32);
        bufp->chgIData(oldp+149,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[24]),32);
        bufp->chgIData(oldp+150,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[25]),32);
        bufp->chgIData(oldp+151,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[26]),32);
        bufp->chgIData(oldp+152,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[27]),32);
        bufp->chgIData(oldp+153,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[28]),32);
        bufp->chgIData(oldp+154,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[29]),32);
        bufp->chgIData(oldp+155,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[30]),32);
        bufp->chgIData(oldp+156,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf[31]),32);
        bufp->chgIData(oldp+157,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0U]),32);
        bufp->chgIData(oldp+158,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [1U]),32);
        bufp->chgIData(oldp+159,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [2U]),32);
        bufp->chgIData(oldp+160,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [3U]),32);
        bufp->chgIData(oldp+161,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [4U]),32);
        bufp->chgIData(oldp+162,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [5U]),32);
        bufp->chgIData(oldp+163,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [6U]),32);
        bufp->chgIData(oldp+164,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [7U]),32);
        bufp->chgIData(oldp+165,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [8U]),32);
        bufp->chgIData(oldp+166,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [9U]),32);
        bufp->chgIData(oldp+167,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0xaU]),32);
        bufp->chgIData(oldp+168,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0xbU]),32);
        bufp->chgIData(oldp+169,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0xcU]),32);
        bufp->chgIData(oldp+170,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0xdU]),32);
        bufp->chgIData(oldp+171,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0xeU]),32);
        bufp->chgIData(oldp+172,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0xfU]),32);
        bufp->chgIData(oldp+173,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x10U]),32);
        bufp->chgIData(oldp+174,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x11U]),32);
        bufp->chgIData(oldp+175,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x12U]),32);
        bufp->chgIData(oldp+176,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x13U]),32);
        bufp->chgIData(oldp+177,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x14U]),32);
        bufp->chgIData(oldp+178,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x15U]),32);
        bufp->chgIData(oldp+179,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x16U]),32);
        bufp->chgIData(oldp+180,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x17U]),32);
        bufp->chgIData(oldp+181,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x18U]),32);
        bufp->chgIData(oldp+182,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x19U]),32);
        bufp->chgIData(oldp+183,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x1aU]),32);
        bufp->chgIData(oldp+184,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x1bU]),32);
        bufp->chgIData(oldp+185,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x1cU]),32);
        bufp->chgIData(oldp+186,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x1dU]),32);
        bufp->chgIData(oldp+187,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x1eU]),32);
        bufp->chgIData(oldp+188,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__rf
                                 [0x1fU]),32);
        bufp->chgBit(oldp+189,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__is_break));
        bufp->chgBit(oldp+190,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__valid));
        bufp->chgIData(oldp+191,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst),32);
        bufp->chgIData(oldp+192,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__pc),32);
        bufp->chgIData(oldp+193,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[0]),32);
        bufp->chgIData(oldp+194,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[1]),32);
        bufp->chgIData(oldp+195,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[2]),32);
        bufp->chgIData(oldp+196,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[3]),32);
        bufp->chgIData(oldp+197,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[4]),32);
        bufp->chgIData(oldp+198,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[5]),32);
        bufp->chgIData(oldp+199,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[6]),32);
        bufp->chgIData(oldp+200,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[7]),32);
        bufp->chgIData(oldp+201,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[8]),32);
        bufp->chgIData(oldp+202,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[9]),32);
        bufp->chgIData(oldp+203,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[10]),32);
        bufp->chgIData(oldp+204,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[11]),32);
        bufp->chgIData(oldp+205,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[12]),32);
        bufp->chgIData(oldp+206,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[13]),32);
        bufp->chgIData(oldp+207,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[14]),32);
        bufp->chgIData(oldp+208,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[15]),32);
        bufp->chgIData(oldp+209,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[16]),32);
        bufp->chgIData(oldp+210,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[17]),32);
        bufp->chgIData(oldp+211,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[18]),32);
        bufp->chgIData(oldp+212,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[19]),32);
        bufp->chgIData(oldp+213,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[20]),32);
        bufp->chgIData(oldp+214,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[21]),32);
        bufp->chgIData(oldp+215,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[22]),32);
        bufp->chgIData(oldp+216,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[23]),32);
        bufp->chgIData(oldp+217,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[24]),32);
        bufp->chgIData(oldp+218,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[25]),32);
        bufp->chgIData(oldp+219,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[26]),32);
        bufp->chgIData(oldp+220,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[27]),32);
        bufp->chgIData(oldp+221,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[28]),32);
        bufp->chgIData(oldp+222,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[29]),32);
        bufp->chgIData(oldp+223,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[30]),32);
        bufp->chgIData(oldp+224,(vlSelf->Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__regs[31]),32);
        bufp->chgIData(oldp+225,(((IData)(4U) + vlSelf->Main__DOT__cpucore__DOT__pIF__DOT__pc)),32);
    }
    bufp->chgBit(oldp+226,(vlSelf->clock));
    bufp->chgBit(oldp+227,(vlSelf->reset));
    bufp->chgBit(oldp+228,((1U & (~ (IData)(vlSelf->reset)))));
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
