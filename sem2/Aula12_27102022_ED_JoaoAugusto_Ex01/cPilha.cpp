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
            //aux -> prox = fim;
            if (inicio == NULL){
                //inicio = aux;
                inicio -> prox = NULL;
            } else {
                fim -> prox = aux;
            }

            fim = aux;
        }
        
        cout << "Deseja continuar? (S ou N): ";
        cin >> opc;
    }
}

void cPilha::listar(){
    NO *aux;
    
    cout << endl;
    
    for (aux = inicio; aux != NULL; aux = aux -> prox){
        cout << "O elemento é: " << aux -> elemento << endl;
    }
}

void cPilha::consultar(){
    NO *aux;
    int numero;
    
    cout << endl;
    cout << "Informe o número que deseja buscar: ";
    cin >> numero;
    
    for (aux = fim; aux != NULL; aux = aux -> prox){
        if (aux->elemento == numero) {
            cout << "Número encontrado!" << endl;
            cout << "Posição: " << &aux->elemento;
        }
    }
}

void cPilha::remover(){
    NO *aux = fim;
    fim = fim -> prox;
    free(aux);
}