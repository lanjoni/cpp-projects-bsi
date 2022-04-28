/*
 * Escreva um programa para exibir os números contidos no intervalo de 10 a 100, inclusive.
 *
 * Aluno: João Augusto Lissoni Lanjoni
 */

#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    for (int i = 10; i <= 100; i++){
        cout << i << endl;
    }

    return 0;
}
