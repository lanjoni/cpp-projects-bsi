#ifndef CTRIANGULO_H
#define CTRIANGULO_H

class cTriangulo {
public:
    cTriangulo();
    cTriangulo(const cTriangulo& orig);
    virtual ~cTriangulo();
    
    void triangulo();
    void calcular(float, float, float);
private:

};

#endif /* CTRIANGULO_H */

