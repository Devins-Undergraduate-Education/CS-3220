// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axi4_ram.h for the primary calling header

#include "Vtb_axi4_ram__pch.h"
#include "Vtb_axi4_ram__Syms.h"
#include "Vtb_axi4_ram___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_ram___024root___dump_triggers__act(Vtb_axi4_ram___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_axi4_ram___024root___eval_triggers__act(Vtb_axi4_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_axi4_ram___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtb_axi4_ram_tb_axi4_ram___nba_sequent__TOP__tb_axi4_ram__0(Vtb_axi4_ram_tb_axi4_ram* vlSelf);

void Vtb_axi4_ram___024root___eval_nba(Vtb_axi4_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_axi4_ram_tb_axi4_ram___nba_sequent__TOP__tb_axi4_ram__0((&vlSymsp->TOP__tb_axi4_ram));
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}
