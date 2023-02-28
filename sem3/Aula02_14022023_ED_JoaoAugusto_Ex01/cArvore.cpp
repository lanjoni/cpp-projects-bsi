#include "cArvore.h"
#include <iostream>

using namespace std;

cArvore::cArvore() {
}

cArvore::cArvore(const cArvore& orig) {
}

cArvore::~cArvore() {
}

noArvore* cArvore::insere(noArvore *raiz, int valor){
    if (raiz == NULL){
        raiz = new noArvore;
        
        raiz->esquerda = NULL;
        raiz->direita = NULL;
        raiz->dado = valor;
    } else if (valor < raiz->dado){
        raiz->esquerda = insere(raiz->esquerda, valor);
    } else {
        raiz->direita = insere(raiz->direita, valor);
    }
    
    return raiz;
}

void cArvore::preorder(noArvore *raiz){
    if (raiz != NULL) {
        preorder(raiz->esquerda);
        preorder(raiz->direita);
        cout << raiz->dado << "\n";
    }
}

void cArvore::inicio(){
    
    noArvore *raiz = NULL;
                
    if (raiz == NULL) {
        raiz = insere(raiz, 10);
    }
    
    insere(raiz, 20);
    insere(raiz, 30);
    insere(raiz, 15);
    
    preorder(raiz);
}