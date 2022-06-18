/*
 * Escrever um programa em C++ para calcular o IMC de uma pessoa (utilize função para fazer o programa). IMC = peso / altura2.
 */

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <fstream>

using namespace std;

float imc(float peso, float altura){
    float result;

    result = peso/pow(altura, 2);

    return result;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float peso = 0;
    float altura = 0;
    float result;

    cout << "Calcular IMC!" << endl;
    cout << "Informe seu peso: ";
    cin >> peso;
    cout << "Informe sua altura: ";
    cin >> altura;

    result = imc(peso, altura);

    cout << endl;
    cout << "Seu IMC é: " << result << endl;

    return 0;
}