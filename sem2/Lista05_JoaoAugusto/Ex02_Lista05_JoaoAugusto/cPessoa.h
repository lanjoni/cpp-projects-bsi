#ifndef CPESSOA_H
#define CPESSOA_H
#include <iostream>

using namespace std;

struct PESSOA{
    string nome, sexo;
    float altura, peso, imc;
    int cpf;
};

struct BUSCA{
    int qtd;
    int indices[];
};

class cPessoa {
public:
    cPessoa();
    cPessoa(const cPessoa& orig);
    virtual ~cPessoa();
    
    void principal();
    void buscar(PESSOA*, int);
    BUSCA buscarCPF(PESSOA*, int, int);
    PESSOA insert(string, int, string, float, float);
    float calcularIMC(float, float);
private:

};

#endif /* CPESSOA_H */

