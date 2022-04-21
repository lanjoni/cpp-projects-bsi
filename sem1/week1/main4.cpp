#include <cstdlib>
#include <iostream>
#include <locale.h>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    
    char nome[50];
    float base, potencia, raiz, lado, cubo, raio, resultado;
    
    cout << " ================== Calcular operações matemáticas! ================== ";
    cout << "\nPOTÊNCIA - Informe a base e logo depois o número que será elevado: ";
    cin >> base >> potencia;
    resultado = pow(base,potencia);
    cout << "\nO resultado de " << base << " elevado a " << potencia << " é: " << resultado << endl;

    cout << " ====================================================================== " << endl;
    
    cout << "\nDigite o valor para o lado do quadrado: ";
    cin >> lado;
    resultado = pow(lado,2);
    cout << "\nA área do quadrado para o valor de lado informado é: " << resultado;
    
    cout << " ====================================================================== " << endl;
    
    cout << "\nDigite um valor para calcular a raíz quadrada: ";
    cin >> raiz;
    resultado = sqrt(raiz);
    cout << "\nA raíz quadrada do número informado é: " << resultado;
    
    cout << " ====================================================================== " << endl;
    
    cout << "\nDigite um valor de um lado de um cubo: ";
    cin >> cubo;
    resultado = pow(cubo,3);
    cout << "\nA área do cubo para o valor de lado informado é: " << resultado;
    
    cout << " ====================================================================== " << endl;
    
    cout << "\nDigite um valor de raio de uma circunferência: ";
    cin >> raio;
    resultado = M_PI * (raio * 2);
    cout << "\nA área da circunferência é: " << resultado << endl;
    
    cout << " ====================================================================== " << endl;
    
    return 0;
}

