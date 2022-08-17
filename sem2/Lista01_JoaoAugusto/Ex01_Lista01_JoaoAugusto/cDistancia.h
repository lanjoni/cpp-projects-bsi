#ifndef CDISTANCIA_H
#define CDISTANCIA_H

class cDistancia {
public:
    cDistancia();
    cDistancia(const cDistancia& orig);
    virtual ~cDistancia();
    
    float x1, x2, y1, y2;
    
    void insert();
    float calcularDistancia();
private:

};

#endif /* CDISTANCIA_H */

