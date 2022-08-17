#include "cNadador.h"
#include <iostream>
#include <cmath>

using namespace std;

cNadador::cNadador() {
}

cNadador::cNadador(const cNadador& orig) {
}

cNadador::~cNadador() {
}

void cNadador::insert(){
    cout << "Informe a idade do nadador: ";
    cin >> idade;
}

void cNadador::print(){
    if (idade >= 5 && idade <= 7){
        cout << "O nadador está na categoria Infantil A";
    } else if (idade >= 8 && idade <= 10){
        cout << "O nadador está na categoria Infantil B";
    } else if (idade >= 11 && idade <= 13){
        cout << "O nadador está na categoria Juvenil A";
    } else if (idade >= 14 && idade <= 17){
        cout << "O nadador está na categoria Juvenil B";
    } else if (idade >= 18){
        cout << "O nadador está na categoria Adulto";
    } else {
        cout << "O nadador não possui idade compatível para a competição!";
    }
}

