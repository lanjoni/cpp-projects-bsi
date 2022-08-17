/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cCarro.h
 * Author: guto
 *
 * Created on August 15, 2022, 9:09 PM
 */

#ifndef CCARRO_H
#define CCARRO_H

class cCarro {
public:
    cCarro();
    cCarro(const cCarro& orig);
    virtual ~cCarro();
    
    float custo_f;
    
    void insert();
    void print();
private:

};

#endif /* CCARRO_H */

