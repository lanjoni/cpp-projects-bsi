#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main() {
    int cubo[6][3][3];

    for (int k = 0; k < 6; k++){
        cout << "Lado " << k << endl;
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                cout << cubo[k][i][j] << " | ";
            }
            cout << endl;
        }
    }

    return 0;
}
