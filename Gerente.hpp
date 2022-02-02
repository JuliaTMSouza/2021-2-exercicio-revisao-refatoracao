#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

#include "Funcionario.hpp"
using namespace std;

double valorBonificacao = 15.0;

class Gerente : public Funcionario {
    
    public:
        double bonificacao;

        void print();

        double calcula_bonificacao_gerente(int numTotalVendas);

};

#endif

