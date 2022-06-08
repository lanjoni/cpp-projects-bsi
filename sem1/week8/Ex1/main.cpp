#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

void troca (int &a, int &b){
    int temp;

    temp = a;
    a = b;
    b = temp;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a, b;

    cout << "Entre com dois números: ";
    cin >> a >> b;

    cout << "Você entrou com " << a << " e " << b << "!" << endl;

    troca(a,b);

    cout << "Trocados eles são " << a << " e " << b << "!" << endl;

    return 0;
}
