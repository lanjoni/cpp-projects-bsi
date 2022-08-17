#ifndef CIDADE_H
#define CIDADE_H

class cIdade {
public:
    cIdade();
    cIdade(const cIdade& orig);
    virtual ~cIdade();
    
    int anos, meses, dias;
    
    void insert();
    void print();
private:

};

#endif /* CIDADE_H */

