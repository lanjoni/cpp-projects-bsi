#ifndef PROVA_H
#define PROVA_H

class prova {
public:
    prova();
    prova(const prova& orig);
    virtual ~prova();
    
    float x, y;
    
    float mat1(float, float);
    float mat2(float, float);
    void leitura();
private:

};

#endif /* PROVA_H */

