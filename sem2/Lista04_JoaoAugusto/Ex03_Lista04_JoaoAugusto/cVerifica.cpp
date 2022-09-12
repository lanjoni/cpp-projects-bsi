#include "cVerifica.h"
#include <cstdlib>
#include <iostream>

using namespace std;

cVerifica::cVerifica() {
}

cVerifica::cVerifica(const cVerifica& orig) {
}

cVerifica::~cVerifica() {
}

void cVerifica::verificar(){
    int n;
    
    cout << "Informe o valor de N: ";
    cin >> n;
    
    cout << endl << retorno(n) << endl;
}

int cVerifica::retorno(int n){
    if (n > 0){
        return 1;
    } else if (n < 0){
        return -1;
    } else {
        return 0;
    }
}