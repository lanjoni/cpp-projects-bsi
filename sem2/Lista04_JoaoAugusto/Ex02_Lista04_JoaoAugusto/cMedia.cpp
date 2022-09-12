#include "cMedia.h"
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

cMedia::cMedia() {
}

cMedia::cMedia(const cMedia& orig) {
}

cMedia::~cMedia() {
}

void cMedia::calcular(){
    char opc;
    float nota1, nota2, nota3;
    
    cout << "***** CALCULAR MEDIA *****" << endl;
    cout << "Informe a nota 1: ";
    cin >> nota1;
    cout << "Informe a nota 2: ";
    cin >> nota2;
    cout << "Informe a nota 3: ";
    cin >> nota3;
    cout << "\nA - Aritmética | P - Ponderada\nInforme o tipo de média que deseja calcular: ";
    cin >> opc;
    
    retorno(opc, nota1, nota2, nota3);
}

void cMedia::retorno(char opc, float nota1, float nota2, float nota3){    
    /*this->opc = opc;
    this->nota1 = nota1;
    this->nota2 = nota2;
    this->nota3 = nota3;*/
    float media;
    
    char opcao = toupper(opc);
    
    switch(opcao){
        case 'A':
            media = (nota1 + nota2 + nota3)/3;
            break;
        case 'P':
            media = (nota1 * 0.5) + (nota2 * 0.3) + (nota3 * 0.2);
            break;
        default:
            cout << "ERRO! Tipo de média não corresponde! Tente novamente...";
            calcular();
            exit(0);
            break;
    }
    
    cout << "A média calculada é igual a: " << media;
}