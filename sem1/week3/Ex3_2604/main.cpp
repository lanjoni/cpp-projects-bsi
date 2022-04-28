/*
 * Escreva um programa para exibir os números contidos no intervalo de n a m, inclusive.
 * n e m devem ser valores informados pelo usuário (os números devem ser exibidos em ordem crescente).
 *
 * Aluno: João Augusto Lissoni Lanjoni
 */

#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n, m;

    cout << "===== Exibir números no intervalo (N, M) =====" << endl;
    cout << "Informe N: ";
    cin >> n;
    cout << "Informe M: ";
    cin >> m;

    for (int i = n; i <= m; i++){
        cout << i << endl;
    }

    return 0;
}
