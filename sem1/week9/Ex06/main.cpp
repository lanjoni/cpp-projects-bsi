/*
 * Escreva um programa em C++ que receba números e os armazene em uma matriz 4X4. Imprima a matriz.
 */

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[4][4];

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cout << "Informe um número para a posição (" << i+1 << "," << j+1 << "): ";
            cin >> matriz[i][j];
        }
        cout << endl;
    }

    cout << "Os valores da matriz são: " << endl;
    for (int a = 0; a < 4; a++){
        for (int b = 0; b < 4; b++){
            if (b == 3){
                cout << matriz[a][b];
            } else {
                cout << matriz[a][b] << setw(3);
            }
        }
        cout << endl;
    }

    return 0;
}
