#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char palavra[20];

    cout << "Este é um exemplo de de inversão de palavra!" << endl;
    cout << "Digite uma palavra: ";
    cin >> palavra;

    cout << "A palavra invertida é: " << strset(palavra, '*'); // strrev

    return 0;
}
