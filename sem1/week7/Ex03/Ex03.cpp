#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

float calcularTemperatura(float f){
    float c;

    c = (f - 32) * (5.0/9.0);

    return c;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float c, f;

    cout << "========== Converter para graus Celsius ==========" << endl;
    cout << "Informe a temperaturas em graus Fahrenheit: ";
    cin >> f;

    c = calcularTemperatura(f);

    cout << "Temperatura convertida: " << f << "°F = " << c << "°C";

    return 0;
}
