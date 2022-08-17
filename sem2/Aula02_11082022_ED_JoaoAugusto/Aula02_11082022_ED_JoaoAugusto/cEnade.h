#ifndef CENADE_H
#define CENADE_H

class cEnade {
public:
    cEnade();
    cEnade(const cEnade& orig);
    virtual ~cEnade();
    
    int M[3][4];
    
    void insert();
    void print();
private:

};

#endif /* CENADE_H */

