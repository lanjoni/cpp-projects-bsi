/*
 *  Construir um programa que calcule a média aritmética de 20 valores inteiros positivos,
 *  fornecidos pelo usuário. Exiba o resultado da média.
 *
 *  Aluno: João Augusto Lissoni Lanjoni
 */

#include <cstdlib>
#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");

    int valor = 0, soma = 0;
    float media;

    cout << "===== Calcular a média aritmética de 20 valores digitados! =====" << endl;
    for (int i = 1; i <= 20; i++){
        cout << "=================" << endl;
        cout << "Informe o " << i << "º valor: ";
        cin >> valor;

        soma = soma + valor;
    }

    media = soma/20;

    cout << "=================" << endl;
    cout << "A média aritmética dos 20 valores digitados é: " << media;

    return 0;
}


