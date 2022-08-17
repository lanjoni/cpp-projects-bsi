#ifndef CCALCULO_H
#define CCALCULO_H

class cCalculo {
public:
    cCalculo();
    cCalculo(const cCalculo& orig);
    virtual ~cCalculo();
    
    int a, b, c;
    
    void insert();
    void print();
private:

};

#endif /* CCALCULO_H */

