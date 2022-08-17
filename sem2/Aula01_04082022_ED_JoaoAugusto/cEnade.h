/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cEnade.h
 * Author: Aluno
 *
 * Created on 4 de agosto de 2022, 11:19
 */

#ifndef CENADE_H
#define CENADE_H

class cEnade {
public:
    cEnade();
    cEnade(const cEnade& orig);
    virtual ~cEnade();
    
    int M[3][4];
    
    void insert();
    void print();
private:

};

#endif /* CENADE_H */

