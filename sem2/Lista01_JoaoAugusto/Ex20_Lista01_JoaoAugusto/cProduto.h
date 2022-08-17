#ifndef CPRODUTO_H
#define CPRODUTO_H

class cProduto {
public:
    cProduto();
    cProduto(const cProduto& orig);
    virtual ~cProduto();
    
    int codigo, qtd;
    
    void insert();
    void print();
private:

};

#endif /* CPRODUTO_H */

