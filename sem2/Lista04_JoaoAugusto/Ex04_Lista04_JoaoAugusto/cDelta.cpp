#include "cDelta.h"
#include <iostream>
#include <cstdlib>

using namespace std;

cDelta::cDelta() {
}

cDelta::cDelta(const cDelta& orig) {
}

cDelta::~cDelta() {
}

void cDelta::delta(){
    float a, b, c;
    
    cout << "Informe o valor de a: ";
    cin >> a;
    cout << "Informe o valor de b: ";
    cin >> b;
    cout << "Informe o valor de c: ";
    cin >> c;
    
    cout << "O valor de delta é: " << calculo(a, b, c);
}

float cDelta::calculo(float a, float b, float c){
    float resultado;
    
    resultado = (b * b) - 4 * a * c;
    
    return resultado;
}
