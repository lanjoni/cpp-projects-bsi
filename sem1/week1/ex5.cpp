// Faça um programa em C++ que utilize a estrutura IF/ELSE.

// Aluno: João Augusto Lissoni Lanjoni

#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv){
    setlocale(LC_ALL, "Portuguese");

    char nome[50];
    float n1, n2, n3, n4, soma, media;

    cout << " ================== Calcular média do aluno (4 bimestres)! ================== ";
    cout << "\nInforme o nome do aluno: ";
    cin >> nome;
    cout << "\nInforme a primeira nota: ";
    cin >> n1;
    cout << "\nInforme a segunda nota: ";
    cin >> n2;
    cout << "\nInforme a terceira nota: ";
    cin >> n3;
    cout << "\nInforme a quarta nota: ";
    cin >> n4;

    soma = n1 + n2 + n3;
    media = soma/4;

    if (media >= 6){
        cout << "======================================================" << endl;
        cout << "Aluno " << nome << " APROVADO com média " << media;
    } else {
        cout << "======================================================" << endl;
        cout << "Aluno " << nome << " REPROVADO com média " << media;
    }

    return 0;
}