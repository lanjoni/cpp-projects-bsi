// Faça um programa em C++ que peça o nome de uma pessoa, a quantidade de quilômetros que ela 
// andou de bicicleta e o tempo gasto em minutos para percorrer essa distância. Mostre na tela 
// uma mensagem como: “Olá Mário, você percorreu 30 km em 65 minutos, sua velocidade média foi: 27.7.

// Aluno: João Augusto Lissoni Lanjoni

#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv){
    setlocale(LC_ALL, "Portuguese");

    char nome[50];
    float km, min, horas, velmed;

    cout << " ================== Calcular distância/velocidade média! ================== ";
    cout << "\nInforme o nome do ciclista: ";
    cin >> nome;
    cout << "\nInforme a quantidade de quilômetros percorridos: ";
    cin >> km;
    cout << "\nInforme o tempo gasto em minutos para percorrer: ";
    cin >> min;

    horas = min/60;
    velmed = km/horas;

    cout << " ====================================================== " << endl;
    cout << "Olá " << nome << ", você percorreu " << km << " em " << min << " minutos, sua velocidade média foi: " << velmed;

    return 0;
}