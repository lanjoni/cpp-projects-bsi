#ifndef CARVORE_H
#define CARVORE_H
#include "noArvore.h"

class cArvore {
public:
    cArvore();
    cArvore(const cArvore& orig);
    virtual ~cArvore();
    
    noArvore *raiz = NULL;
    
    //noArvore* insere(noArvore *raiz, int valor);
    noArvore* insereAtributo(int valor);
    bool vazio();
    void order(noArvore *elem);
    void inicio();
private:

};

#endif /* CARVORE_H */

