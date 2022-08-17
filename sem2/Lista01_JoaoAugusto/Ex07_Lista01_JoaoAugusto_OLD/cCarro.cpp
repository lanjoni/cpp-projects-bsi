#include "cCarro.h"
#include <iostream>
#include <cmath>

using namespace std;

cCarro::cCarro() {
}

cCarro::cCarro(const cCarro& orig) {
}

cCarro::~cCarro() {
}

void cCarro::insert(){
    cout << "Informe o custo de fábrica do carro: ";
    cin >> custo_f;
}

void cCarro::print(){
    float distribuidor = custo_f * 0.28;
    float impostos = custo_f * 0.45;
    float custo_c = custo_f + distribuidor + impostos;
    
    cout << endl << "O valor do carro para o consumidor será igual a: R$" << custo_c << endl;
}

