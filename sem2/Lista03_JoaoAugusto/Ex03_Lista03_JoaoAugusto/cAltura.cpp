#include "cAltura.h"
#include <cstdlib>
#include <iostream>

using namespace std;

cAltura::cAltura() {
}

cAltura::cAltura(const cAltura& orig) {
}

cAltura::~cAltura() {
}

void cAltura::resultado(){
    int qtd;
    
    cout << "Informe a quantidade de alturas que deseja armazenar: ";
    cin >> qtd;
    
    float alturas[qtd];
    
    for (int i = 0; i < qtd; i++){
        cout << "Informe a altura " << i+1 << ": ";
        cin >> alturas[i];
    }
    
    cout << endl << "A maior altura digitada foi: " << maior(alturas, qtd);
    cout << endl << "A menor altura digitada foi: " << menor(alturas, qtd);
}

float cAltura::maior(float alturas[], int qtd){
    float maiorN = -99999;
    
    for (int j = 0; j < qtd; j++){
        if (alturas[j] > maiorN){
            maiorN = alturas[j];
        }
    }
    
    return maiorN;
}

float cAltura::menor(float alturas[], int qtd){
    float menorN = 99999;
    
    for (int s = 0; s < qtd; s++){
        if (alturas[s] < menorN){
            menorN = alturas[s];
        }
    }
    
    return menorN;
}