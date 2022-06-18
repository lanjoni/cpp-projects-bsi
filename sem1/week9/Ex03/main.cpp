/*
 * Escreva um programa em C++ para receber números para preencher dois vetores de tamanho 10.
 * Imprima os vetores. Faça a multiplicação de um por outro e imprima o resultado da multiplicação.
 */

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetor1[10];
    int vetor2[10];
    int result;

    for (int i = 0; i < 10; i++){
        cout << "Informe o valor da posição " << i << " no VETOR1: ";
        cin >> vetor1[i];
    }

    cout << endl;
    for (int j = 0; j < 10; j++){
        cout << "Informe o valor da posição " << j << " no VETOR2: ";
        cin >> vetor2[j];
    }

    cout << endl;
    cout << "Os valores mostrados no vetor 1 são: ";
    for (int i = 0; i < 10; i++){
        if (i == 9){
            cout << vetor1[i];
        } else {
            cout << vetor1[i] << " - ";
        }
    }

    cout << endl;
    cout << "Os valores mostrados no vetor 2 são: ";
    for (int j = 0; j < 10; j++){
        if (j == 9){
            cout << vetor1[j];
        } else {
            cout << vetor1[j] << " - ";
        }
    }

    cout << endl;
    cout << "Os valores dos vetores multiplicados são: ";
    for (int s = 0; s < 10; s++){
        result = vetor1[s] * vetor2[s];

        if (s == 9){
            cout << result;
        } else {
            cout << result << " - ";
        }
    }

    return 0;
}
