#ifndef CPESO_H
#define CPESO_H

class cPeso {
public:
    cPeso();
    cPeso(const cPeso& orig);
    virtual ~cPeso();
    
    float altura;
    char sexo;
    
    void insert();
    void print();
private:

};

#endif /* CPESO_H */

