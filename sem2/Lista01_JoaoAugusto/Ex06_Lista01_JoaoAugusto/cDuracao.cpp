#include "cDuracao.h"
#include <iostream>
#include <cmath>

using namespace std;

cDuracao::cDuracao() {
}

cDuracao::cDuracao(const cDuracao& orig) {
}

cDuracao::~cDuracao() {
}

void cDuracao::insert(){
    cout << "Informe o tempo de duração do evento em segundos: ";
    cin >> segundos;
}

void cDuracao::print(){
    float minutos = segundos/60;
    float horas = minutos/60;
    
    cout << endl;
    cout << "O tempo de duração do evento em segundos é: " << segundos << endl;
    cout << "O tempo de duração do evento em minutos é: " << minutos << endl;
    cout << "O tempo de duração do evento em horas é: " << horas << endl;
}

