#include "cNota.h"
#include <iostream>
#include <cmath>

using namespace std;

cNota::cNota() {
}

cNota::cNota(const cNota& orig) {
}

cNota::~cNota() {
}

void cNota::insert(){
    cout << "Informe a nota 1: ";
    cin >> nota1;
    cout << "Informe a nota 2: ";
    cin >> nota2;
    cout << "Informe a nota 3: ";
    cin >> nota3;
}

void cNota::print(){
    float media = ((nota1 * 0.2) + (nota2 * 0.3) + (nota3 * 0.5));
    
    cout << endl;
    cout << "A média final deste aluno será: " << media << endl;
}

