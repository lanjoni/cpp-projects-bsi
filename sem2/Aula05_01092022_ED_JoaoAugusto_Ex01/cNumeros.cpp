#include "cNumeros.h"
#include <cstdlib>
#include <iostream>

using namespace std;

cNumeros::cNumeros() {
}

cNumeros::cNumeros(const cNumeros& orig) {
}

cNumeros::~cNumeros() {
}

void cNumeros::print(){
    int qtd;
    
    cout << "Informe a quantidade de itens que deseja enviar: ";
    cin >> qtd;
    
    int n[qtd];
    
    for (int i = 0; i < qtd; i++){
        cout << "Informe o número " << i << ": ";
        cin >> n[i];
        cout << endl;
    }
    
    calcular(n, qtd);
}

void cNumeros::calcular(int n[], int qtd){
    int i, j;
    int temp;
    
    for (i = qtd-1; i>= 1; i--){
        for (j = 0; j < i; j++){
            if (n[j] > n[j+1]){
                temp = n[j];
                n[j] = n[j+1];
                n[j+1] = temp;
            }
        }
    }
    
    cout << endl << endl;
    
    for (int z = 0; z < qtd; z++){
        cout << n[z] << endl;
    }
}