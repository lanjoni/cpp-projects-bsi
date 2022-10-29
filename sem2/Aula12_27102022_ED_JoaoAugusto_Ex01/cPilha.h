#ifndef CPILHA_H
#define CPILHA_H
#include <cstdlib>

using namespace std;

struct NO{
    int elemento;
    NO* prox;
};

class cPilha {
public:
    NO *inicio = NULL;
    NO *fim = NULL;
    
    cPilha();
    cPilha(const cPilha& orig);
    virtual ~cPilha();
    
    void menu();
    void cadastrar();
    void listar();
    void remover();
    void consultar();
private:

};

#endif /* CPILHA_H */

