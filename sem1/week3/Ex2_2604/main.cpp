/*
 * Escreva um programa para exibir os números contidos no intervalo de 50 a 10, inclusive.
 *
 * Aluno: João Augusto Lissoni Lanjoni
 */

#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i = 50;

    while (i >= 10){
        cout << i << endl;
        i = i - 1;
    }

    return 0;
}
