#ifndef CMEDIA_H
#define CMEDIA_H

class cMedia {
public:
    cMedia();
    cMedia(const cMedia& orig);
    virtual ~cMedia();
    
    int tipo;
    float nota1, nota2, nota3;
    
    void insert();
    void print();
    
private:

};

#endif /* CMEDIA_H */

