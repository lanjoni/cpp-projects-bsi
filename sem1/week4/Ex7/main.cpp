/*
 *  Reescreva o programa do exercício anterior (exercício 6) considerando o zero como neutro, ou seja,
 *  se for digitado o valor zero, escrever a palavra zero.
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
    if (valor == 0){
        cout << "O valor é zero!" << endl;
    } else if (valor > 0){
        cout << "O valor é positivo!" << endl;
    } else {
        cout << "O valor é negativo!" << endl;
    }

    return 0;
}

