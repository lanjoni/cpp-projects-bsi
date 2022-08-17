#include "cDistancia.h"
#include <iostream>
#include <cmath>

using namespace std;

cDistancia::cDistancia() {
}

cDistancia::cDistancia(const cDistancia& orig) {
}

cDistancia::~cDistancia() {
}

void cDistancia::insert(){
    cout << "Calcular distância entre os pontos!" << endl << endl;
    
    cout << "- Primeiro ponto -" << endl;
    cout << "Informe o valor do eixo X do primeiro ponto: ";
    cin >> this->x1;
    cout << "Informe o valor do eixo Y do primeiro ponto: ";
    cin >> this->y1;
    cout << endl;
    cout << "- Segundo ponto - " << endl;
    cout << "Informe o valor do eixo X do segundo ponto: ";
    cin >> this->x2;
    cout << "Informe o valor do eixo Y do segundo ponto: ";
    cin >> this->y2;
    
    cout << endl;
    cout << "A distância calculada é igual a: " << this->calcularDistancia();
}

float cDistancia::calcularDistancia(){
    float part1, part2;
    
    part1 = pow((this->x2 - this->x1), 2);
    part2 = pow((this->y2 - this->y1), 2);
    
    float distancia = sqrt(part1 + part2);
    
    return distancia;
}

