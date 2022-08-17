#include "cMaior.h"
#include <iostream>
#include <cmath>

using namespace std;

cMaior::cMaior() {
}

cMaior::cMaior(const cMaior& orig) {
}

cMaior::~cMaior() {
}

void cMaior::insert(){
    cout << "Informe o valor do primeiro número: ";
    cin >> n1;
    cout << "Informe o valor do segundo número: ";
    cin >> n2;
    cout << "Informe o valor do terceiro número: ";
    cin >> n3;
}

void cMaior::print(){
    int maior = -9999999999;
    
    if (n1 > maior){
        maior = n1;
    }
    
    if (n2 > maior){
        maior = n2;
    }
    
    if (n3 > maior){
        maior = n3;
    }
    
    cout << endl << "O maior valor digitado foi: " << maior << endl;
}

