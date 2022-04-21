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
    int opc = 1, contador = 0, maior = 0;
    
    cout << "==============================" << endl;
    while (opc != 0){
        cout << "Digite um número: ";
        cin >> opc;
        contador++;
        if (opc > maior){
            maior = opc;
        }
    }
    
    cout << "A quantidade de números digitados foi: " << contador << endl;
    cout << "O maior número digitado foi: " << maior << endl;
}

