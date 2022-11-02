#include "cListaEncadeada.h"
#include <iostream>

using namespace std;

cListaEncadeada::cListaEncadeada() {
}

cListaEncadeada::cListaEncadeada(const cListaEncadeada& orig) {
}

cListaEncadeada::~cListaEncadeada() {
}

NO* cListaEncadeada::aloca(int elemento){
    NO *novo = (NO*)malloc(sizeof(NO));
    
    novo -> elemento = elemento;
    novo -> ant = NULL;
    novo -> prox = NULL;
    
    return novo;
}

void cListaEncadeada::removeInicio(){
    NO *atual = inicio;
    inicio = atual -> prox;
    inicio -> ant = NULL;
    tamanho--;
}

void cListaEncadeada::removeFim(){
    NO *atual = fim;
    fim = atual -> ant;
    fim -> prox = NULL;
    tamanho--;
}

void cListaEncadeada::insereInicio(int elemento){
    NO *novo = aloca(elemento);
    
    if (inicio == NULL){
        inicio = novo;
        fim = novo;
    } else {
        NO *atual;
        atual = inicio;
        novo -> prox = atual;
        atual -> ant = novo;
        inicio = novo;
    }
    
    tamanho++;
}

void cListaEncadeada::insereFim(int elemento){
    NO *novo = aloca(elemento);
    
    if (inicio == NULL){
        inicio = novo;
        fim = novo;
    } else {
        NO *atual;
        atual = fim;
        
        novo -> ant = atual;
        atual -> prox = novo;
        fim = novo;
    }
    
    tamanho++;
}

void cListaEncadeada::inserePosicao(int elemento, int posicao){
    posicao = posicao - 1;
    NO *novo = aloca(elemento);
    
    if (inicio == NULL){
        inicio = novo;
        fim = novo;
    } else {
        NO *atual;
        NO *tmp;
        int i;
        
        if (posicao < (tamanho/2)){
            atual = inicio;
            i = 0;
        } else {
            atual = fim;
            i = tamanho;
        }
        
        while ((i != posicao) && (i >= 0) && (i <= tamanho)){
            if (i < posicao){
                i++;
                atual = atual -> prox;
            } else if (i > posicao){
                i--;
                atual = atual -> ant;
            }
            
            if (posicao == 1){
                cout << "Valor antecessor: " << atual->ant->elemento << endl;
                cout << "Valor sucessor: " << atual->prox->elemento << endl;
            }
        }
    }
}

void cListaEncadeada::imprimeLista(){
    NO *atual;
    atual = inicio;
    
    while(atual){
        cout << endl << atual->elemento;
        atual = atual->prox;
    }
}

void cListaEncadeada::principal(){
    int i, digitado;
    char opc = 'S';
    
    while(toupper(opc) != 'N'){
        if (toupper(opc) != 'S'){
            cout << "Opção inválida! Tente novamente..." << endl << endl;
        } else {
            cout << "Informe o valor do elemento: ";
            cin >> digitado;
            
            insereInicio(digitado);
        }
        
        cout << "Deseja continuar? (S ou N): ";
        cin >> opc;
    }
    
    imprimeLista();
}