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
	cout << raiz->dado << "\n";
        preorder(raiz->esquerda);
        preorder(raiz->direita);
    }
}

void cArvore::order(noArvore *raiz){
	if (raiz != NULL){
		order(raiz->esquerda);
		cout << raiz->dado << "\n";
		order(raiz->direita);
	}
}

void cArvore::posorder(noArvore *raiz){
	if (raiz != NULL){
		posorder(raiz->esquerda);
		posorder(raiz->direita);
		cout << raiz->dado << "\n";
	}
}

void cArvore::inicio(){
    
    noArvore *raiz = NULL;
                
    if (raiz == NULL) {
	cout << "Início" << "\n\n";

        raiz = insere(raiz, 14);
    }
    
    insere(raiz, 4);
    insere(raiz, 15);
    insere(raiz, 3);
    insere(raiz, 9);
    insere(raiz, 14);
    insere(raiz, 18);
    insere(raiz, 7);
    insere(raiz, 9);
    insere(raiz, 16);
    insere(raiz, 20);
    insere(raiz, 5);
    insere(raiz, 17);
    insere(raiz, 4);
    insere(raiz, 5);

    cout << "\nPreorder: \n";
    preorder(raiz);

    cout << "\nOrder: \n";
    order(raiz);

    cout << "\nPosorder: \n";
    posorder(raiz);
}
