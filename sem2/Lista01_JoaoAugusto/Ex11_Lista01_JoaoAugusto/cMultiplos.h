/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cMultiplos.h
 * Author: guto
 *
 * Created on August 15, 2022, 9:40 PM
 */

#ifndef CMULTIPLOS_H
#define CMULTIPLOS_H

class cMultiplos {
public:
    cMultiplos();
    cMultiplos(const cMultiplos& orig);
    virtual ~cMultiplos();
    
    int a, b;
    
    void insert();
    void print();
private:

};

#endif /* CMULTIPLOS_H */

