// Faça um programa em C++ que leia o nome e três notas do aluno. Calcule a média. 
// Após o cálculo, imprima uma mensagem da forma “Aluno Fulano possui média 7.0”.

// Aluno: João Augusto Lissoni Lanjoni

#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv){
    setlocale(LC_ALL, "Portuguese");

    char nome[50];
    float n1, n2, n3, soma, media;

    cout << " ================== Calcular média do aluno! ================== ";
    cout << "\nInforme o nome do aluno: ";
    cin >> nome;
    cout << "\nInforme a primeira nota: ";
    cin >> n1;
    cout << "\nInforme a segunda nota: ";
    cin >> n2;
    cout << "\nInforme a terceira nota: ";
    cin >> n3;

    soma = n1 + n2 + n3;
    media = soma/3;

    cout << "======================================================" << endl;
    cout << "Aluno " << nome << " possui média " << media;

    return 0;
}