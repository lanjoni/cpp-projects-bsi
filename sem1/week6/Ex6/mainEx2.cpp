#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int linhas, colunas;

    cout << "Informe a quantidade de linhas: ";
    cin >> linhas;
    cout << "Informe a quantidade de colunas: ";
    cin >> colunas;

    int matriz[linhas][colunas];

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            cout << "Informe o valor da matriz [" << i << "][" << j << "]:";
            cin >> matriz[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++) {
            if (i == j){
                cout << matriz[i][j] << " | ";
            } else {
                cout << "X" << " | ";
            }
        }

        cout << endl;
    }

    return 0;
}
