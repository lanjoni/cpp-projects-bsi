#ifndef CNUMEROS_H
#define CNUMEROS_H

class cNumeros {
public:
    cNumeros();
    cNumeros(const cNumeros& orig);
    virtual ~cNumeros();
    
    void calcular();
    void organizar(int *);
    int pesquisar(int *, int);
private:

};

#endif /* CNUMEROS_H */

