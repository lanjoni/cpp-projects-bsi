#ifndef CLISTAENCADEADA_H
#define CLISTAENCADEADA_H
#include <iostream>

using namespace std;

struct NO{
    int elemento;
    NO *prox;
    NO *ant;
};

class cListaCircular {
public:
    NO *inicio = fim;
    NO *fim = inicio;
    int tamanho = 0;
    
    cListaCircular();
    cListaCircular(const cListaCircular& orig);
    virtual ~cListaCircular();
    
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

