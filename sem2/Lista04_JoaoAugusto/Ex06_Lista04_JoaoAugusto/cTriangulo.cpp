#include "cTriangulo.h"
#include <cstdlib>
#include <iostream>

using namespace std;

cTriangulo::cTriangulo() {
}

cTriangulo::cTriangulo(const cTriangulo& orig) {
}

cTriangulo::~cTriangulo() {
}

void cTriangulo::triangulo(){
    float x, y, z;
    
    cout << "Informe o valor do lado X: ";
    cin >> x;
    cout << "Informe o valor do lado Y: ";
    cin >> y;
    cout << "Informe o valor do lado Z: ";
    cin >> z;
    
    calcular(x, y, z);
}

void cTriangulo::calcular(float x, float y, float z){
    if ((x + y) > z && (x + z) > y && (z + y) > x){
        if (x == y && y == z){
            cout << "O triângulo é equilátero!" << endl;
        } else if (x != y && y != z && z != x){
            cout << "O triângulo é escaleno!" << endl;
        } else {
            cout << "O triângulo é isósceles!" << endl;
        }
    } else {
        cout << "Erro! Valores informados não formam um triângulo! Tente novamente..." << endl << endl;
        triangulo();
        exit(0);
    }
}