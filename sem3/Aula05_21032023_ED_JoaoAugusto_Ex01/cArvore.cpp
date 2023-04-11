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

noArvore* cArvore::remover(noArvore *raiz, int valor){
    if (raiz == NULL){
        return NULL;
    } else {
        if (raiz->dado > valor){
            raiz->esquerda = remover(raiz->esquerda, valor);
        } else if (raiz-> dado < valor){
            raiz->direita = remover(raiz->direita, valor);
        } else {
            if ((raiz->esquerda == NULL) && (raiz->direita == NULL)){
                free(raiz);
                raiz = NULL;
            } else if (raiz->esquerda == NULL){
                noArvore *temp = raiz;
                raiz = raiz->direita;
                free(temp);
            } else if (raiz->direita == NULL){
                noArvore *temp = raiz;
                raiz = raiz->esquerda;
                free(temp);
            } else {
                noArvore *aux = raiz->esquerda;

                while (aux->direita != NULL){
                    aux = aux->direita;
                }

                raiz->dado = aux->dado;
                aux->dado = valor;
                raiz->esquerda = remover(raiz->esquerda, valor);
            }
        }
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

void cArvore::maior(noArvore *raiz){
	if (raiz != NULL){
        if (raiz->dado > maiorDado){
            maiorDado = raiz->dado;
        }
        maior(raiz->esquerda);
        maior(raiz->direita);
    }
}

/*int cArvore::buscaRecursiva(noArvore *raiz, int valor){
    if (raiz != NULL){
        if (valor == raiz->dado){
            return raiz->dado;
        } else {
            if (valor < raiz->dado){
                valor = this->buscaRecursiva(raiz->esquerda, valor);
            } else {
                valor = this->buscaRecursiva(raiz->direita, valor);
            }
        }
    } else {
        return 0;
    }
}*/

noArvore* cArvore::buscaRecursiva(noArvore *raiz, int valor){
    if (raiz != NULL){
        if (valor == raiz->dado){
            return raiz;
        } else {
            if (valor < raiz->dado){
                return this->buscaRecursiva(raiz->esquerda, valor);
            } else {
                return this->buscaRecursiva(raiz->direita, valor);
            }
        }
    } else {
        return 0;
    }
}

int cArvore::nivelValor(noArvore *raiz, int nivel, int valor){
    if (raiz != NULL){
        if (valor == raiz->dado){
            return nivel;
        } else {
            nivel++;
            if (valor < raiz->dado){
                return this->nivelValor(raiz->esquerda, nivel, valor);
            } else {
                return this->nivelValor(raiz->direita, nivel, valor);
            }
        }
    } else {
        return 0;
    }
}

void cArvore::inicio(){
    
    noArvore *raiz = NULL;
                
    if (raiz == NULL) {
	cout << "***************************\nInício";

        raiz = insere(raiz, 5);
        maiorDado = raiz->dado;
    }
    
    insere(raiz, 3);
    insere(raiz, 8);
    insere(raiz, 4);

    // Imprimindo árvore
    cout << "\n\nÁrvore completa: \n";
    order(raiz);

    //maior(raiz);

    //cout << "Maior elemento: " << maiorDado << "\n";

    // Buscando valor 3
    cout << "\nElemento: \n" << buscaRecursiva(raiz, 3)->dado << "\n";
    order(buscaRecursiva(raiz, 3));

    // Imprimindo o nível
    cout << "\nNível: " << nivelValor(raiz, 1, 3) << "\n";

    // Removendo o 8
    remover(raiz, 8);

    // Imprimindo árvore depois de remover
    cout << "\nApós remover: " << "\n";
    order(raiz);
}
