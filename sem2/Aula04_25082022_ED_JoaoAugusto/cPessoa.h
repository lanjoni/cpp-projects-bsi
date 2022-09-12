#ifndef CPESSOA_H
#define CPESSOA_H

#include <cstring>
#include <cstdlib>

using namespace std;

struct pessoa{
    string nome, end;
    long int tel1, tel2;
};

class cPessoa {
public:
    pessoa VetPessoas[10];
    
    cPessoa();
    cPessoa(const cPessoa& orig);
    virtual ~cPessoa();
    
    void cadPessoa();
    void impDadosPessoa();
private:

};

#endif /* CPESSOA_H */

