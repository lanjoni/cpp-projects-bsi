/*
 *  Escreva um programa para ler um número inteiro (considere que
 *  serão lidos apenas valores positivos e inteiros) e escrever se é par ou ímpar.
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

    int numero;

    cout << "Informe um número inteiro e positivo: ";
    cin >> numero;

    if (numero >= 0){
        if (numero % 2 == 0){
            cout << "O número digitado é par!" << endl;
        } else {
            cout << "O número digitado é ímpar!" << endl;
        }
    } else {
        cout << "O número digitado não é inteiro ou positivo!" << endl;
    }

    return 0;
}

