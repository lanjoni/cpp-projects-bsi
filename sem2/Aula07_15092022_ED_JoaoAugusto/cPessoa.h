#ifndef CPESSOA_H
#define CPESSOA_H

#include <string>
#include <iostream>

using namespace std;

struct pessoa{
    string nome;
    int cpf;
    float altura, peso;
};

class cPessoa {
public:
    cPessoa();
    cPessoa(const cPessoa& orig);
    virtual ~cPessoa();
    
    void lerDados();
    float calcIMC(pessoa y);
    int pesquisaSequencial(pessoa vetor[], int qtd, int cpf);
private:

};

#endif /* CPESSOA_H */

