#include <iostream>
#include <string>
#include "Gerente.hpp"

void Gerente::print() {
    cout<< "[Gerente]" << endl;
    Funcionario::print();
}

double Gerente::calcula_bonificacao_gerente(int numTotalVendas) {
    double x;
    return numTotalVendas*valorBonificacao;
}