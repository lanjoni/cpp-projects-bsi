#include "cCalculo.h"
#include <iostream>
#include <cmath>

using namespace std;

cCalculo::cCalculo() {
}

cCalculo::cCalculo(const cCalculo& orig) {
}

cCalculo::~cCalculo() {
}

void cCalculo::insert(){
    cout << "Informe o valor de A: ";
    cin >> a;
    cout << "Informe o valor de B: ";
    cin >> b;
    cout << "Informe o valor de C: ";
    cin >> c;
}

void cCalculo::print(){
    int R = pow((a + b),2);
    int S = pow((b + c), 2);
    
    int D = (R + S)/2;
    
    cout << endl;
    cout << "Valor final: " << D;
}
