/*
 *  Escreva um programa em C++ que receba o nome, o endereço e o
 *  telefone de um aluno e exiba todas essas informações, uma em cada linha.
 */

#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    char nome[50], endereco[300], telefone[30];

    cout << "Informe seu nome: ";
    cin >> nome;
    cout << "Informe seu endereço: ";
    cin >> endereco;
    cout << "Informe seu telefone: ";
    cin >> telefone;

    cout << "Nome: " << nome << endl;
    cout << "Endereço: " << endereco << endl;
    cout << "Telefone: " << telefone << endl;

    return 0;
}
