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
    cout << "Informe a primeira nota: ";
    cin >> nota1;
    cout << "Informe a segunda nota: ";
    cin >> nota2;
    cout << "Informe a terceira nota: ";
    cin >> nota3;
    cout << endl << "**********" << endl << "1 - Aritmética" << endl << "2 - Ponderada (3, 3, 4)" << endl << "3 - Harmônica" << endl << "**********" << endl;
    cout << "Informe o tipo de média que deseja calcular: ";
    cin >> tipo;
}

void cMedia::print(){
    float media = 0;
    
    switch(tipo){
        case 1:
            media = (nota1 + nota2 + nota3)/3;
            break;
        case 2:
            media = (nota1 * 0.3) + (nota2 * 0.3) + (nota3 * 0.4);
            break;
        case 3:
            media = 3/((1/nota1) + (1/nota2) + (1/nota3));
            break;
        default:
            cout << "O tipo de média desejado não é compatível!" << endl;
            exit(0);
            break;
    }
    
    cout << "A média final é: " << media << endl;
}

