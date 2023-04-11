/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: byteapath
 *
 * Created on 18 de maio de 2022, 09:54
 */

#include <cstdlib>
#include <iostream>
#include <queue>
#include "avl.h"
#include <stddef.h>
#include "no.h"

using namespace std;

int main(int argc, char** argv) {
   
    
    avl *obj = new avl();
    int opcao,valor;

    do{
        cout<<"\n1.Imprimir Árvore";
        cout<<"\n2.inserir Elemento";
        cout<<"\n0.Sair\n";
        cout<<"\nEscolha: ";

        cin>>opcao;

        switch(opcao){
        case 1:
            obj->emOrdem(obj->raiz);
            break;
                  
        case 2:
            cout<<"\nDigite Valor: ";
            cin>>valor;
            obj->raiz = obj->inserir(obj->raiz, valor);
            break;          
        case 0:
            break;
        }

     }while(opcao!=0);

    return 0;
}



