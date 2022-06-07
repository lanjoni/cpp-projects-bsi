#include <iostream>
#include <cstdlib>

using namespace std;

float capacidade(float, float, float);

int main() {
    float comp, larg, alt;

    cout << "===== Calcular capacidade de água de uma piscina =====" << endl;
    cout << "Informe o comprimento da piscina: ";
    cin >> comp;
    cout << "Informe a largura da piscina: ";
    cin >> larg;
    cout << "Informe a altura da piscina: ";
    cin >> alt;

    cout << "=========================================================" << endl;
    cout << "Capacidade de água: " << capacidade(comp, larg, alt);

    return 0;
}

float capacidade(float comp, float larg, float alt){
    float result = comp * larg * alt;

    return result;
}
