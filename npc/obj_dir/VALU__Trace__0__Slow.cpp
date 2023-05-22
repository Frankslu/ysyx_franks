// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU__Syms.h"


VL_ATTR_COLD void VALU___024root__trace_init_sub__TOP__0(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+11,"io_alu_op", false,-1, 4,0);
    tracep->declBus(c+12,"io_src1", false,-1, 31,0);
    tracep->declBus(c+13,"io_src2", false,-1, 31,0);
    tracep->declBus(c+14,"io_res", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+11,"io_alu_op", false,-1, 4,0);
    tracep->declBus(c+12,"io_src1", false,-1, 31,0);
    tracep->declBus(c+13,"io_src2", false,-1, 31,0);
    tracep->declBus(c+14,"io_res", false,-1, 31,0);
    tracep->declBit(c+15,"op_add", false,-1);
    tracep->declBit(c+16,"op_sub", false,-1);
    tracep->declBit(c+17,"op_slt", false,-1);
    tracep->declBit(c+18,"op_sltu", false,-1);
    tracep->declBit(c+19,"op_and", false,-1);
    tracep->declBit(c+20,"op_nor", false,-1);
    tracep->declBit(c+21,"op_or", false,-1);
    tracep->declBit(c+22,"op_xor", false,-1);
    tracep->declBit(c+23,"op_sll", false,-1);
    tracep->declBit(c+24,"op_srl", false,-1);
    tracep->declBit(c+25,"op_sra", false,-1);
    tracep->declBit(c+26,"op_lui", false,-1);
    tracep->declBit(c+27,"op_mul", false,-1);
    tracep->declBit(c+28,"op_mulh", false,-1);
    tracep->declBit(c+29,"op_mulhu", false,-1);
    tracep->declBit(c+30,"op_div", false,-1);
    tracep->declBit(c+31,"op_mod", false,-1);
    tracep->declBit(c+32,"op_divu", false,-1);
    tracep->declBit(c+33,"op_modu", false,-1);
    tracep->declBit(c+1,"add_sub", false,-1);
    tracep->declQuad(c+2,"add_res", false,-1, 32,0);
    tracep->declBit(c+34,"slt_res", false,-1);
    tracep->declBit(c+4,"sltu_res", false,-1);
    tracep->declBus(c+35,"and_res", false,-1, 31,0);
    tracep->declBus(c+5,"or_res", false,-1, 31,0);
    tracep->declBus(c+6,"nor_res", false,-1, 31,0);
    tracep->declBus(c+36,"xor_res", false,-1, 31,0);
    tracep->declQuad(c+37,"sll_res", false,-1, 62,0);
    tracep->declQuad(c+39,"sr", false,-1, 63,0);
    tracep->declQuad(c+41,"sr_res", false,-1, 63,0);
    tracep->declQuad(c+7,"mul_pre", false,-1, 63,0);
    tracep->declBus(c+9,"mul_res", false,-1, 31,0);
    tracep->declBus(c+10,"mulhu_res", false,-1, 31,0);
    tracep->declBus(c+43,"mulh_res", false,-1, 31,0);
    tracep->declBus(c+44,"divu_res", false,-1, 31,0);
    tracep->declBus(c+45,"modu_res", false,-1, 31,0);
    tracep->declBus(c+46,"mod_res", false,-1, 31,0);
    tracep->declBus(c+47,"div_res", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VALU___024root__trace_init_top(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_init_top\n"); );
    // Body
    VALU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VALU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VALU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VALU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VALU___024root__trace_register(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VALU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VALU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VALU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VALU___024root__trace_full_sub_0(VALU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VALU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_full_top_0\n"); );
    // Init
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VALU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VALU___024root__trace_full_sub_0(VALU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ALU__DOT__add_sub));
    bufp->fullQData(oldp+2,(vlSelf->ALU__DOT__add_res),33);
    bufp->fullBit(oldp+4,((1U & (~ (IData)((vlSelf->ALU__DOT__add_res 
                                            >> 0x20U))))));
    bufp->fullIData(oldp+5,(vlSelf->ALU__DOT__or_res),32);
    bufp->fullIData(oldp+6,((~ vlSelf->ALU__DOT__or_res)),32);
    bufp->fullQData(oldp+7,(vlSelf->ALU__DOT__mul_pre),64);
    bufp->fullIData(oldp+9,((IData)(vlSelf->ALU__DOT__mul_pre)),32);
    bufp->fullIData(oldp+10,((IData)((vlSelf->ALU__DOT__mul_pre 
                                      >> 0x20U))),32);
    bufp->fullCData(oldp+11,(vlSelf->io_alu_op),5);
    bufp->fullIData(oldp+12,(vlSelf->io_src1),32);
    bufp->fullIData(oldp+13,(vlSelf->io_src2),32);
    bufp->fullIData(oldp+14,(vlSelf->io_res),32);
    bufp->fullBit(oldp+15,((1U == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+16,((2U == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+17,((3U == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+18,((4U == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+19,((5U == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+20,((6U == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+21,((7U == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+22,((8U == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+23,((9U == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+24,((0xaU == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+25,((0xbU == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+26,((0xcU == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+27,((0xdU == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+28,((0xeU == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+29,((0xfU == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+30,((0x10U == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+31,((0x12U == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+32,((0x11U == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+33,((0x13U == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+34,((1U & (((~ (vlSelf->io_src2 
                                       >> 0x1fU)) & 
                                   (vlSelf->io_src1 
                                    >> 0x1fU)) | ((~ 
                                                   ((vlSelf->io_src1 
                                                     ^ vlSelf->io_src2) 
                                                    >> 0x1fU)) 
                                                  & (IData)(
                                                            (vlSelf->ALU__DOT__add_res 
                                                             >> 0x1fU)))))));
    bufp->fullIData(oldp+35,((vlSelf->io_src1 & vlSelf->io_src2)),32);
    bufp->fullIData(oldp+36,((vlSelf->io_src1 ^ vlSelf->io_src2)),32);
    bufp->fullQData(oldp+37,((0x7fffffffffffffffULL 
                              & ((QData)((IData)(vlSelf->io_src1)) 
                                 << (0x1fU & vlSelf->io_src2)))),63);
    bufp->fullQData(oldp+39,((((QData)((IData)((((vlSelf->io_src1 
                                                  >> 0x1fU) 
                                                 & (0xbU 
                                                    == (IData)(vlSelf->io_alu_op)))
                                                 ? 0xffffffffU
                                                 : 0U))) 
                               << 0x20U) | (QData)((IData)(vlSelf->io_src1)))),64);
    bufp->fullQData(oldp+41,(((((QData)((IData)((((vlSelf->io_src1 
                                                   >> 0x1fU) 
                                                  & (0xbU 
                                                     == (IData)(vlSelf->io_alu_op)))
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0x20U) | (QData)((IData)(vlSelf->io_src1))) 
                              >> (0x1fU & vlSelf->io_src2))),64);
    bufp->fullIData(oldp+43,((IData)((VL_MULS_QQQ(64, 
                                                  VL_EXTENDS_QI(64,32, vlSelf->io_src1), 
                                                  VL_EXTENDS_QI(64,32, vlSelf->io_src2)) 
                                      >> 0x20U))),32);
    bufp->fullIData(oldp+44,(VL_DIV_III(32, vlSelf->io_src1, vlSelf->io_src2)),32);
    bufp->fullIData(oldp+45,(VL_MODDIV_III(32, vlSelf->io_src1, vlSelf->io_src2)),32);
    bufp->fullIData(oldp+46,(VL_MODDIVS_III(32, vlSelf->io_src1, vlSelf->io_src2)),32);
    bufp->fullIData(oldp+47,((IData)((0x1ffffffffULL 
                                      & VL_DIVS_QQQ(33, 
                                                    (0x1ffffffffULL 
                                                     & VL_EXTENDS_QI(33,32, vlSelf->io_src1)), 
                                                    (0x1ffffffffULL 
                                                     & VL_EXTENDS_QI(33,32, vlSelf->io_src2)))))),32);
}
