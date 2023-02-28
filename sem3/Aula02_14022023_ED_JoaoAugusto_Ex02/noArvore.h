#ifndef NOARVORE_H
#define NOARVORE_H

class noArvore {
public:
    noArvore();
    noArvore(int valor);
    virtual ~noArvore();
    
    int dado;
    noArvore *esquerda;
    noArvore *direita;
private:

};

#endif /* NOARVORE_H */

