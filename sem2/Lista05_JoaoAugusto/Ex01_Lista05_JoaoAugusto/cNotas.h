#ifndef CNOTAS_H
#define CNOTAS_H

class cNotas {
public:
    cNotas();
    cNotas(const cNotas& orig);
    virtual ~cNotas();
    
    void insert();
    float calcularMedia(float, float);
private:

};

#endif /* CNOTAS_H */

