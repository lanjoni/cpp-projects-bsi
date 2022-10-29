/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cFatorial.h
 * Author: guto
 *
 * Created on October 6, 2022, 10:34 AM
 */

#ifndef CFATORIAL_H
#define CFATORIAL_H

class cFatorial {
public:
    cFatorial();
    cFatorial(const cFatorial& orig);
    virtual ~cFatorial();
    
    void principal();
    int fatorial(int);
private:

};

#endif /* CFATORIAL_H */

