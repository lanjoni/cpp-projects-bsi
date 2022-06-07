#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int acheMaior(int a, int b, int c){
    int maior;

    maior = a;

    if (b > maior){
        maior = b;
    }

    if (c > maior){
        maior = c;
    }

    return maior;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a, b, c, x, y, z, maior_1, maior_2;

    cout << "Digite o primeiro conjunto de três números inteiros: ";
    cin >> x >> y >> z;

    maior_1 = acheMaior(x, y, z);

    cout << "Digite o segundo conjunto de três números inteiros: ";
    cin >> a >> b >> c;

    maior_2 = acheMaior(a, b, c);

    cout << "A soma dos maiores números é: " << maior_1 + maior_2;

    return 0;
}
