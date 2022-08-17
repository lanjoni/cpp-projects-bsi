#ifndef CNOTA_H
#define CNOTA_H

class cNota {
public:
    cNota();
    cNota(const cNota& orig);
    virtual ~cNota();
    
    float nota1, nota2, nota3;
    
    void insert();
    void print();
private:

};

#endif /* CNOTA_H */

