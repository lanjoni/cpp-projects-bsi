#ifndef CARVORE_H
#define CARVORE_H

struct noArvore {
    int dado;
    noArvore *esquerda;
    noArvore *direita;
};

class cArvore {
public:
    cArvore();
    cArvore(const cArvore& orig);
    virtual ~cArvore();
    
    noArvore* insere(noArvore *raiz, int valor);
    void preorder(noArvore *raiz);
    void order(noArvore *raiz);
    void posorder(noArvore *raiz);
    void inicio();
private:

};

#endif /* CARVORE_H */

