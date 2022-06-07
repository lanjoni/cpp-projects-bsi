#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

float calcularDivisao(int n1, int n2){
    float result;

    result = n1/n2;

    return result;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;
    float result;

    cout << "========== Calcular Divisão ==========" << endl;
    cout << "Informe o primeiro número que deseja calcular a divisão: ";
    cin >> n1;
    cout << "Informe o segundo número que deseja calcular a divisão: ";
    cin >> n2;

    result = calcularDivisao(n1, n2);

    cout << "O resultado da divisão de " << n1 << " por " << n2 << " é: " << result << endl;

    return 0;
}
