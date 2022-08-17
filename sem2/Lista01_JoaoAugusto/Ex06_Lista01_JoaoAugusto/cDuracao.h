#ifndef CDURACAO_H
#define CDURACAO_H

class cDuracao {
public:
    cDuracao();
    cDuracao(const cDuracao& orig);
    virtual ~cDuracao();
    
    int segundos;
    
    void insert();
    void print();
private:

};

#endif /* CDURACAO_H */

