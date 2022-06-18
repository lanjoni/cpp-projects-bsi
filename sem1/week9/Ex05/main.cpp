/*
 * Escreva um programa em C++  que seja capaz de criar um vetor contendo os seguintes números,
 * nessa ordem: 10,9,8,7,6,5,4,3,2,1. Exiba o vetor e também a ordem inversa desse vetor.
 */

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetor[10];
    int i = 10;
    int j = 0;
    int s = 9;

    cout << "Os valores do vetor são: " << endl;
    while (i > 0){
        vetor[j] = i;

        if (j == 9){
            cout << vetor[j];
        } else {
            cout << vetor[j] << " - ";
        }

        i -= 1;
        j += 1;
    }

    cout << endl;
    cout << "Os valores do vetor na ordem inversa são: " << endl;
    while (s >= 0){
        if (s == 0){
            cout << vetor[s];
        } else {
            cout << vetor[s] << " - ";
        }

        s -= 1;
    }

    return 0;
}
