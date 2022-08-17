#ifndef CNADADOR_H
#define CNADADOR_H

class cNadador {
public:
    cNadador();
    cNadador(const cNadador& orig);
    virtual ~cNadador();
    
    int idade;
    
    void insert();
    void print();
private:

};

#endif /* CNADADOR_H */

