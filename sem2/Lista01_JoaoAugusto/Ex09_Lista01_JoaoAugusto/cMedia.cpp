#include "cMedia.h"
#include <iostream>
#include <cmath>

using namespace std;

cMedia::cMedia() {
}

cMedia::cMedia(const cMedia& orig) {
}

cMedia::~cMedia() {
}

void cMedia::insert(){
    cout << "Informe a nota 1: ";
    cin >> nota1;
    cout << "Informe a nota 2: ";
    cin >> nota2;
    cout << "Informe a nota 3: ";
    cin >> nota3;
}

void cMedia::print(){
    float media = (nota1 + nota2 + nota3)/3;
    
    if (media >= 6){
        cout << "Aluno APROVADO com média igual a: " << media << endl;
    } else {
        cout << "Aluno REPROVADO com média igual a: " << media << endl;
    }
}

