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
    float media;
    
    cout << "Digite a média do aluno: ";
    cin >> media;
    
    if (media >= 0 && media <= 10){
        cout << "A média é valida!" << endl;
        
        if (media >= 6) {
            cout << "Aluno aprovado com média: " << media << "!" << endl;
        } else {
            cout << "Aluno reprovado com média: " << media << "!" << endl;
        }
    } else {
        cout << "A média digitada é inválida!" << endl;
    }
    
    return 0;
}

