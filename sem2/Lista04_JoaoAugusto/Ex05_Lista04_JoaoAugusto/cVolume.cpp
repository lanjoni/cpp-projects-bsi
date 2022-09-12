#include "cVolume.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <math.h>

using namespace std;

cVolume::cVolume() {
}

cVolume::cVolume(const cVolume& orig) {
}

cVolume::~cVolume() {
}

void cVolume::calcular(){
    float raio;
    
    cout  << "Informe o valor do raio: ";
    cin >> raio;
    
    cout << "O volume será igual a: " << volume(raio);
}

float cVolume::volume(float raio){
    float volumeF = 0;
    
    volumeF = (4 * M_PI * pow(raio, 3))/3; 
    
    return volumeF;
}