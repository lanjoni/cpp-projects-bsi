#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int linhas, colunas;

    cout << "Informe a quantidade de linhas da matriz: ";
    cin >> linhas;
    cout << "Informe a quantidade de colunas da matriz: ";
    cin >> colunas;

    int matriz1[linhas][colunas];
    int matriz2[linhas][colunas];
    int matriz3[linhas][colunas];

    cout << "========== Matriz 1 ==========" << endl;
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            cout << "Informe o valor da matriz [" << i << "][" << j << "]:";
            cin >> matriz1[i][j];
        }
        cout << endl;
    }

    cout << "========== Matriz 2 ==========" << endl;
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            cout << "Informe o valor da matriz [" << i << "][" << j << "]:";
            cin >> matriz2[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    cout << "========== Matriz Final ==========" << endl;
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++) {
            cout << matriz3[i][j] << " | ";
        }
        cout << endl;
    }

    return 0;
}
