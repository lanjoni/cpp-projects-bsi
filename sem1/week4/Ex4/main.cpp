/*
 *  Escreva um programa em C++ para ler o raio de um círculo, calcular
 *  e escrever a sua área e perímetro. Fórmulas:  perímetro =  2r
 *  onde r é o raio e  vale 3.14, ou pode ser obtido através da biblioteca (cmath),
 *  utilizando a constante M_PI.
 *
 *  Aluno: João Augusto Lissoni Lanjoni
 */

#include <cstdlib>
#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");

    float raio, perimetro, area;

    cout << "Informe o raio do círculo: ";
    cin >> raio;

    perimetro = 2 * M_PI * raio;
    area = M_PI * pow(raio, 2);

    cout << "======================" << endl;
    cout << "Perímetro do Círculo: " << perimetro << endl;
    cout << "Área do Círculo: " << area << endl;

    return 0;
}
