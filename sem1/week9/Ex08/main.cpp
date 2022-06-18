/*
 * Escreva um programa em C++ que receba do usuário números reais e preencha uma matriz 4x5.
 * Gere e armazene em uma outra matriz a metade da primeira (a metade de cada número armazenado
 * na matriz original). Imprima as duas matrizes.
 */

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    float matriz[4][5];
    float resultado[4][5];

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            cout << "Informe um valor para a posição (" << i << "," << j << "): ";
            cin >> matriz[i][j];

            resultado[i][j] = ((matriz[i][j])/2);
        }
        cout << endl;
    }

    cout << endl;
    cout << "Os valores da matriz original são: " << endl;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            if (j == 4){
                cout << matriz[i][j];
            } else {
                cout << matriz[i][j] << setw(3);
            }
        }
        cout << endl;
    }

    cout << endl;
    cout << "A matriz com os valores resultantes: " << endl;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            if (j == 4){
                cout << resultado[i][j];
            } else {
                cout << resultado[i][j] << setw(5);
            }
        }
        cout << endl;
    }

    return 0;
}
