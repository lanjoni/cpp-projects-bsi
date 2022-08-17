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
    cout << "Informe o custo de fabricação do carro: ";
    cin >> custo_f;
}

void cCarro::print(){
    float distribuidor = custo_f * 0.28;
    float impostos = custo_f * 0.45;
    float custo_c = custo_f + distribuidor + impostos;
    
    cout << endl;
    cout << "O custo do consumidor será igual a: " << custo_c << endl;
}

