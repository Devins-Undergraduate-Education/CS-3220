// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axi4_ram.h for the primary calling header

#include "Vtb_axi4_ram__pch.h"
#include "Vtb_axi4_ram__Syms.h"
#include "Vtb_axi4_ram_tb_axi4_ram.h"

void Vtb_axi4_ram_tb_axi4_ram___ctor_var_reset(Vtb_axi4_ram_tb_axi4_ram* vlSelf);

Vtb_axi4_ram_tb_axi4_ram::Vtb_axi4_ram_tb_axi4_ram(Vtb_axi4_ram__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_axi4_ram_tb_axi4_ram___ctor_var_reset(this);
}

void Vtb_axi4_ram_tb_axi4_ram::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_axi4_ram_tb_axi4_ram::~Vtb_axi4_ram_tb_axi4_ram() {
}
