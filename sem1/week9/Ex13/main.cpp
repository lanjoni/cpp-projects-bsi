/*
 * Escrever um programa em C++ para calcular o IMC de N pessoas. Para cada pessoa deverá ser solicitado o nome, peso e altura.
 * (utilize função e struct para fazer o programa). IMC = peso / altura2. Além de mostrar os dados na tela, o programa
 * também deverá armazenar o IMC de cada pessoa em um arquivo.txt.
 */

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <fstream>

using namespace std;

float imc(float peso, float altura){
    float result;

    result = peso/pow(altura, 2);

    return result;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n;

    cout << "Calcular IMC!" << endl;
    cout << "Informe quantos IMCs você deseja calcular: ";
    cin >> n;

    struct pessoa{
        string nome;
        float peso;
        float altura;
    } pessoa[n];

    float result[n];
    ofstream arquivo;

    arquivo.open("arquivo.txt", ios::out | ios::app);
    arquivo << "CALCULANDO IMC!" << endl << endl;

    cout << endl;

    for (int i = 0; i < n; i++){
        cout << "Informe o nome da pessoa " << i+1 << ": ";
        cin >> pessoa[i].nome;
        cout << "Informe o peso do(a) " << pessoa[i].nome << ": ";
        cin >> pessoa[i].peso;
        cout << "Informe a altura do(a) " << pessoa[i].nome << ": ";
        cin >> pessoa[i].altura;

        result[i] = imc(pessoa[i].peso, pessoa[i].altura);

        if (arquivo.is_open()){
            arquivo << "IMC do cliente " << pessoa[i].nome << ": " << result[i] << endl;
            arquivo << "IMC do cliente " << pessoa[i].nome << ": " << result[i] << endl;
        }

        cout << endl;
    }


    for (int i = 0; i < n; i++){
        cout << endl;
        cout << "O IMC do " << pessoa[i].nome << " (pessoa número " << i+1 << ") é: " << result[i];
    }

    return 0;
}