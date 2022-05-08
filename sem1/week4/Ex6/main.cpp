/*
 *  Escreva um programa para ler um valor e escrever se é positivo ou negativo.
 *  Considere o valor zero como positivo.
 *
 *  Aluno: João Augusto Lissoni Lanjoni
 */

#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");

    float valor;

    cout << "Informe um valor: ";
    cin >> valor;

    cout << "===============" << endl;
    if (valor >= 0){
        cout << "O valor é positivo!" << endl;
    } else {
        cout << "O valor é negativo!" << endl;
    }

    return 0;
}

