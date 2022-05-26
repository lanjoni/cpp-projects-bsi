#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char palavra[20];
    cout << "Digite uma palavra: ";
    cin >> palavra;
    cout << "A palavra tem " << strlen(palavra) << " letras." << endl;
    return 0;
}
