/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cIdadeAoContrario.h
 * Author: guto
 *
 * Created on August 15, 2022, 8:40 PM
 */

#ifndef CIDADEAOCONTRARIO_H
#define CIDADEAOCONTRARIO_H

class cIdadeAoContrario {
public:
    cIdadeAoContrario();
    cIdadeAoContrario(const cIdadeAoContrario& orig);
    virtual ~cIdadeAoContrario();
    
    int dias;
    
    void insert();
    void print();
private:

};

#endif /* CIDADEAOCONTRARIO_H */

