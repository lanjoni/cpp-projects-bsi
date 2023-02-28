#include "cArvore.h"
#include "noArvore.h"
#include <iostream>

using namespace std;

cArvore::cArvore() {
}

cArvore::cArvore(const cArvore& orig) {
}

cArvore::~cArvore() {
}

/*noArvore* cArvore::insere(noArvore *raiz, int valor){
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
}*/

bool cArvore::vazio(){
    return this->raiz == NULL;
}

noArvore* cArvore::insereAtributo(int valor){
    noArvore *tmp = this->raiz;
    noArvore *ant = NULL;
    
    while (tmp != NULL){
        ant = tmp;
        
        if (tmp->dado < valor){
            tmp = tmp->direita;
        } else {
            tmp = tmp->esquerda;
        }
    }
    
    if (this->vazio()){
        this->raiz = new noArvore(valor);
    } else if (ant->dado < valor){
        ant->direita = new noArvore(valor);
    } else {
        ant->esquerda = new noArvore(valor);
    }
}

void cArvore::order(noArvore *elem){
    if (elem != NULL) {
        order(elem->esquerda);
        order(elem->direita);
        cout << elem->dado << "\n";
    }
}

void cArvore::inicio(){
    if (this->raiz == NULL) {
        this->raiz = insereAtributo(10);
    }
    
    insereAtributo(20);
    insereAtributo(30);
    insereAtributo(15);
    
    order(this->raiz);
}