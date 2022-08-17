#include "cPeso.h"
#include <iostream>
#include <cmath>
#include <cctype>

using namespace std;

cPeso::cPeso() {
}

cPeso::cPeso(const cPeso& orig) {
}

cPeso::~cPeso() {
}

void cPeso::insert(){
    cout << "Informe o sexo (M - Masculino / F - Feminino): ";
    cin >> sexo;
    cout << "Informe a altura: ";
    cin >> altura;
}

void cPeso::print(){
    float peso_ideal = 0;
    
    char sexo_f = toupper(sexo);
    
    switch(sexo_f){
        case 'M':
            peso_ideal = (72.7 * altura) - 58;
            break;
        case 'F':
            peso_ideal = (62.1 * altura) - 44.7;
            break;
        default:
            cout << "O sexo informado não corresponde!" << endl;
            exit(0);
            break;
    }
    
    cout << endl << "Seu peso ideal é: " << peso_ideal << endl;
}