/*
 *  Escrever um programa que leia 15 números, um de cada vez,
 *  e conte quantos destes valores são negativos. Exiba a quantidade de números negativos digitados.
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

    int numero, negativos = 0;

    cout << "=== Visualizar quantidade de números negativos digitados! ===" << endl;
    for (int i = 1; i <= 15; i++){
        cout << "=====================" << endl;
        cout << "Digite um número: ";
        cin >> numero;

        if (numero < 0){
            negativos++;
        }
    }

    cout << "=====================" << endl;
    cout << "A quantidade de números negativos digitados foi: " << negativos << endl;

    return 0;
}

