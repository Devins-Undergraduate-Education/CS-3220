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
    VlWide<7>/*223:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_10;
    VlWide<6>/*191:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_19;
    VlWide<8>/*255:0*/ __Vtemp_22;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
        bufp->chgWData(oldp+1,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),129);
        bufp->chgWData(oldp+6,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),238);
        bufp->chgWData(oldp+14,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),207);
        bufp->chgWData(oldp+21,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),174);
        bufp->chgBit(oldp+27,(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE));
        bufp->chgQData(oldp+28,((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE)) 
                                  << 0x20U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_target_AGEX)))),33);
        bufp->chgBit(oldp+30,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE));
        bufp->chgQData(oldp+31,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),38);
        __Vtemp_7[0U] = ((0xffffff00U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                         << 1U)) | 
                         (((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__rd_mem_AGEX) 
                           << 7U) | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__wr_mem_AGEX) 
                                      << 6U) | (0x3fU 
                                                & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))));
        __Vtemp_7[1U] = (((0xfeU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                    << 1U)) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               >> 0x1fU)) 
                         | ((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__rd_mem_AGEX) 
                                                                    | (IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__wr_mem_AGEX))
                                                                    ? vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_hf574367f__0
                                                                    : 0U))))) 
                            << 8U));
        __Vtemp_7[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__rd_mem_AGEX) 
                                                                  | (IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__wr_mem_AGEX))
                                                                  ? vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_hf574367f__0
                                                                  : 0U))))) 
                          >> 0x18U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__rd_mem_AGEX) 
                                                                     | (IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__wr_mem_AGEX))
                                                                     ? vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_hf574367f__0
                                                                     : 0U)))) 
                                                >> 0x20U)) 
                                       << 8U));
        __Vtemp_7[3U] = (((IData)((0x3fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                       << 0x19U) | 
                                      ((QData)((IData)(
                                                       vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                       >> 7U)))) << 8U) 
                         | ((IData)(((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__rd_mem_AGEX) 
                                                                     | (IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__wr_mem_AGEX))
                                                                     ? vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_hf574367f__0
                                                                     : 0U)))) 
                                     >> 0x20U)) >> 0x18U));
        __Vtemp_7[4U] = ((0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 1U)) | 
                         (((IData)((0x3fffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                        << 0x19U) | 
                                       ((QData)((IData)(
                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                        >> 7U)))) >> 0x18U) 
                          | ((IData)(((0x3fffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                           << 0x19U) 
                                          | ((QData)((IData)(
                                                             vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                             >> 7U))) 
                                      >> 0x20U)) << 8U)));
        __Vtemp_7[5U] = (((0x3ffeU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                      << 1U)) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x1fU)) 
                         | (0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                           << 1U)));
        __Vtemp_7[6U] = (((0x3ffeU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                      << 1U)) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                 >> 0x1fU)) 
                         | (0x4000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                       << 1U)));
        bufp->chgWData(oldp+33,(__Vtemp_7),207);
        bufp->chgBit(oldp+40,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                     >> 0xdU))));
        bufp->chgIData(oldp+41,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                  << 0x13U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                               >> 0xdU))),32);
        bufp->chgIData(oldp+42,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                  << 0x13U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0xdU))),32);
        bufp->chgIData(oldp+43,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                  << 0x19U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 7U))),32);
        bufp->chgIData(oldp+44,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  << 0x13U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0xdU))),32);
        bufp->chgCData(oldp+45,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 7U))),6);
        bufp->chgBit(oldp+46,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX));
        bufp->chgBit(oldp+47,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                     >> 6U))));
        bufp->chgBit(oldp+48,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                     >> 5U))));
        bufp->chgCData(oldp+49,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])),5);
        bufp->chgIData(oldp+50,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  << 0x19U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 7U))),32);
        bufp->chgIData(oldp+51,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  << 0x19U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               >> 7U))),32);
        bufp->chgIData(oldp+52,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  << 0x19U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                               >> 7U))),32);
        bufp->chgIData(oldp+53,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_target_AGEX),32);
        bufp->chgIData(oldp+54,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX),32);
        bufp->chgIData(oldp+55,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__rd_mem_AGEX) 
                                  | (IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__wr_mem_AGEX))
                                  ? vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_hf574367f__0
                                  : 0U)),32);
        bufp->chgBit(oldp+56,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__rd_mem_AGEX));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__wr_mem_AGEX));
        bufp->chgBit(oldp+58,((0x19U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 7U)))));
        bufp->chgBit(oldp+59,((0x1bU == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 7U)))));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__is_branch_AGEX));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_taken_AGEX));
        bufp->chgBit(oldp+62,((1U & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U])));
        bufp->chgIData(oldp+63,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U]),32);
        bufp->chgIData(oldp+64,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U]),32);
        bufp->chgIData(oldp+65,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U]),32);
        bufp->chgIData(oldp+66,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]),32);
        bufp->chgCData(oldp+67,((7U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+68,((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+69,((0x7fU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U])),7);
        bufp->chgCData(oldp+70,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
        bufp->chgCData(oldp+71,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
        bufp->chgIData(oldp+72,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                  ? (((- (IData)((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x1fU))) 
                                      << 0xbU) | (0x7ffU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 0x14U)))
                                  : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                      ? (((- (IData)(
                                                     (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | ((0x800U 
                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 7U)))))
                                      : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                          ? (((- (IData)(
                                                         (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 0x1fU))) 
                                              << 0xbU) 
                                             | ((0x7e0U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 7U))))
                                          : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                              ? (0xfffff000U 
                                                 & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U])
                                              : ((2U 
                                                  == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                               >> 0x1fU))) 
                                                   << 0x14U) 
                                                  | ((0xff000U 
                                                      & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U]) 
                                                     | ((0x800U 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                              >> 0x14U)))))
                                                  : 0U)))))),32);
        bufp->chgCData(oldp+73,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+74,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+75,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 7U))),5);
        bufp->chgBit(oldp+76,((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                               & ((0x1cU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((0x1dU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0x1eU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | ((0x1fU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                           | ((0x20U 
                                               == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                              | (0x21U 
                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))))))));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__writes_rd_instr));
        bufp->chgBit(oldp+79,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                             >> 0x25U)))));
        bufp->chgCData(oldp+80,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                  >> 0x20U)))),5);
        bufp->chgIData(oldp+81,((IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE)),32);
        bufp->chgBit(oldp+82,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE));
        bufp->chgBit(oldp+83,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE));
        bufp->chgIData(oldp+84,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs),32);
        bufp->chgBit(oldp+85,((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                               & (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                      >> (0x1fU & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0xfU)))) 
                                  | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                     & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                        >> (0x1fU & 
                                            (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 0x14U))))))));
        bufp->chgIData(oldp+86,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE),32);
        bufp->chgIData(oldp+88,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                             >> 2U))]),32);
        bufp->chgIData(oldp+89,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
        __Vtemp_10[0U] = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE;
        __Vtemp_10[1U] = ((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch);
        __Vtemp_10[2U] = (IData)((((QData)((IData)(
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                   [
                                                   (0x3fffU 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                       >> 2U))])) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))));
        __Vtemp_10[3U] = (IData)(((((QData)((IData)(
                                                    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                    [
                                                    (0x3fffU 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                        >> 2U))])) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                  >> 0x20U));
        __Vtemp_10[4U] = 1U;
        bufp->chgWData(oldp+90,(__Vtemp_10),129);
        bufp->chgBit(oldp+95,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                     >> 0xeU))));
        __Vtemp_14[0U] = (IData)((((QData)((IData)(
                                                   ((0x25U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                         >> 8U)))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__byte_data_MEM) 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__byte_data_MEM))
                                                     : 
                                                    ((0x27U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                          >> 8U)))
                                                      ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__byte_data_MEM)
                                                      : 
                                                     ((0x26U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                           >> 8U)))
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__halfword_data_MEM) 
                                                                       >> 0xfU)))) 
                                                        << 0x10U) 
                                                       | (IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__halfword_data_MEM))
                                                       : 
                                                      ((0x28U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                            >> 8U)))
                                                        ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__halfword_data_MEM)
                                                        : vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__rd_val_MEM)))))) 
                                   << 7U) | (QData)((IData)(
                                                            ((0x40U 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                 >> 1U)) 
                                                             | (0x3fU 
                                                                & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]))))));
        __Vtemp_14[1U] = (((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                            << 0x1fU) | (0x7fffff80U 
                                         & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                            >> 1U))) 
                          | (IData)(((((QData)((IData)(
                                                       ((0x25U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                             >> 8U)))
                                                         ? 
                                                        (((- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__byte_data_MEM) 
                                                                         >> 7U)))) 
                                                          << 8U) 
                                                         | (IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__byte_data_MEM))
                                                         : 
                                                        ((0x27U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                              >> 8U)))
                                                          ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__byte_data_MEM)
                                                          : 
                                                         ((0x26U 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                               >> 8U)))
                                                           ? 
                                                          (((- (IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__halfword_data_MEM) 
                                                                           >> 0xfU)))) 
                                                            << 0x10U) 
                                                           | (IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__halfword_data_MEM))
                                                           : 
                                                          ((0x28U 
                                                            == 
                                                            (0x3fU 
                                                             & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                                >> 8U)))
                                                            ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__halfword_data_MEM)
                                                            : vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__rd_val_MEM)))))) 
                                       << 7U) | (QData)((IData)(
                                                                ((0x40U 
                                                                  & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                     >> 1U)) 
                                                                 | (0x3fU 
                                                                    & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]))))) 
                                     >> 0x20U)));
        __Vtemp_14[2U] = ((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                    >> 1U)) | ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                << 0x1fU) 
                                               | (0x7fffff80U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                     >> 1U))));
        __Vtemp_14[3U] = ((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                    >> 1U)) | ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                                << 0x1fU) 
                                               | (0x7fffff80U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                     >> 1U))));
        __Vtemp_14[4U] = ((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                    >> 1U)) | ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                                << 0x1fU) 
                                               | (0x7fffff80U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                                     >> 1U))));
        __Vtemp_14[5U] = ((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                    >> 1U)) | (0x3f80U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                                  >> 1U)));
        bufp->chgWData(oldp+96,(__Vtemp_14),174);
        bufp->chgCData(oldp+102,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                           >> 8U))),6);
        bufp->chgIData(oldp+103,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+104,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                   << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                                >> 0xeU))),32);
        bufp->chgIData(oldp+105,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                   << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                >> 0xeU))),32);
        bufp->chgIData(oldp+106,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+107,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+108,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                >> 8U))),32);
        bufp->chgBit(oldp+109,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                      >> 7U))));
        bufp->chgBit(oldp+110,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                      >> 6U))));
        bufp->chgCData(oldp+111,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),5);
        bufp->chgBit(oldp+112,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                      >> 5U))));
        bufp->chgIData(oldp+113,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__rd_val_MEM),32);
        bufp->chgCData(oldp+114,((3U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                        >> 8U))),2);
        bufp->chgCData(oldp+115,((0x18U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                           >> 5U))),5);
        bufp->chgCData(oldp+116,((0x10U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                           >> 5U))),5);
        bufp->chgSData(oldp+117,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__halfword_data_MEM),16);
        bufp->chgCData(oldp+118,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__byte_data_MEM),8);
        bufp->chgIData(oldp+119,(((0x25U == (0x3fU 
                                             & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                >> 8U)))
                                   ? (((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__byte_data_MEM) 
                                                      >> 7U)))) 
                                       << 8U) | (IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__byte_data_MEM))
                                   : ((0x27U == (0x3fU 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                    >> 8U)))
                                       ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__byte_data_MEM)
                                       : ((0x26U == 
                                           (0x3fU & 
                                            (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                             >> 8U)))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__halfword_data_MEM) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__halfword_data_MEM))
                                           : ((0x28U 
                                               == (0x3fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                      >> 8U)))
                                               ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__halfword_data_MEM)
                                               : vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__rd_val_MEM))))),32);
        bufp->chgIData(oldp+120,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__store_mask_MEM),32);
        bufp->chgIData(oldp+121,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__store_data_aligned_MEM),32);
        bufp->chgIData(oldp+122,((((~ vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__store_mask_MEM) 
                                   & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__rd_val_MEM) 
                                  | vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__store_data_aligned_MEM)),32);
        bufp->chgBit(oldp+123,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                      >> 0xdU))));
        bufp->chgCData(oldp+124,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                           >> 7U))),6);
        bufp->chgIData(oldp+125,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                   << 0x13U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                                >> 0xdU))),32);
        bufp->chgIData(oldp+126,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                   << 0x13U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                                >> 0xdU))),32);
        bufp->chgIData(oldp+127,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                   << 0x19U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                >> 7U))),32);
        bufp->chgBit(oldp+128,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                      >> 5U))));
        bufp->chgCData(oldp+129,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
        bufp->chgIData(oldp+130,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__regval_WB),32);
        bufp->chgIData(oldp+131,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                   << 0x19U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                >> 7U))),32);
        bufp->chgIData(oldp+132,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                   << 0x19U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                >> 7U))),32);
        bufp->chgBit(oldp+133,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                      >> 6U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        __Vtemp_19[0U] = ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                           ? (((- (IData)((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 0x1fU))) 
                               << 0xbU) | (0x7ffU & 
                                           (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 0x14U)))
                           : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                               ? (((- (IData)((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0x800U 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 7U)))))
                               : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                   ? (((- (IData)((
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x1fU))) 
                                       << 0xbU) | (
                                                   (0x7e0U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 7U))))
                                   : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                       ? (0xfffff000U 
                                          & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U])
                                       : ((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                           ? (((- (IData)(
                                                          (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                           >> 0x1fU))) 
                                               << 0x14U) 
                                              | ((0xff000U 
                                                  & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U]) 
                                                 | ((0x800U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 0x14U)))))
                                           : 0U)))));
        __Vtemp_22[0U] = ((__Vtemp_19[0U] << 7U) | 
                          (((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                             & ((0x1cU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                | ((0x1dU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                   | ((0x1eU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                      | ((0x1fU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                         | ((0x20U 
                                             == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                            | (0x21U 
                                               == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))))) 
                            << 6U) | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                       << 5U) | (0x1fU 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                    >> 7U)))));
        __Vtemp_22[1U] = ((__Vtemp_19[0U] >> 0x19U) 
                          | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                             [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 0x14U))] 
                             << 7U));
        __Vtemp_22[2U] = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                           [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                      >> 0x14U))] >> 0x19U) 
                          | ((IData)((((QData)((IData)(
                                                       vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                   [
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 0xfU))])))) 
                             << 7U));
        __Vtemp_22[3U] = (((IData)((((QData)((IData)(
                                                     vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                 [
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                     >> 0xfU))])))) 
                           >> 0x19U) | ((IData)(((((QData)((IData)(
                                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                    [
                                                                    (0x1fU 
                                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                        >> 0xfU))]))) 
                                                 >> 0x20U)) 
                                        << 7U));
        __Vtemp_22[4U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                           << 0xdU) | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                                        << 7U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                              [
                                                                              (0x1fU 
                                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0xfU))]))) 
                                                           >> 0x20U)) 
                                                  >> 0x19U)));
        __Vtemp_22[5U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                           >> 0x13U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                        << 0xdU));
        __Vtemp_22[6U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                           >> 0x13U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        << 0xdU));
        __Vtemp_22[7U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                           >> 0x13U) | (0x2000U & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 0xdU)));
        bufp->chgWData(oldp+134,(__Vtemp_22),238);
        bufp->chgIData(oldp+142,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 0xfU))]),32);
        bufp->chgIData(oldp+143,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 0x14U))]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+144,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
        bufp->chgIData(oldp+145,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
        bufp->chgIData(oldp+146,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
        bufp->chgIData(oldp+147,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
        bufp->chgIData(oldp+148,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
        bufp->chgIData(oldp+149,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
        bufp->chgIData(oldp+150,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
        bufp->chgIData(oldp+151,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
        bufp->chgIData(oldp+152,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
        bufp->chgIData(oldp+153,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
        bufp->chgIData(oldp+154,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
        bufp->chgIData(oldp+155,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
        bufp->chgIData(oldp+156,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
        bufp->chgIData(oldp+157,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
        bufp->chgIData(oldp+158,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
        bufp->chgIData(oldp+159,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
        bufp->chgIData(oldp+160,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
        bufp->chgIData(oldp+161,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
        bufp->chgIData(oldp+162,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
        bufp->chgIData(oldp+163,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
        bufp->chgIData(oldp+164,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
        bufp->chgIData(oldp+165,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
        bufp->chgIData(oldp+166,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
        bufp->chgIData(oldp+167,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
        bufp->chgIData(oldp+168,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
        bufp->chgIData(oldp+169,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
        bufp->chgIData(oldp+170,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
        bufp->chgIData(oldp+171,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
        bufp->chgIData(oldp+172,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
        bufp->chgIData(oldp+173,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
        bufp->chgIData(oldp+174,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
        bufp->chgIData(oldp+175,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
        bufp->chgIData(oldp+176,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+177,(vlSelf->clk));
    bufp->chgBit(oldp+178,(vlSelf->reset));
    bufp->chgIData(oldp+179,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0U]),32);
    bufp->chgIData(oldp+180,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1U]),32);
    bufp->chgIData(oldp+181,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2U]),32);
    bufp->chgIData(oldp+182,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3U]),32);
    bufp->chgIData(oldp+183,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4U]),32);
    bufp->chgIData(oldp+184,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5U]),32);
    bufp->chgIData(oldp+185,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6U]),32);
    bufp->chgIData(oldp+186,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7U]),32);
    bufp->chgIData(oldp+187,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8U]),32);
    bufp->chgIData(oldp+188,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9U]),32);
    bufp->chgIData(oldp+189,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->chgIData(oldp+190,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->chgIData(oldp+191,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->chgIData(oldp+192,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->chgIData(oldp+193,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->chgIData(oldp+194,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->chgIData(oldp+195,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->chgIData(oldp+196,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->chgIData(oldp+197,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->chgIData(oldp+198,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->chgIData(oldp+199,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->chgIData(oldp+200,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->chgIData(oldp+201,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->chgIData(oldp+202,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->chgIData(oldp+203,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->chgIData(oldp+204,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->chgIData(oldp+205,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->chgIData(oldp+206,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->chgIData(oldp+207,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->chgIData(oldp+208,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->chgIData(oldp+209,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->chgIData(oldp+210,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->chgIData(oldp+211,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0U]),32);
    bufp->chgIData(oldp+212,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1U]),32);
    bufp->chgIData(oldp+213,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2U]),32);
    bufp->chgIData(oldp+214,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3U]),32);
    bufp->chgIData(oldp+215,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4U]),32);
    bufp->chgIData(oldp+216,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5U]),32);
    bufp->chgIData(oldp+217,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6U]),32);
    bufp->chgIData(oldp+218,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7U]),32);
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
