#include "cPessoa.h"

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
    }
}

void cPessoa::impDadosPessoa(){
    for(int i = 0; i < 2; i++){
        cout << "Nome: " << this->VetPessoas[i].nome << endl;
        cout << "Endereço: " << this->VetPessoas[i].end << endl;
        cout << "Telefone 1: " << this->VetPessoas[i].tel1 << endl;
        cout << "Telefone 2: " << this->VetPessoas[i].tel2 << endl;
    }
}