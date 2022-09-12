#include "cPessoa.h"
#include <cstdlib>
#include <iostream>

using namespace std;

cPessoa::cPessoa() {
}

cPessoa::cPessoa(const cPessoa& orig) {
}

cPessoa::~cPessoa() {
}

void cPessoa::cadPessoa(){
     for(int i = 0; i < 10; i++){
        cout << "Digite seu nome: ";
        cin >> this->VetPessoas[i].nome;
        cout << "Digite seu endereço: ";
        cin >> this->VetPessoas[i].end;
        cout << "Digite seu telefone 1: ";
        cin >> this->VetPessoas[i].tel1;
        cout << "Digite seu telefone 2: ";
        cin >> this->VetPessoas[i].tel2;
        cout << endl;
    }
    
    cout << "=============================================" << endl << endl;
    Bolha();
}

void cPessoa::Bolha(){
    int i, j;
    pessoa temp;
    
    int qtd = 10;
    
    for (i = qtd-1; i>= 1; i--){
        for (j = 0; j < i; j++){
            if (this->VetPessoas[j].tel1 > this->VetPessoas[j+1].tel1){
                temp = this->VetPessoas[j];
                this->VetPessoas[j] = this->VetPessoas[j+1];
                this->VetPessoas[j+1] = temp;
            }
        }
    }
}

void cPessoa::impDadosPessoa(){
    for(int i = 0; i < 10; i++){
        cout << "Nome: " << this->VetPessoas[i].nome << endl;
        cout << "Endereço: " << this->VetPessoas[i].end << endl;
        cout << "Telefone 1: " << this->VetPessoas[i].tel1 << endl;
        cout << "Telefone 2: " << this->VetPessoas[i].tel2 << endl;
        cout << endl;
    }
}