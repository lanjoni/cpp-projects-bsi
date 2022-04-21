// Faça um programa em C++ que pergunte um valor em graus Fahrenheit e imprime na tela o 
// correspondente em Celsius usando a seguinte fórmula:
// Usar uma variável double ou float para ler o valor em Fahrenheit e a fórmula C++ = (f – 32) * (5.0/9.0).

// Aluno: João Augusto Lissoni Lanjoni

#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv){
    setlocale(LC_ALL, "Portuguese");

    float f, c;

    cout << " ================== Converter temperatura! ================== ";
    cout << "\nInforme a temperatura em graus Fahrenheit: ";
    cin >> f;

    c = (f - 32) * (5.0 / 9.0);

    cout << "\n A temperatura informada em graus Celsius é: " << c << endl;
    
    return 0;
}