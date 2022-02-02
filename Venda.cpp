#include <iostream>
#include <string>
#include "Venda.hpp"

void Venda::print(){
    cout << "Especialista: ";
    cout << esp.nome;
    std::cout << " Cliente: ";
    cout << cliente;
}