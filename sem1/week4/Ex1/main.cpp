/*
 * Escreva um programa em C++  que exiba a seguinte mensagem: “Sou calouro de BSI!!!!”
 */
#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    cout << "Sou calouro de BSI!!!!" << endl;
    return 0;
}
