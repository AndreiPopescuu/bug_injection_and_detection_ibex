// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop___024root
VL_CONSTINIT_CXX20 const ::IData/*31:0*/ Vtop___024root::encarsia_tb__DOT__RegFileDataWidth{0x00000020U};


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

void Vtop___024root__ctor(Vtop___024root* vlSelf, Vtop__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VnbaClosurePool_0);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VnbaClosurePool_1);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vdly_NbaLocalQueue__encarsia_tb__DOT__rf_mem_0);
    // Reset structure values
    Vtop___024root___ctor_var_reset(vlSelf);
}

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* namep) {
    Vtop___024root__ctor(this, symsp, namep);
}

void Vtop___024root__dtor(Vtop___024root* vlSelf) {
    // Destroy members
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vdly_NbaLocalQueue__encarsia_tb__DOT__rf_mem_0);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VnbaClosurePool_1);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VnbaClosurePool_0);
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vtop___024root::~Vtop___024root() {
    Vtop___024root__dtor(this);
}
