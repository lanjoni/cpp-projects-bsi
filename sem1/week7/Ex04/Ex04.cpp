#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int fatorial(int n) {
    if (n > 1) {
        return n * fatorial(n - 1);
    } else {
        return 1;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n, result;

    cout << "========== Calcular fatorial ==========" << endl;
    cout << "Digite um número que não seja negativo: ";
    cin >> n;

    result = fatorial(n);

    cout << "O Fatorial de " << n << " é " << result;

    return 0;
}
