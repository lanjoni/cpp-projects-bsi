/*
 * Escreva um programa em C++  para armazenar 8 números em um vetor e imprimir todos os números.
 * Verifique quantos desses números são múltiplos de 3. Imprima essa quantidade.
 */

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero[8];
    int contador = 0;
    int multiplo[contador];

    cout << "===== Imprimir a quantidade de números digitados múltiplos de 3! =====" << endl;

    for (int i = 0; i < 8; i++){
        cout << "Informe o número da posição " << i << ": ";
        cin >> numero[i];
    }

    for (int j = 0; j < 8; j++){
        if (numero[j] % 3 == 0){
            contador++;
            multiplo[contador] = numero[j];
        }
    }

    cout << "==============================" << endl;
    cout << "Os números informados foram: " << endl;

    for (int s = 0; s < 8; s++){
        if (s == 7){
            cout << numero[s];
        } else {
            cout << numero[s] << ", ";
        }
    }

    cout << endl;

    cout << "A quantidade de números múltiplos de três foram: " << endl;
    cout << contador << endl;
    cout << "Os números informados múltiplos de três são: " << endl;

    for (int a = 0; a <= contador; a++){
        if (a == contador){
            cout << multiplo[a];
        } else if (multiplo[a] != 0) {
            cout << multiplo[a] << ", ";
        }
    }


    return 0;
}
