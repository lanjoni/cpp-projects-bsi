#include <iostream>
#include <cstdlib>
#include <locale>
#define DIM 5

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero[5];

    for (int i = 0; i < 5; i++){
        cout << "Informe um número: ";
        cin >> numero[i];
    }

    cout << "========================" << endl;
    cout << "Os números informados foram: " << endl;

    for (int j = 0; j < 5; j++){
        cout << numero[j] << endl;
    }


    return 0;
}
