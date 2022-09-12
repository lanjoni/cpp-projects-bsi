#ifndef CMEDIA_H
#define CMEDIA_H

class cMedia {
public:
    cMedia();
    cMedia(const cMedia& orig);
    virtual ~cMedia();
    
    void calcular();
    void retorno(char, float, float, float);
private:

};

#endif /* CMEDIA_H */

