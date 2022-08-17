/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cSaldo.h
 * Author: guto
 *
 * Created on August 16, 2022, 6:11 PM
 */

#ifndef CSALDO_H
#define CSALDO_H

class cSaldo {
public:
    cSaldo();
    cSaldo(const cSaldo& orig);
    virtual ~cSaldo();
    
    float saldoMedio;
    
    void insert();
    void print();
private:

};

#endif /* CSALDO_H */

