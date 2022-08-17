#include "cSaldo.h"
#include <iostream>
#include <cmath>

using namespace std;

cSaldo::cSaldo() {
}

cSaldo::cSaldo(const cSaldo& orig) {
}

cSaldo::~cSaldo() {
}

void cSaldo::insert(){
    cout << "Informe seu saldo médio: ";
    cin >> saldoMedio;
}

void cSaldo::print(){
    float credito = 0;
    int opc = 0;
    
    if (saldoMedio >= 0 && saldoMedio <= 200){
        opc = 1;
    } else if (saldoMedio >= 201 && saldoMedio <= 400){
        opc = 2;
    } else if (saldoMedio >= 401 && saldoMedio <= 600){
        opc = 3;
    } else if (saldoMedio >= 601){
        opc = 4;
    }
    
    switch(opc){
        case 1:
            cout << "Você não possui nenhum valor para crédito disponível!" << endl;
            break;
        case 2:
            credito = saldoMedio * 0.2;
            cout << "Seu valor para crédito disponível é igual a R$" << credito << endl;
            break;
        case 3:
            credito = saldoMedio * 0.3;
            cout << "Seu valor para crédito disponível é igual a R$" << credito << endl;
            break;
        case 4:
            credito = saldoMedio * 0.4;
            cout << "Seu valor para crédito disponível é igual a R$" << credito << endl;
            break;
        default:
            cout << "O valor digitado não é compatível! Por favor, tente novamente..." << endl;
            exit(0);
            break;
    }
}

