// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpipeline__Syms.h"


void Vpipeline___024root__trace_chg_0_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpipeline___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_chg_0\n"); );
    // Init
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vpipeline___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vpipeline___024root__trace_chg_0_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<6>/*191:0*/ __Vtemp_5;
    VlWide<6>/*191:0*/ __Vtemp_10;
    VlWide<6>/*191:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_21;
    VlWide<6>/*191:0*/ __Vtemp_22;
    VlWide<9>/*287:0*/ __Vtemp_24;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
        bufp->chgWData(oldp+1,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),172);
        bufp->chgWData(oldp+7,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),284);
        bufp->chgWData(oldp+16,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch),175);
        bufp->chgWData(oldp+22,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),173);
        bufp->chgBit(oldp+28,(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE));
        bufp->chgWData(oldp+29,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE),112);
        bufp->chgBit(oldp+33,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_DE));
        bufp->chgQData(oldp+34,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),38);
        bufp->chgBit(oldp+36,((1U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                     >> 0xbU))));
        bufp->chgIData(oldp+37,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                  << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               >> 0xbU))),32);
        bufp->chgIData(oldp+38,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 0xbU))),32);
        bufp->chgIData(oldp+39,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                  << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                               >> 0xbU))),32);
        bufp->chgIData(oldp+40,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                  << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                               >> 0xbU))),32);
        bufp->chgIData(oldp+41,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                  << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                               >> 0xbU))),32);
        bufp->chgSData(oldp+42,((0x3ffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                           >> 1U))),10);
        bufp->chgBit(oldp+43,((1U & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])));
        bufp->chgCData(oldp+44,((7U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 0x17U))),3);
        bufp->chgCData(oldp+45,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                          >> 4U))),7);
        bufp->chgCData(oldp+46,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 0xbU))),7);
        bufp->chgCData(oldp+47,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
        bufp->chgCData(oldp+48,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
        bufp->chgCData(oldp+49,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
        bufp->chgIData(oldp+50,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                  ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h7117cccf__0
                                  : ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                      ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h7117cccf__0
                                      : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                             >> 0xaU)))) 
                                              << 0xbU) 
                                             | ((0x7e0U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                    << 1U)) 
                                                | (0x1fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      >> 0x12U))))
                                          : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                              ? (((- (IData)(
                                                             (1U 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                 >> 0xaU)))) 
                                                  << 0xcU) 
                                                 | ((0x800U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        >> 7U)) 
                                                    | ((0x7e0U 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                           << 1U)) 
                                                       | (0x1eU 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 0x12U)))))
                                              : ((3U 
                                                  == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                  ? 
                                                 (0xfffff000U 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                      << 0x15U) 
                                                     | (0x1ff000U 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           >> 0xbU))))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                   >> 0xaU)))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          >> 0xbU)) 
                                                      | ((0x800U 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 0x14U)) 
                                                         | (0x7feU 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                               << 1U)))))
                                                   : 0U))))))),32);
        bufp->chgCData(oldp+51,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 0x1aU))),5);
        bufp->chgCData(oldp+52,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                           << 1U) | 
                                          (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           >> 0x1fU)))),5);
        bufp->chgCData(oldp+53,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 0x12U))),5);
        bufp->chgBit(oldp+54,(((0x1cU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1dU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((0x1eU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0x1fU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | ((0x20U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                           | (0x21U 
                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))))));
        bufp->chgBit(oldp+55,(((0x19U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1aU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | (0x1bU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))));
        bufp->chgBit(oldp+56,((0x17U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
        bufp->chgBit(oldp+57,((0x18U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
        bufp->chgBit(oldp+58,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE));
        bufp->chgBit(oldp+59,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                             >> 0x25U)))));
        bufp->chgCData(oldp+60,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                  >> 0x20U)))),5);
        bufp->chgIData(oldp+61,((IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE)),32);
        bufp->chgBit(oldp+62,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE));
        bufp->chgIData(oldp+64,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs),32);
        bufp->chgBit(oldp+65,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                   >> (0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                >> 0x1aU)))) 
                               | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                     >> (0x1fU & ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                   << 1U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 0x1fU))))))));
        bufp->chgIData(oldp+66,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
        bufp->chgIData(oldp+67,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE),32);
        bufp->chgIData(oldp+68,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                             >> 2U))]),32);
        bufp->chgIData(oldp+69,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
        __Vtemp_5[0U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__next_pc_FE 
                          << 0xbU) | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index_FE) 
                                       << 1U) | (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_used_FE)));
        __Vtemp_5[1U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__next_pc_FE 
                          >> 0x15U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                       << 0xbU));
        __Vtemp_5[2U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                          >> 0x15U) | (((IData)(4U) 
                                        + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                       << 0xbU));
        __Vtemp_5[3U] = ((((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                          >> 0x15U) | ((IData)((((QData)((IData)(
                                                                 vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                                 [
                                                                 (0x3fffU 
                                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                     >> 2U))])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                       << 0xbU));
        __Vtemp_5[4U] = (((IData)((((QData)((IData)(
                                                    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                    [
                                                    (0x3fffU 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                        >> 2U))])) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                          >> 0x15U) | ((IData)(((((QData)((IData)(
                                                                  vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                                  [
                                                                  (0x3fffU 
                                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                      >> 2U))])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                >> 0x20U)) 
                                       << 0xbU));
        __Vtemp_5[5U] = (0x800U | ((IData)(((((QData)((IData)(
                                                              vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                              [
                                                              (0x3fffU 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                  >> 2U))])) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                            >> 0x20U)) 
                                   >> 0x15U));
        bufp->chgWData(oldp+70,(__Vtemp_5),172);
        bufp->chgSData(oldp+76,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__bhr),10);
        bufp->chgQData(oldp+77,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_valid),64);
        bufp->chgIData(oldp+79,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__i),32);
        bufp->chgIData(oldp+80,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__j),32);
        bufp->chgCData(oldp+81,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                          >> 2U))),6);
        bufp->chgSData(oldp+82,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index_FE),10);
        bufp->chgSData(oldp+83,((0x3ffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                           >> 2U))),10);
        bufp->chgSData(oldp+84,((0x3ffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                           >> 0xaU))),10);
        bufp->chgSData(oldp+85,((0x3ffU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                            >> 2U) 
                                           ^ (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                              >> 0xaU)))),10);
        bufp->chgCData(oldp+86,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht
                                [vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index_FE]),2);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_target
                                [(0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                           >> 2U))]),32);
        bufp->chgBit(oldp+88,(((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_used_FE) 
                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht
                                  [vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index_FE] 
                                  >> 1U))));
        bufp->chgBit(oldp+89,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_used_FE));
        bufp->chgIData(oldp+90,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__next_pc_FE),32);
        bufp->chgBit(oldp+91,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U] 
                                     >> 0xfU))));
        bufp->chgIData(oldp+92,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U] 
                                  << 0x11U) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                                               >> 0xfU))),32);
        bufp->chgBit(oldp+93,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                                     >> 0xeU))));
        bufp->chgIData(oldp+94,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                                  << 0x12U) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                                               >> 0xeU))),32);
        bufp->chgIData(oldp+95,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                                  << 0x12U) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U] 
                                               >> 0xeU))),32);
        bufp->chgBit(oldp+96,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U] 
                                     >> 0xdU))));
        bufp->chgSData(oldp+97,((0x3ffU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U] 
                                           >> 3U))),10);
        bufp->chgBit(oldp+98,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U] 
                                     >> 2U))));
        bufp->chgBit(oldp+99,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+100,((1U & vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U])));
        bufp->chgBit(oldp+101,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                      >> 0xeU))));
        __Vtemp_10[0U] = (((IData)((((QData)((IData)(
                                                     vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                     [
                                                     (0x3fffU 
                                                      & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                         >> 0xaU))])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                                   << 0x18U) 
                                                                  | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                                     >> 8U)))))) 
                           << 6U) | (0x3fU & vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U]));
        __Vtemp_10[1U] = (((IData)((((QData)((IData)(
                                                     vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                     [
                                                     (0x3fffU 
                                                      & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                         >> 0xaU))])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                                   << 0x18U) 
                                                                  | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                                     >> 8U)))))) 
                           >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                                   vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                                   [
                                                                   (0x3fffU 
                                                                    & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                                       >> 0xaU))])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                                      << 0x18U) 
                                                                     | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                                        >> 8U))))) 
                                                 >> 0x20U)) 
                                        << 6U));
        __Vtemp_10[2U] = (((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                            << 0x1eU) | (0x3fffffc0U 
                                         & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                            >> 2U))) 
                          | ((IData)(((((QData)((IData)(
                                                        vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                        [
                                                        (0x3fffU 
                                                         & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                            >> 0xaU))])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                                      << 0x18U) 
                                                                     | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                                        >> 8U))))) 
                                      >> 0x20U)) >> 0x1aU));
        __Vtemp_10[3U] = ((0x3fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                    >> 2U)) | ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                                << 0x1eU) 
                                               | (0x3fffffc0U 
                                                  & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                                     >> 2U))));
        __Vtemp_10[4U] = ((0x3fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                    >> 2U)) | ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                                << 0x1eU) 
                                               | (0x3fffffc0U 
                                                  & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                                     >> 2U))));
        __Vtemp_10[5U] = ((0x3fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                    >> 2U)) | (0x1fc0U 
                                               & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                                  >> 2U)));
        bufp->chgWData(oldp+102,(__Vtemp_10),173);
        bufp->chgCData(oldp+108,((0x3fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                           >> 8U))),6);
        bufp->chgIData(oldp+109,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+110,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                   << 0x12U) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                                >> 0xeU))),32);
        bufp->chgIData(oldp+111,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                   << 0x12U) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                                >> 0xeU))),32);
        bufp->chgBit(oldp+112,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                      >> 7U))));
        bufp->chgIData(oldp+113,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                >> 8U))),32);
        bufp->chgCData(oldp+114,((0x1fU & vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U])),5);
        bufp->chgBit(oldp+115,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                      >> 5U))));
        bufp->chgIData(oldp+116,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+117,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                 [(0x3fffU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                              >> 0xaU))]),32);
        bufp->chgBit(oldp+118,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+119,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                      >> 0xcU))));
        bufp->chgCData(oldp+120,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                           >> 6U))),6);
        bufp->chgIData(oldp+121,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                   << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                                >> 0xcU))),32);
        bufp->chgIData(oldp+122,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                   << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                                >> 0xcU))),32);
        bufp->chgIData(oldp+123,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                   << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+124,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                      >> 5U))));
        bufp->chgCData(oldp+125,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
        bufp->chgIData(oldp+126,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__regval_WB),32);
        bufp->chgIData(oldp+127,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                   << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+128,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                   << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                >> 6U))),32);
        __Vtemp_16[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                     << 0x20U) | (QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__aluout_AGEX)))) 
                           << 8U) | (0xffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              >> 0xbU)));
        __Vtemp_16[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                     << 0x20U) | (QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__aluout_AGEX)))) 
                           >> 0x18U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__aluout_AGEX))) 
                                                 >> 0x20U)) 
                                        << 8U));
        __Vtemp_16[2U] = (((IData)((0x3fffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                        << 0xbU) | 
                                       ((QData)((IData)(
                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                        >> 0x15U)))) 
                           << 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__aluout_AGEX))) 
                                              >> 0x20U)) 
                                     >> 0x18U));
        __Vtemp_16[3U] = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                            << 0x13U) | (0x7c000U & 
                                         (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                          >> 0xdU))) 
                          | (((IData)((0x3fffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                           << 0xbU) 
                                          | ((QData)((IData)(
                                                             vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                             >> 0x15U)))) 
                              >> 0x18U) | ((IData)(
                                                   ((0x3fffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                         << 0xbU) 
                                                        | ((QData)((IData)(
                                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                           >> 0x15U))) 
                                                    >> 0x20U)) 
                                           << 8U)));
        __Vtemp_16[4U] = ((0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                      >> 0xdU)) | (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                    << 0x13U) 
                                                   | (0x7c000U 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                         >> 0xdU))));
        __Vtemp_16[5U] = ((0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                      >> 0xdU)) | (0x4000U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                      >> 0xdU)));
        bufp->chgWData(oldp+129,(__Vtemp_16),175);
        bufp->chgBit(oldp+135,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                      >> 0x1bU))));
        bufp->chgIData(oldp+136,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                   << 5U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                             >> 0x1bU))),32);
        bufp->chgIData(oldp+137,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                   << 5U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 0x1bU))),32);
        bufp->chgIData(oldp+138,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   << 0xbU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x15U))),32);
        bufp->chgIData(oldp+139,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                   << 5U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x1bU))),32);
        bufp->chgCData(oldp+140,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x15U))),6);
        bufp->chgBit(oldp+141,(((0x1cU == (0x3fU & 
                                           (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x15U)))
                                 ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      << 0xbU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x15U)) 
                                    == ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         << 0xbU) | 
                                        (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         >> 0x15U)))
                                 : ((0x1dU == (0x3fU 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x15U)))
                                     ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          << 0xbU) 
                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x15U)) 
                                        != ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             << 0xbU) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 0x15U)))
                                     : ((0x1eU == (0x3fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      >> 0x15U)))
                                         ? (IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgExtracted_hd1356386__0)
                                         : ((0x1fU 
                                             == (0x3fU 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    >> 0x15U)))
                                             ? VL_GTES_III(32, 
                                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                             << 0xbU) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                               >> 0x15U)), 
                                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                             << 0xbU) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                               >> 0x15U)))
                                             : ((0x20U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     >> 0x15U)))
                                                 ? (IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgExtracted_h7b65b0e5__0)
                                                 : 
                                                ((0x21U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      >> 0x15U))) 
                                                 && (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       << 0xbU) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                         >> 0x15U)) 
                                                     >= 
                                                     ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                       << 0xbU) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                         >> 0x15U)))))))))));
        bufp->chgBit(oldp+142,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+143,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+144,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+145,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+146,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0x10U))));
        bufp->chgCData(oldp+147,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0xbU))),5);
        bufp->chgIData(oldp+148,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                >> 0xbU))),32);
        bufp->chgSData(oldp+149,((0x3ffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                            >> 1U))),10);
        bufp->chgBit(oldp+150,((1U & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])));
        bufp->chgBit(oldp+151,((IData)((0U != (0x180000U 
                                               & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U])))));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__actual_taken_AGEX));
        bufp->chgIData(oldp+153,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__resolved_next_pc_AGEX),32);
        bufp->chgIData(oldp+154,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                   << 0xbU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x15U))),32);
        bufp->chgIData(oldp+155,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   << 0xbU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 0x15U))),32);
        bufp->chgIData(oldp+156,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 0xbU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               >> 0x15U))),32);
        bufp->chgIData(oldp+157,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__aluout_AGEX),32);
        bufp->chgIData(oldp+158,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__memaddr_AGEX),32);
        bufp->chgIData(oldp+159,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__br_target_AGEX),32);
        bufp->chgBit(oldp+160,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__btb_update_en_AGEX));
        bufp->chgBit(oldp+161,(((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__btb_update_en_AGEX) 
                                & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])));
        bufp->chgBit(oldp+162,(((~ (IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_DE)) 
                                & (IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__btb_update_en_AGEX))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        __Vtemp_21[0U] = ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                           ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h7117cccf__0
                           : ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                               ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h7117cccf__0
                               : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                   ? (((- (IData)((1U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                      >> 0xaU)))) 
                                       << 0xbU) | (
                                                   (0x7e0U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                       << 1U)) 
                                                   | (0x1fU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                         >> 0x12U))))
                                   : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                          >> 0xaU)))) 
                                           << 0xcU) 
                                          | ((0x800U 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 >> 7U)) 
                                             | ((0x7e0U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                    << 1U)) 
                                                | (0x1eU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      >> 0x12U)))))
                                       : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                           ? (0xfffff000U 
                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                  << 0x15U) 
                                                 | (0x1ff000U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       >> 0xbU))))
                                           : ((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                  >> 0xaU)))) 
                                                   << 0x14U) 
                                                  | ((0xff000U 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                         >> 0xbU)) 
                                                     | ((0x800U 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 0x14U)) 
                                                        | (0x7feU 
                                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                              << 1U)))))
                                               : 0U))))));
        __Vtemp_22[0U] = (IData)((((QData)((IData)(
                                                   ((0x1cU 
                                                     == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                    | ((0x1dU 
                                                        == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                       | ((0x1eU 
                                                           == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                          | ((0x1fU 
                                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x20U 
                                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | (0x21U 
                                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))))))) 
                                   << 0x34U) | (((QData)((IData)(
                                                                 ((0x19U 
                                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                  | ((0x1aU 
                                                                      == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                     | (0x1bU 
                                                                        == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                                 << 0x33U) 
                                                | (((QData)((IData)(
                                                                    (0x17U 
                                                                     == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                    << 0x32U) 
                                                   | (((QData)((IData)(
                                                                       (0x18U 
                                                                        == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                       << 0x31U) 
                                                      | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                          << 0x30U) 
                                                         | (((QData)((IData)(
                                                                             (0x1fU 
                                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x12U)))) 
                                                             << 0x2bU) 
                                                            | (0x7ffffffffffULL 
                                                               & (((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])))))))))));
        __Vtemp_22[1U] = ((__Vtemp_21[0U] << 0x15U) 
                          | (IData)(((((QData)((IData)(
                                                       ((0x1cU 
                                                         == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                        | ((0x1dU 
                                                            == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                           | ((0x1eU 
                                                               == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                              | ((0x1fU 
                                                                  == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                 | ((0x20U 
                                                                     == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                    | (0x21U 
                                                                       == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))))))) 
                                       << 0x34U) | 
                                      (((QData)((IData)(
                                                        ((0x19U 
                                                          == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                         | ((0x1aU 
                                                             == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                            | (0x1bU 
                                                               == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                        << 0x33U) | 
                                       (((QData)((IData)(
                                                         (0x17U 
                                                          == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            (0x18U 
                                                             == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                            << 0x31U) 
                                           | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                      >> 0x12U)))) 
                                                  << 0x2bU) 
                                                 | (0x7ffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])))))))))) 
                                     >> 0x20U)));
        __Vtemp_24[0U] = __Vtemp_22[0U];
        __Vtemp_24[1U] = __Vtemp_22[1U];
        __Vtemp_24[2U] = ((__Vtemp_21[0U] >> 0xbU) 
                          | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                             [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                         << 1U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 0x1fU)))] 
                             << 0x15U));
        __Vtemp_24[3U] = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                           [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                       << 1U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 >> 0x1fU)))] 
                           >> 0xbU) | ((IData)((((QData)((IData)(
                                                                 ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                                   << 0x15U) 
                                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                     >> 0xbU)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                  [
                                                                  (0x1fU 
                                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                      >> 0x1aU))])))) 
                                       << 0x15U));
        __Vtemp_24[4U] = (((IData)((((QData)((IData)(
                                                     ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                       << 0x15U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                         >> 0xbU)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                 [
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     >> 0x1aU))])))) 
                           >> 0xbU) | ((IData)(((((QData)((IData)(
                                                                  ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                                    << 0x15U) 
                                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                      >> 0xbU)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                   [
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       >> 0x1aU))]))) 
                                                >> 0x20U)) 
                                       << 0x15U));
        __Vtemp_24[5U] = ((0xf8000000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                          << 0x10U)) 
                          | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                              << 0x15U) | ((IData)(
                                                   ((((QData)((IData)(
                                                                      ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                                        << 0x15U) 
                                                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                          >> 0xbU)))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                       [
                                                                       (0x1fU 
                                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                           >> 0x1aU))]))) 
                                                    >> 0x20U)) 
                                           >> 0xbU)));
        __Vtemp_24[6U] = (((0x7ff0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          << 0x10U)) 
                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                              >> 0x10U)) | (0xf8000000U 
                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               << 0x10U)));
        __Vtemp_24[7U] = (((0x7ff0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          << 0x10U)) 
                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                              >> 0x10U)) | (0xf8000000U 
                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               << 0x10U)));
        __Vtemp_24[8U] = (((0x7ff0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                          << 0x10U)) 
                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                              >> 0x10U)) | (0x8000000U 
                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                               << 0x10U)));
        bufp->chgWData(oldp+163,(__Vtemp_24),284);
        bufp->chgIData(oldp+172,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            >> 0x1aU))]),32);
        bufp->chgIData(oldp+173,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                             << 1U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               >> 0x1fU)))]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+174,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
        bufp->chgIData(oldp+175,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
        bufp->chgIData(oldp+176,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
        bufp->chgIData(oldp+177,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
        bufp->chgIData(oldp+178,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
        bufp->chgIData(oldp+179,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
        bufp->chgIData(oldp+180,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
        bufp->chgIData(oldp+181,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
        bufp->chgIData(oldp+182,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
        bufp->chgIData(oldp+183,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
        bufp->chgIData(oldp+184,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
        bufp->chgIData(oldp+185,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
        bufp->chgIData(oldp+186,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
        bufp->chgIData(oldp+187,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
        bufp->chgIData(oldp+188,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
        bufp->chgIData(oldp+189,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
        bufp->chgIData(oldp+190,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
        bufp->chgIData(oldp+191,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
        bufp->chgIData(oldp+192,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
        bufp->chgIData(oldp+193,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
        bufp->chgIData(oldp+194,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
        bufp->chgIData(oldp+195,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
        bufp->chgIData(oldp+196,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
        bufp->chgIData(oldp+197,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
        bufp->chgIData(oldp+198,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
        bufp->chgIData(oldp+199,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
        bufp->chgIData(oldp+200,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
        bufp->chgIData(oldp+201,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
        bufp->chgIData(oldp+202,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
        bufp->chgIData(oldp+203,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
        bufp->chgIData(oldp+204,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
        bufp->chgIData(oldp+205,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
        bufp->chgIData(oldp+206,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+207,(vlSelf->clk));
    bufp->chgBit(oldp+208,(vlSelf->reset));
    bufp->chgIData(oldp+209,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0U]),32);
    bufp->chgIData(oldp+210,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1U]),32);
    bufp->chgIData(oldp+211,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2U]),32);
    bufp->chgIData(oldp+212,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3U]),32);
    bufp->chgIData(oldp+213,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4U]),32);
    bufp->chgIData(oldp+214,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5U]),32);
    bufp->chgIData(oldp+215,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6U]),32);
    bufp->chgIData(oldp+216,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7U]),32);
    bufp->chgIData(oldp+217,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8U]),32);
    bufp->chgIData(oldp+218,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9U]),32);
    bufp->chgIData(oldp+219,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->chgIData(oldp+220,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->chgIData(oldp+221,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->chgIData(oldp+222,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->chgIData(oldp+223,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->chgIData(oldp+224,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->chgIData(oldp+225,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->chgIData(oldp+226,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->chgIData(oldp+227,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->chgIData(oldp+228,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->chgIData(oldp+229,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->chgIData(oldp+230,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->chgIData(oldp+231,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->chgIData(oldp+232,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->chgIData(oldp+233,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->chgIData(oldp+234,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->chgIData(oldp+235,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->chgIData(oldp+236,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->chgIData(oldp+237,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->chgIData(oldp+238,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->chgIData(oldp+239,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->chgIData(oldp+240,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->chgIData(oldp+241,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0U]),32);
    bufp->chgIData(oldp+242,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1U]),32);
    bufp->chgIData(oldp+243,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2U]),32);
    bufp->chgIData(oldp+244,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3U]),32);
    bufp->chgIData(oldp+245,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4U]),32);
    bufp->chgIData(oldp+246,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5U]),32);
    bufp->chgIData(oldp+247,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6U]),32);
    bufp->chgIData(oldp+248,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7U]),32);
    bufp->chgQData(oldp+249,(vlSymsp->TOP__pipeline__my_AGEX_stage.bp_branch_count),64);
    bufp->chgQData(oldp+251,(vlSymsp->TOP__pipeline__my_AGEX_stage.bp_correct_count),64);
}

void Vpipeline___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_cleanup\n"); );
    // Init
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
