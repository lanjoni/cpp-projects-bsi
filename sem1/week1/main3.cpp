/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 12 de Abril de 2022, 08:18
 */

#include <cstdlib>
#include <iostream>
#include <locale.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, num3, soma, subtracao, divisao, multiplicacao;
    int resto, num4, num5;
    
    cout << "Este programa irá executar operações matemáticas." << endl;
    cout << "Cinco números serão necessários." << endl << endl;
    cout << "Digite o primeiro número: " << endl;
    cin >> num1;
    cout << "Digite o segundo número: " << endl;
    cin >> num2;
    cout << "Digite o terceiro número: " << endl;
    cin >> num3;
    cout << "Digite o quarto número: " << endl;
    cin >> num3;
    cout << "Digite o quinto número: " << endl;
    cin >> num3;
    
    soma = num1 + num2;
    subtracao = num3 - num1;
    divisao = num2/num1;
    multiplicacao = num1 * num2;
    resto = num4 % num5;
    
    cout << "A soma do primeiro com o segundo número é: " << soma << endl;
    cout << "A subtração do terceiro com o primeiro número é: " << subtracao << endl;
    cout << "A divisão do segundo pelo primeiro número é: " << divisao << endl;
    cout << "A multiplicação do primeiro pelo segundo número é: " << multiplicacao << endl;
    cout << "O resto da divisão do quarto pelo quinto número é: " << resto << endl;
    
    return 0;
}

