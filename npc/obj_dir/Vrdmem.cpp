// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrdmem.h"
#include "Vrdmem__Syms.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vrdmem::Vrdmem(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrdmem__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , mem_io_r_en{vlSymsp->TOP.mem_io_r_en}
    , mem_io_r_wr{vlSymsp->TOP.mem_io_r_wr}
    , mem_io_r_wstrb{vlSymsp->TOP.mem_io_r_wstrb}
    , mem_io_w_rdata{vlSymsp->TOP.mem_io_w_rdata}
    , mem_io_r_addr{vlSymsp->TOP.mem_io_r_addr}
    , mem_io_r_wdata{vlSymsp->TOP.mem_io_r_wdata}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vrdmem::Vrdmem(const char* _vcname__)
    : Vrdmem(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrdmem::~Vrdmem() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vrdmem___024root___eval_debug_assertions(Vrdmem___024root* vlSelf);
#endif  // VL_DEBUG
void Vrdmem___024root___eval_static(Vrdmem___024root* vlSelf);
void Vrdmem___024root___eval_initial(Vrdmem___024root* vlSelf);
void Vrdmem___024root___eval_settle(Vrdmem___024root* vlSelf);
void Vrdmem___024root___eval(Vrdmem___024root* vlSelf);

void Vrdmem::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrdmem::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrdmem___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vrdmem___024root___eval_static(&(vlSymsp->TOP));
        Vrdmem___024root___eval_initial(&(vlSymsp->TOP));
        Vrdmem___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vrdmem___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vrdmem::eventsPending() { return false; }

uint64_t Vrdmem::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vrdmem::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vrdmem___024root___eval_final(Vrdmem___024root* vlSelf);

VL_ATTR_COLD void Vrdmem::final() {
    Vrdmem___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrdmem::hierName() const { return vlSymsp->name(); }
const char* Vrdmem::modelName() const { return "Vrdmem"; }
unsigned Vrdmem::threads() const { return 1; }
