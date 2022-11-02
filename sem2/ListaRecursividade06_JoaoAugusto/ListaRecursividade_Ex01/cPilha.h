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
    NO *topo = NULL;
    
    cPilha();
    cPilha(const cPilha& orig);
    virtual ~cPilha();
    
    // -> Fatorial
    void fatorialPrincipal();
    int calcularFatorial(int n);
    
    // -> Tabuada
    void tabuadaPrincipal();
    int calcularTabuada(int n, int i);
    
    // -> Fibonacci
    void fibonacciPrincipal();
    int calcularFibonacci(int n);
    
    void menu();
    void cadastrar();
    void listar();
    void remover();
    void consultar();
    void listaRecursiva(NO *topo);
private:

};

#endif /* CPILHA_H */