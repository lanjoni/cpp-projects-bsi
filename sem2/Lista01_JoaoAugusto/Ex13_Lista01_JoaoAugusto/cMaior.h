#ifndef CMAIOR_H
#define CMAIOR_H

class cMaior {
public:
    cMaior();
    cMaior(const cMaior& orig);
    virtual ~cMaior();
    
    int n1, n2, n3;
    
    void insert();
    void print();
private:

};

#endif /* CMAIOR_H */

