/*
 *  Construa um programa em C++ que receba o nome e o valor de um produto, calcule o valor
 *  do produto após um desconto de 13%. Apresente o resultado como o abaixo:
 *  Produto: <nome do produto>
 *  Valor: <valor original do produto>
 *  Desconto: <valor do desconto>
 *  Valor Final: <valor do produto após o desconto>
 *
 *  Aluno: João Augusto Lissoni Lanjoni
 */

#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");

    char nome[50];
    float valor, desconto, valorFinal;

    cout << "Informe o nome do produto: ";
    cin >> nome;
    cout << "Informe o valor do produto: ";
    cin >> valor;

    desconto = (valor/100) * 13;
    valorFinal = valor - desconto;

    cout << "=====================" << endl;
    cout << "Produto: " << nome << endl;
    cout << "Valor: " << valor << endl;
    cout << "Desconto: " << desconto << endl;
    cout << "Valor final: " << valorFinal << endl;

    return 0;
}

