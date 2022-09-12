#ifndef CNOTAS_H
#define CNOTAS_H
#include <iostream>
#include <string>

using namespace std;

struct ALUNOS{
    string nome;
    int matricula;
    float nota1, nota2;
};

class cNotas {
public:
    cNotas();
    cNotas(const cNotas& orig);
    virtual ~cNotas();
    
    void principal();
    ALUNOS insert(string, int, float, float);
    float calcularMedia(float, float);
private:

};

#endif /* CNOTAS_H */

