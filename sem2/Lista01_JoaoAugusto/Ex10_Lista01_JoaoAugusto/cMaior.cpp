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
    cout << "Informe o valor de a: ";
    cin >> a;
    cout << "Informe o valor de b: ";
    cin >> b;
    cout << "Informe o valor de c: ";
    cin >> c;
}

void cMaior::print(){
    int maior = -99999999;
    
    if (a > maior){
        maior = a;
    }
    
    if (b > maior){
        maior = b;
    }
    
    if (c > maior){
        maior = c;
    }
    
    cout << endl;
    cout << "O maior número digitado foi: " << maior;
}

