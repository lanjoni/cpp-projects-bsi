/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cNumero.h
 * Author: guto
 *
 * Created on August 15, 2022, 10:18 PM
 */

#ifndef CNUMERO_H
#define CNUMERO_H

class cNumero {
public:
    cNumero();
    cNumero(const cNumero& orig);
    virtual ~cNumero();
    
    int n;
    
    void insert();
    void print();
private:

};

#endif /* CNUMERO_H */

