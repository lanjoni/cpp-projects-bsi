#include "cIdade.h"
#include <iostream>
#include <cmath>

using namespace std;

cIdade::cIdade() {
}

cIdade::cIdade(const cIdade& orig) {
}

cIdade::~cIdade() {
}

void cIdade::insert(){
    cout << "Informe sua idade em anos: ";
    cin >> anos;
    cout << "E quantos meses a mais: ";
    cin >> meses;
    cout << "E quantos dias a mais: ";
    cin >> dias;
}

void cIdade::print(){
    int anos_dias = anos * 365;
    int meses_dias = meses * 30;
    
    int idade = anos_dias + meses_dias + dias;
    
    cout << endl;
    cout << "A sua idade em dias é igual a: " << idade;
}

