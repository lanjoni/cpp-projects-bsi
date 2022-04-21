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

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    int opc;
    
    cout << "Digite 1 para Prato do dia!" << endl;
    cout << "Digite 2 para Lasanha!" << endl;
    cout << "Digite 3 para Picanha Grelhada!" << endl;
    cout << "Digite 4 para Salada Simples!" << endl;
    
    cin >> opc;
    
    switch (opc){
        case 1:
            cout << "Prato do dia: 17.00 reais!" << endl;
            break;
        case 2:
            cout << "Lasanha: 17.00 reais!" << endl;
            break;
        case 3:
            cout << "Picanha Grelhada: 21.90 reais!" << endl;
            break;
        case 4:
            cout << "Salada Simples: 7.90 reais!" << endl;
            break;
        default:
            cout << "Opção inválida!" << endl;
    }
    
    return 0;
}

