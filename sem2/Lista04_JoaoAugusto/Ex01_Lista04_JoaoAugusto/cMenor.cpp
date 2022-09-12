#include "cMenor.h"
#include <cstdlib>
#include <cmath>
#include <iostream>

using namespace std;

cMenor::cMenor() {
}

cMenor::cMenor(const cMenor& orig) {
}

cMenor::~cMenor() {
}

void cMenor::verifica(){
    int n1 = 0, n2 = 0;
    
    cout << "Informe o número 1: ";
    cin >> n1;
    cout << "Informe o número 2: ";
    cin >> n2;
    
    retorno(n1, n2);
}

void cMenor::retorno(int n1, int n2){
    int menor = 999999;
    
    if (n1 < menor){
        menor = n1;
    }
    
    if (n2 < menor){
        menor = n2;
    }
    
    cout << "O menor número informado foi: " << menor;
}

