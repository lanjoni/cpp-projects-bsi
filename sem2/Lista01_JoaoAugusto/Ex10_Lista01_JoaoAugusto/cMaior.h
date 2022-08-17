#ifndef CMAIOR_H
#define CMAIOR_H

class cMaior {
public:
    cMaior();
    cMaior(const cMaior& orig);
    virtual ~cMaior();
    
    int a, b, c;
    
    void insert();
    void print();
private:

};

#endif /* CMAIOR_H */

