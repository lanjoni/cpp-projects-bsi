/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 19 de Abril de 2022, 08:19
 */

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    
    int contador = 0;
    
    while(contador <= 100){
        if (contador%10 == 0){
            cout << contador << " é divisível por 10!" << endl;
        }
        
        contador++;
    }
    
    cout << "Acabou!" << endl;
    
    return 0;
}

