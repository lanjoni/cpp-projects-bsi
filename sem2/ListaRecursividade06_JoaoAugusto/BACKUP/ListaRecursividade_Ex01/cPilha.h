#ifndef CPILHA_H
#define CPILHA_H
#include <cstdlib>

using namespace std;

struct NO{
    int elemento;
    NO* ant;
};

class cPilha {
public:
    cPilha();
    cPilha(const cPilha& orig);
    virtual ~cPilha();
    
    void menu();
    void cadastrar();
    void listar();
    void remover();
    void consultar();
    void listaRecursiva(NO *topo);
    NO *topo = NULL;
private:

};

#endif /* CPILHA_H */

