/*
 *  Escreva um programa que receba 20 números do usuário (um de cada vez).
 *  Calcule a média dos números pares digitados.
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

    int valor = 0, pares = 0, total = 0;
    float media;

    for (int i = 1; i <= 20; i++){
        cout << "===============" << endl;
        cout << "Informe o " << i << "º valor: ";
        cin >> valor;

        if (valor % 2 == 0){
            pares = pares + valor;
            total++;
        }
    }

    media = pares/total;

    cout << "===============" << endl;
    cout << "A quantidade de números pares digitados foi: " << total << endl;
    cout << "A média dos números pares digitados é: " << media << endl;

    return 0;
}


