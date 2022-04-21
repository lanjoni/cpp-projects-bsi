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
    int idade;
    
    cout << "================================" << endl;
    cout << "Digite a idade do nadador: ";
    cin >> idade;
    cout << "================================" << endl;
    
    if (idade >= 5){
        if (idade <= 7) {
            cout << "O nadador é categoria Infantil A!" << endl;
        } else {
            if (idade <= 10) {
                cout << "O nadador é categoria Infantil B!" << endl;
            } else {
                if (idade <= 13){
                    cout << "O nadador é categoria Juvenil A!" << endl;
                } else {
                    if (idade <= 17) {
                        cout << "O nadador é categoria Juvenil B!" << endl;
                    } else {
                        cout << "O nadador é categoria Adulto!" << endl;
                    }
                }
            }
        }
    } else {
        cout << "O nadador não possui idade para competir!" << endl;
    }
    return 0;
}

