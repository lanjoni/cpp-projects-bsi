#include "cConceitos.h"
#include <iostream>

using namespace std;

cConceitos::cConceitos() {
}

cConceitos::cConceitos(const cConceitos& orig) {
}

cConceitos::~cConceitos() {
}

void cConceitos::pilhaEstatica(){
    int digitado, qtd;
    char opc;
    
    cout << "Informe a quantidade de elementos que deseja inserir: ";
    cin >> qtd;
    
    int vet[qtd];
    
    for (int i = 0; i < qtd; i++){
        cout << "Informe o elemento da posicao " << qtd - (i + 1) << ": ";
        cin >> vet[qtd - (i + 1)];
    }
    
    cout << endl << endl;
    
    for (int j = 0; j < qtd; j++){
        cout << vet[j] << endl;
    }
}

void cConceitos::filaEstatica(){
    int digitado, qtd;
    char opc;
    
    cout << "Informe a quantidade de elementos que deseja inserir: ";
    cin >> qtd;
    
    int vet[qtd];
    
    for (int i = 0; i < qtd; i++){
        cout << "Informe o elemento da posicao " << i << ": ";
        cin >> vet[i];
    }
    
    cout << endl << endl;
    
    for (int j = 0; j < qtd; j++){
        cout << vet[j] << endl;
    }
}

void cConceitos::cadastrarPilhaDinamica(){
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

void cConceitos::listarPilhaDinamica(){
    NO *aux;
    
    cout << endl;
    
    for (aux = topo; aux != NULL; aux = aux -> ant){
        cout << "O elemento é: " << aux -> elemento << endl;
    }
}

void cConceitos::cadastrarFilaDinamica(){
    int digitado;
    char opc = 'S';
    NO_FILA *aux;
    
    while (toupper(opc) != 'N'){
        if (toupper(opc) != 'S'){
            cout << "Opção inválida! Tente novamente..." << endl << endl;
        } else {
            aux = (NO_FILA*) malloc(sizeof(aux));
            
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

void cConceitos::listarFilaDinamica(){
    NO_FILA *aux;
    
    cout << endl;
    
    for (aux = inicio; aux != NULL; aux = aux -> prox){
        cout << "O elemento é: " << aux -> elemento << endl;
    }
}