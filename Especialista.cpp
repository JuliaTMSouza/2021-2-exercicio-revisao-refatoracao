#include <iostream>
#include <string>
#include "Especialista.hpp"

void Especialista::print() {
    cout << "[Especialista]" << endl;
    Funcionario::print();
    
}

double Especialista::comissao(double valorVenda){
    double c = valorVenda*perc;
    return c;
}