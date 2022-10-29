#include "cPilha.h"
#include <iostream>

using namespace std;

cPilha::cPilha() {
}

cPilha::cPilha(const cPilha& orig) {
}

cPilha::~cPilha() {
}

void cPilha::cadastrar(){
    int digitado;
    char opc = 'S';
    NO *aux;
    
    while (toupper(opc) != 'N'){
        if (toupper(opc) != 'S'){
            cout << "Opção inválida! Tente novamente..." << endl << endl;
        } else {
            aux = (NO*) malloc(sizeof(aux));
            
            cout << "Informe o valor do elemento: ";
            cin >> digitado;

            aux -> elemento = digitado;
            aux -> ant = topo;

            topo = aux;
        }
        
        cout << "Deseja continuar? (S ou N): ";
        cin >> opc;
    }
}

void cPilha::listaRecursiva(NO *topo){    
    if (topo != NULL){
        cout << topo -> elemento << endl;
        this->listaRecursiva(topo -> ant);
    }
}

void cPilha::listar(){
    NO *aux;
    
    cout << endl;
    
    /*for (aux = topo; aux != NULL; aux = aux -> ant){
        cout << "O elemento é: " << aux -> elemento << endl;
    }*/
    
    listaRecursiva(topo);
}

void cPilha::consultar(){
    NO *aux;
    int numero;
    
    cout << endl;
    cout << "Informe o número que deseja buscar: ";
    cin >> numero;
    
    for (aux = topo; aux != NULL; aux = aux -> ant){
        if (aux->elemento == numero) {
            cout << "Número encontrado!" << endl;
            cout << "Posição: " << &aux->elemento;
        }
    }
}

void cPilha::remover(){
    NO *aux = topo;
    topo = topo -> ant;
    free(aux);
}