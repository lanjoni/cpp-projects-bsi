#include "cNumero.h"
#include <iostream>
#include <cmath>

using namespace std;

cNumero::cNumero() {
}

cNumero::cNumero(const cNumero& orig) {
}

cNumero::~cNumero() {
}

void cNumero::insert(){
    cout << "Informe o valor do número: ";
    cin >> n;
}

void cNumero::print(){
    if (n % 2 == 0){
        cout << "O número " << n << " é par!" << endl;
    } else {
        cout << "O número " << n << " é ímpar!" << endl;
    }
    
    if (n >= 0){
        cout << "O número " << n << " é positivo!" << endl;
    } else {
        cout << "O número " << n << " é negativo!" << endl;
    }
}

