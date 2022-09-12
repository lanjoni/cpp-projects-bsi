#ifndef CDELTA_H
#define CDELTA_H

class cDelta {
public:
    cDelta();
    cDelta(const cDelta& orig);
    virtual ~cDelta();
    
    void delta();
    float calculo(float, float, float);
private:

};

#endif /* CDELTA_H */

