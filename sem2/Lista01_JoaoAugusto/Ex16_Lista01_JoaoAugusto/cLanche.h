/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cLanche.h
 * Author: guto
 *
 * Created on August 15, 2022, 10:33 PM
 */

#ifndef CLANCHE_H
#define CLANCHE_H

class cLanche {
public:
    cLanche();
    cLanche(const cLanche& orig);
    virtual ~cLanche();
    
    int pedido, qtd;
    
    void insert();
    void print();
private:

};

#endif /* CLANCHE_H */

