#ifndef CLISTAENCADEADA_H
#define CLISTAENCADEADA_H
#include <iostream>

using namespace std;

struct NO{
    int elemento;
    NO *prox;
    NO *ant;
};

class cListaEncadeada {
public:
    NO *inicio = NULL;
    NO *fim = NULL;
    int tamanho = NULL;
    
    cListaEncadeada();
    cListaEncadeada(const cListaEncadeada& orig);
    virtual ~cListaEncadeada();
    
    NO* aloca(int elemento);
    void insereInicio(int elemento);
    void insereFim(int elemento);
    void inserePosicao(int elemento, int posicao);
    void removeInicio();
    void removeFim();
    void imprimeLista();
    void principal();
private:

};

#endif /* CLISTAENCADEADA_H */

