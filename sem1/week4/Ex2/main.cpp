/*
 *  Escreva um programa em C++ que exiba as quatro mensagens:
 *  Meu nome é: <seu nome>.
 *  Sou do curso de Sistemas de Informação.
 *  Estou no primeiro ano.
 *  Gosto de programação!!!
 *
 *  Aluno: João Augusto Lissoni Lanjoni
 */

#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[50];

    cout << "Informe seu nome: ";
    cin >> nome;

    cout << "Meu nome é: " << nome << "." << endl;
    cout << "Sou do curso de Sistemas de Informação." << endl;
    cout << "Estou no primeiro ano." << endl;
    cout << "Gosto de programação!!!" << endl;

    return 0;
}
