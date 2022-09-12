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
    float alturas, maiorA = -99999, menorA = 99999;
    
    cout << "Informe a quantidade de alturas que deseja armazenar: ";
    cin >> qtd;
    
    for (int i = 0; i < qtd; i++){
        cout << "Informe a altura " << i+1 << ": ";
        cin >> alturas;
        
        maiorA = this->maior(alturas, maiorA);
        menorA = this->menor(alturas, menorA);
    }
    
    cout << endl << "A maior altura digitada foi: " << maiorA;
    cout << endl << "A menor altura digitada foi: " << menorA;
}

float cAltura::maior(float alturas, float maiorA){
    if (alturas > maiorA){
        return alturas; 
    } else {
        return maiorA;
    }
}

float cAltura::menor(float alturas, float menorA){
    if (alturas < menorA){
        return alturas;
    } else {
        return menorA;
    }
}