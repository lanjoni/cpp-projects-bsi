/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   avl.h
 * Author: byteapath
 *
 * Created on 18 de maio de 2022, 09:54
 */

#include <cstdlib>
#include <iostream>
#include <queue>
#include <stddef.h>
#include "no.h"

#ifndef AVL_H
#define AVL_H

class avl {
public:
    avl();
    avl(const avl& orig);
    virtual ~avl();
    
    no *raiz;
       
    int calAltura(no *p);
    int bf(struct no *no);
    no* rotacaoLL(no *no);
    no* rotacaoRR(no *no);
    no* rotacaoRL(no *no);
    no* rotacaoLR(no *no);
    no* inserir(no *r,int valor);
    
    
    
    void emOrdem(no *no);
    no* apontaESQ(no* p);
    no* apontaDIR(no* p);
private:

};

#endif /* AVL_H */

