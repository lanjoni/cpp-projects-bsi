/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   no.h
 * Author: byteapath
 *
 * Created on 18 de maio de 2022, 09:54
 */

#ifndef NO_H
#define NO_H

class no {
public:
    no();
    no(int valor);
    virtual ~no();
    int altura;
    int valor;  
    no *direito, *esquerdo;  
private:

};

#endif /* NO_H */

