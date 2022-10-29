#include "cFatorial.h"
#include <iostream>

using namespace std;

cFatorial::cFatorial() {
}

cFatorial::cFatorial(const cFatorial& orig) {
}

cFatorial::~cFatorial() {
}

void cFatorial::principal(){
    int numero;
    
    cout << "Informe o número que deseja calcular o fatorial: ";
    cin >> numero;
    
    cout << "Resultado: " << numero << "! = " << fatorial(numero) << endl;
}

int cFatorial::fatorial(int a){
    if (a > 1) {
        return (a * fatorial(a - 1));
    } else {
        return 1;
    }
}