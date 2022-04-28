/*
 * Escreva um programa para calcular a soma dos números pares contidos entre 100 e 200, inclusive.
 * Exiba o resultado da soma.
 *
 * Aluno: João Augusto Lissoni Lanjoni
 */

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int soma = 0;

    for (int i = 100; i <= 200; i++){
        if (i % 2 == 0){
            soma = soma + i;
        }
    }

    cout << "A soma de todos os números pares entre 100 e 200 é: " << soma << endl;

    return 0;
}
