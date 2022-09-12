#include "cNumeros.h"
#include <iostream>

using namespace std;

cNumeros::cNumeros() {
}

cNumeros::cNumeros(const cNumeros& orig) {
}

cNumeros::~cNumeros() {
}

void cNumeros::calcular(){
    int n[10];
    
    for (int i = 0; i < 10; i++){
        cout << "Informe o número da posição " << i << ": ";
        cin >> n[i];
    }
    
    organizar(n); // 90 comparações
}

/*
void cNumeros::organizar(int n[]){
    int temp, comparacoes = 0;
    
    while (!(n[0] <= n[1] && n[1] <= n[2] 
            && n[2] <= n[3] && n[3] <= n[4] 
            && n[4] <= n[5] && n[5] <= n[6]
            && n[6] <= n[7] && n[7] <= n[8]
            && n[8] <= n[9])){
        for (int j = 0; j < 10; j++){
            if (n[j] > n[j+1]){
                temp = n[j];
                n[j] = n[j+1];
                n[j+1] = temp;
            }
            
            comparacoes++;
        }
    }
    
    cout << endl;
    
    for (int h = 0; h < 10; h++){
        cout << n[h] << endl;
    }
    
    cout << endl << "Quantidade de comparações: " << comparacoes;
}
*/

// Bolha
/*
void cNumeros::organizar(int n[]){
    int i, j, temp, comparacoes = 0;
    
    int qtd = 10;
    
    for (i = qtd-1; i>= 1; i--){
        for (j = 0; j < i; j++){
            if (n[j] > n[j+1]){
                temp = n[j];
                n[j] = n[j+1];
                n[j+1] = temp;
            }
            
            comparacoes++;
        }
    }
    
    for (int h = 0; h < qtd; h++){
        cout << n[h] << endl;
    }
    
    cout << endl << "Quantidade de comparações :" << comparacoes;
}
*/

// Bolha 2

void cNumeros::organizar(int n[]){
    int i, j, temp, comparacoes = 0;
    bool troca = true;
    
    int qtd = 10;
    
    for (i = qtd-1; i>= 1 && troca == true; i--){
        troca = false;
        for (j = 0; j < i; j++){
            if (n[j] > n[j+1]){
                temp = n[j];
                n[j] = n[j+1];
                n[j+1] = temp;
                troca = true;
            }
            
            comparacoes++;
        }
    }
    
    for (int h = 0; h < qtd; h++){
        cout << n[h] << endl;
    }
    
    cout << endl << "Quantidade de comparações: " << comparacoes << endl;
    
    cout << "Índice de busca: " << (n, 9);
}


// Pesquisa binária
int cNumeros::pesquisar(int n[], int chave){
    int inf = 0, sup = 9, meio, comparacoes = 0;
    bool troca = true;
    
    int qtd = 10;
    
    while (inf <= sup){
        meio = (inf + sup)/2;
        
        if (chave == n[meio]){
            return meio;
        } else if (chave < n[meio]) {
            sup = meio - 1;
        } else {
            inf = meio + 1;
        }
    }
    
    return -1;
}