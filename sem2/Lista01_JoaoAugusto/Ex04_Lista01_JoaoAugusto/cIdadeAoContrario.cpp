#include "cIdadeAoContrario.h"
#include <iostream>
#include <cmath>

using namespace std;

cIdadeAoContrario::cIdadeAoContrario() {
}

cIdadeAoContrario::cIdadeAoContrario(const cIdadeAoContrario& orig) {
}

cIdadeAoContrario::~cIdadeAoContrario() {
}

void cIdadeAoContrario::insert(){
    cout << "Informe sua idade em dias: ";
    cin >> dias;
}

void cIdadeAoContrario::print(){
    int anos = dias/365;
    int meses = dias/30;
    
    cout << endl;
    cout << "A sua idade em dias é igual a: " << dias << endl;
    cout << "A sua idade em meses é igual a: " << meses << endl;
    cout << "A sua idade em anos é igual a: " << anos << endl;
}

