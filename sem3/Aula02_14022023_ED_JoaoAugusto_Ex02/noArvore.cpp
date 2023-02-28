#include "noArvore.h"
#include <iostream>

using namespace std;

noArvore::noArvore() {
    this->direita = this->esquerda = NULL;
}


noArvore::noArvore(int valor) {
    this->dado = valor;
    this->direita = this->esquerda = NULL;
}

noArvore::~noArvore() {
}