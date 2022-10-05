#ifndef CCONTA_H
#define CCONTA_H
#include <iostream>

using namespace std;

struct CLIENTE{
    string nome;
    int cpf;
    float saldo;
};

class cConta {
public:
    cConta();
    cConta(const cConta& orig);
    virtual ~cConta();
    
    void principal();
    void gerenciar(CLIENTE*);
    CLIENTE saque(CLIENTE*, int);
    CLIENTE deposito(CLIENTE*, int);
private:

};

#endif /* CCONTA_H */

