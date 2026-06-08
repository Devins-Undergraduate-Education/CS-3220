// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_axis_fifo.h for the primary calling header

#ifndef VERILATED_VTB_AXIS_FIFO___024ROOT_H_
#define VERILATED_VTB_AXIS_FIFO___024ROOT_H_  // guard

#include "verilated.h"
class Vtb_axis_fifo_tb_axis_fifo;


class Vtb_axis_fifo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_axis_fifo___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_axis_fifo_tb_axis_fifo* tb_axis_fifo;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_axis_fifo__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_axis_fifo___024root(Vtb_axis_fifo__Syms* symsp, const char* v__name);
    ~Vtb_axis_fifo___024root();
    VL_UNCOPYABLE(Vtb_axis_fifo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
