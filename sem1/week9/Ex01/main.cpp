/*
 * Escreva um programa em C++ para armazenar 10 números em um vetor. Imprima os números do vetor.
 * Calcule e imprima a soma desses números.
 */

#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    float numero[10];
    float soma;

    cout << "===== Calcular e imprimir soma dos números =====" << endl;

    for (int i = 0; i < 10; i++){
        cout << "Informe o número de posição " << i << ": ";
        cin >> numero[i];

        soma += numero[i];
    }

    cout << endl;
    cout << "Os números informados foram: " << endl;

    for (int j = 0; j < 10; j++){
        if (j == 9){
            cout << numero[j];
        } else {
            cout << numero[j] << ", ";
        }
    }

    cout << endl;
    cout << "A soma de todos os números informados é igual a: " << soma;

    return 0;
}
