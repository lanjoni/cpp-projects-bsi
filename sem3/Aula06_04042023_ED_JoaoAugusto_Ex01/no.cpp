/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   no.cpp
 * Author: byteapath
 * 
 * Created on 18 de maio de 2022, 09:54
 */

#include "no.h"
#include <cstdlib>

no::no() {  
    this->direito = this->esquerdo = NULL;  
}  

no::no(int valor) {  
    this->valor = valor;  
    this->direito = this->esquerdo = NULL;  
} 

no::~no() {
}

