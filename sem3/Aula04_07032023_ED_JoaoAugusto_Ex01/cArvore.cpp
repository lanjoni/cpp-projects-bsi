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

/*void cArvore::posorder(noArvore *raiz){
	if (raiz != NULL){
		posorder(raiz->esquerda);
		posorder(raiz->direita);
		cout << raiz->dado << "\n";
	}
}*/

void cArvore::posorder(noArvore *raiz){
	if (raiz->esquerda != NULL){
		posorder(raiz->esquerda);
    }

    if (raiz->direita != NULL) {
		posorder(raiz->direita);
	}

    cout << raiz->dado << "\n";
}

/*void cArvore::maior(noArvore *raiz){
	if (raiz != NULL){
        if (raiz->dado > maiorDado){
            maiorDado = raiz->dado;
        }
        maior(raiz->esquerda);
        maior(raiz->direita);
    }
}*/

void cArvore::maior(noArvore *raiz){
    if (raiz->direita != NULL){
        maior(raiz->direita);
    } else {
        cout << "O maior elemento é: " << raiz->dado;
    }
}

/*int cArvore::soma(noArvore *raiz){
    if (raiz != NULL){
        return raiz->dado + soma(raiz->esquerda) + soma(raiz->direita);
    } else {
        return 0;
    }
}*/

int cArvore::soma(noArvore *raiz){
    return raiz != NULL ? raiz->dado + soma(raiz->esquerda) + soma(raiz->direita) : 0;
}

void cArvore::inicio(){
    
    noArvore *raiz = NULL;
                
    if (raiz == NULL) {
	cout << "Início" << "\n\n";

        raiz = insere(raiz, 5);
        //maiorDado = raiz->dado;
    }
    
    insere(raiz, 3);
    insere(raiz, 8);
    insere(raiz, 4);

    maior(raiz);

    cout << "\n\nSoma: " << soma(raiz) << "\n";

    //cout << "Maior elemento: " << maiorDado << "\n";
}
