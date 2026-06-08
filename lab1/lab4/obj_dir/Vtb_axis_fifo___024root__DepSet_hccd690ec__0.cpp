// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axis_fifo.h for the primary calling header

#include "Vtb_axis_fifo__pch.h"
#include "Vtb_axis_fifo__Syms.h"
#include "Vtb_axis_fifo___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axis_fifo___024root___dump_triggers__ico(Vtb_axis_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_axis_fifo___024root___eval_triggers__ico(Vtb_axis_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axis_fifo___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_axis_fifo___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vtb_axis_fifo_tb_axis_fifo___ico_sequent__TOP__tb_axis_fifo__0(Vtb_axis_fifo_tb_axis_fifo* vlSelf);

void Vtb_axis_fifo___024root___eval_ico(Vtb_axis_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axis_fifo___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_axis_fifo_tb_axis_fifo___ico_sequent__TOP__tb_axis_fifo__0((&vlSymsp->TOP__tb_axis_fifo));
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axis_fifo___024root___dump_triggers__act(Vtb_axis_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_axis_fifo___024root___eval_triggers__act(Vtb_axis_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axis_fifo___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_axis_fifo___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtb_axis_fifo_tb_axis_fifo___nba_sequent__TOP__tb_axis_fifo__0(Vtb_axis_fifo_tb_axis_fifo* vlSelf);

void Vtb_axis_fifo___024root___eval_nba(Vtb_axis_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axis_fifo___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_axis_fifo_tb_axis_fifo___nba_sequent__TOP__tb_axis_fifo__0((&vlSymsp->TOP__tb_axis_fifo));
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}
