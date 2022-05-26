#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

int main() {
    int matriz[2][3];
    int i, j;

    for (i = 0; i < 3; i++){
        for (j = 0; j < 2; j++){
            cout << "Digite um valor a ser armazenado na matriz[" << i << "][" << j << "]:";
            cin >> matriz[i][j];
            cout << endl;
        }
    }

    cout << "============================" << endl;
    cout << "Os valores digitados foram: " << endl;

    for (i = 0; i < 3; i++){
        for (j = 0; j < 2; j++){
            cout << matriz[i][j] << " | ";
        }
        cout << endl;
    }

    return 0;
}
