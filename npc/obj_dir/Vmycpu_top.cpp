// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmycpu_top.h"
#include "Vmycpu_top__Syms.h"

//============================================================
// Constructors

Vmycpu_top::Vmycpu_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmycpu_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , resetn{vlSymsp->TOP.resetn}
    , inst_sram_we{vlSymsp->TOP.inst_sram_we}
    , data_sram_we{vlSymsp->TOP.data_sram_we}
    , debug_wb_rf_we{vlSymsp->TOP.debug_wb_rf_we}
    , debug_wb_rf_wnum{vlSymsp->TOP.debug_wb_rf_wnum}
    , inst_sram_addr{vlSymsp->TOP.inst_sram_addr}
    , inst_sram_wdata{vlSymsp->TOP.inst_sram_wdata}
    , inst_sram_rdata{vlSymsp->TOP.inst_sram_rdata}
    , data_sram_addr{vlSymsp->TOP.data_sram_addr}
    , data_sram_wdata{vlSymsp->TOP.data_sram_wdata}
    , data_sram_rdata{vlSymsp->TOP.data_sram_rdata}
    , debug_wb_pc{vlSymsp->TOP.debug_wb_pc}
    , debug_wb_rf_wdata{vlSymsp->TOP.debug_wb_rf_wdata}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmycpu_top::Vmycpu_top(const char* _vcname__)
    : Vmycpu_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmycpu_top::~Vmycpu_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmycpu_top___024root___eval_debug_assertions(Vmycpu_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vmycpu_top___024root___eval_static(Vmycpu_top___024root* vlSelf);
void Vmycpu_top___024root___eval_initial(Vmycpu_top___024root* vlSelf);
void Vmycpu_top___024root___eval_settle(Vmycpu_top___024root* vlSelf);
void Vmycpu_top___024root___eval(Vmycpu_top___024root* vlSelf);

void Vmycpu_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmycpu_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmycpu_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmycpu_top___024root___eval_static(&(vlSymsp->TOP));
        Vmycpu_top___024root___eval_initial(&(vlSymsp->TOP));
        Vmycpu_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmycpu_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmycpu_top::eventsPending() { return false; }

uint64_t Vmycpu_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmycpu_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmycpu_top___024root___eval_final(Vmycpu_top___024root* vlSelf);

VL_ATTR_COLD void Vmycpu_top::final() {
    Vmycpu_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmycpu_top::hierName() const { return vlSymsp->name(); }
const char* Vmycpu_top::modelName() const { return "Vmycpu_top"; }
unsigned Vmycpu_top::threads() const { return 1; }
