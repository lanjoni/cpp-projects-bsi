/*
 *  Tendo como dados de entrada a altura e o sexo de uma pessoa (M para masculino e F para feminino),
 *  construa um programa que calcule o peso ideal de uma pessoa, utilizando as seguintes fórmulas:
 *  - para pessoa do sexo masculino: peso Ideal =  (72.7*h)-58
 *  - para pessoa do sexo feminino: peso Ideal =: (62.1*h)-44.7
 *  Exiba as informações incluindo o peso ideal.
 *
 *  Aluno: João Augusto Lissoni Lanjoni
 */

#include <cstdlib>
#include <iostream>
#include <locale>
#include <ctype.h>

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");

    float altura, pesoIdeal;
    char sexo;

    cout << "Informe a sua altura: ";
    cin >> altura;
    cout << "Informe seu sexo (M para masculino e F para feminino): ";
    cin >> sexo;

    char sexoM = toupper(sexo);

    cout << "================" << endl;
    switch(sexoM){
        case 'M':
            pesoIdeal = (72.7 * altura) - 58;
            cout << "Seu peso ideal é: " << pesoIdeal;
            break;
        case 'F':
            pesoIdeal = (62.1 * altura) - 44.7;
            cout << "Seu peso ideal é: " << pesoIdeal;
            break;
        default:
            cout << "Sexo informado inválido!" << endl;
    }


    return 0;
}

