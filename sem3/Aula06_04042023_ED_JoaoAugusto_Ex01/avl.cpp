/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   avl.cpp
 * Author: byteapath
 * 
 * Created on 18 de maio de 2022, 09:54
 */

#include <cstdlib>
#include <iostream>
#include <queue>
#include <stddef.h>
#include "avl.h"
#include "no.h"

using namespace std;


avl::avl() {
    this->raiz = NULL;
}

avl::avl(const avl& orig) {
}

avl::~avl() {
}

no* avl::inserir(no *r,int valor){
        
        if(r==NULL){
            no *n;
            n = new no();
            n->valor = valor;
            r = n;
            r->esquerdo = r->direito = NULL;
            r->altura = 1; 
            return r;             
        }
        else{
            if(valor < r->valor)
                r->esquerdo = inserir(r->esquerdo,valor);
            else
                r->direito = inserir(r->direito,valor);
        }

        r->altura = calAltura(r);

        if(bf(r)==2 && bf(r->esquerdo)==1){
            r = rotacaoLL(r);
        }
        else if(bf(r)==-2 && bf(r->direito)==-1){
            r = rotacaoRR(r);
        }
        else if(bf(r)==-2 && bf(r->direito)==1){
            r = rotacaoRL(r);
        }
        else if(bf(r)==2 && bf(r->esquerdo)==-1){
            r = rotacaoLR(r);
        }        

        return r;
}
 
 
no* avl::apontaDIR(no* p){
        while(p->direito!=NULL)
            p = p->direito;
        return p;    
}

no* avl::apontaESQ(no* p){
        while(p->esquerdo!=NULL)
            p = p->esquerdo;

        return p;    
}



void avl::emOrdem(no *no) {  
    if (no != NULL) { 
        
        this->emOrdem (no->esquerdo);  
        cout << no->valor << " ";
        this->emOrdem (no->direito);  
    }  
} 

int avl::calAltura(no *p){

    if((p->esquerdo) && (p->direito)){
        if (p->esquerdo->altura < p->direito->altura)
            return p->direito->altura + 1;
        else 
            return  p->esquerdo->altura + 1;
    }
    else 
        if((p->esquerdo) && (p->direito == NULL)){
            return p->esquerdo->altura + 1;
        }
        else 
            if((p->esquerdo ==NULL) && (p->direito)){
               return p->direito->altura + 1;
            }   

    return 0;
}

int avl::bf(no *n){
            if((n->esquerdo) && (n->direito)){
                return n->esquerdo->altura - n->direito->altura; 
            }
            else if((n->esquerdo) && (n->direito == NULL)){
                return n->esquerdo->altura; 
            }
            else if((n->esquerdo == NULL) && (n->direito)){
                return -n->direito->altura;
            }
}

no* avl::rotacaoLL(no *n){
        no *p;
        no *tp;
        p = n;
        tp = p->esquerdo;
        p->esquerdo = tp->direito;
        tp->direito = p;

        return tp; 
    }


no* avl::rotacaoRR(no *n){
    no *p;
    no *tp;
    p = n;
    
    //cout<< &p->direito;
    
    tp = p->direito; 
    p->direito = tp->esquerdo;
    tp->esquerdo = p;

    //cout<< &tp->esquerdo;

    return tp; 
}


no* avl::rotacaoRL(no *n){
        no *p;
        no *tp;
        no *tp2;
        p = n;
        tp = p->direito;
        tp2 =p->direito->esquerdo;

        p -> direito = tp2->esquerdo;
        tp ->esquerdo = tp2->direito;
        tp2 ->esquerdo = p;
        tp2->direito = tp; 
        
        return tp2; 
    }

no* avl::rotacaoLR(no *n){
        no *p;
        no *tp;
        no *tp2;
        p = n;
        tp = p->esquerdo;
        tp2 =p->esquerdo->direito;

        p -> esquerdo = tp2->direito;
        tp ->direito = tp2->esquerdo;
        tp2 ->direito = p;
        tp2->esquerdo = tp; 
        
        return tp2; 
    }