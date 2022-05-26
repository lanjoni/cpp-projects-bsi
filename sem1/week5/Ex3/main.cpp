#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char palavra1[20], palavra2[20];

    cout << "Digite a palavra 1: ";
    cin >> palavra1;
    cout << "Digite a palavra 2: ";
    cin >> palavra2;

    cout << "Unindo a palavra 1 com a palavra 2 temos: " << strcat(palavra1, palavra2) << endl;

    return 0;
}
