// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMain.h"
#include "VMain__Syms.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VMain::VMain(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VMain__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VMain::VMain(const char* _vcname__)
    : VMain(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VMain::~VMain() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VMain___024root___eval_debug_assertions(VMain___024root* vlSelf);
#endif  // VL_DEBUG
void VMain___024root___eval_static(VMain___024root* vlSelf);
void VMain___024root___eval_initial(VMain___024root* vlSelf);
void VMain___024root___eval_settle(VMain___024root* vlSelf);
void VMain___024root___eval(VMain___024root* vlSelf);

void VMain::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMain::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMain___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VMain___024root___eval_static(&(vlSymsp->TOP));
        VMain___024root___eval_initial(&(vlSymsp->TOP));
        VMain___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VMain___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VMain::eventsPending() { return false; }

uint64_t VMain::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VMain::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VMain___024root___eval_final(VMain___024root* vlSelf);

VL_ATTR_COLD void VMain::final() {
    VMain___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VMain::hierName() const { return vlSymsp->name(); }
const char* VMain::modelName() const { return "VMain"; }
unsigned VMain::threads() const { return 1; }
