#ifndef CCONCEITOS_H
#define CCONCEITOS_H
#include <cstdlib>

using namespace std;

struct NO{
    int elemento;
    NO* ant;
};

struct NO_FILA{
    int elemento;
    NO_FILA* prox;
};

class cConceitos {
public:
    NO *topo = NULL;
    NO_FILA *inicio = NULL;
    NO_FILA *fim = NULL;
    
    cConceitos();
    cConceitos(const cConceitos& orig);
    virtual ~cConceitos();
    
    void pilhaEstatica();
    void filaEstatica();
    
    void cadastrarPilhaDinamica();
    void listarPilhaDinamica();
    void cadastrarFilaDinamica();
    void listarFilaDinamica();
private:

};

#endif /* CCONCEITOS_H */

