#ifndef CPRODUTO_H
#define CPRODUTO_H
#include <iostream>

using namespace std;

struct PRODUTO{
    int codigo;
    string nome;
    float preco;
};

class cProduto {
public:
    cProduto();
    cProduto(const cProduto& orig);
    virtual ~cProduto();
    
    void principal();
    void imprimir(PRODUTO*, int);
    void organizar(PRODUTO*, int);
    void buscar(PRODUTO*, int);
    PRODUTO buscaBinaria(PRODUTO*, int, int);
private:

};

#endif /* CPRODUTO_H */

