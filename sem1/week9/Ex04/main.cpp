/*
 * Escreva um programa em C++  para armazenar notas das P1 e P2 de 15 alunos (2 vetores).
 * Calcular a média e armazenar em outro vetor. Verificar também a situação do aluno
 * (Aprovado ou Reprovado). Imprimir as notas, a média e situação de cada aluno.
 */

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    float p1[15];
    float p2[15];
    float media[15];
    float result;

    for (int i = 0; i < 15; i++){
        cout << "Informe a nota da P1 do aluno " << i << ": ";
        cin >> p1[i];
        cout << "Informe a nota da P2 do aluno " << i << ": ";
        cin >> p2[i];
        cout << endl;
    }

    for (int j = 0; j < 15; j++){
        cout << "Aluno " << j << ": " << endl;
        cout << "P1: " << p1[j] << " - P2: " << p2[j] << endl;
        result = p1[j] + p2[j];
        media[j] = result/2;

        cout << "Média: " << media[j] << endl;
        if (media[j] >= 6){
            cout << "Aluno " << j << " APROVADO!" << endl;
        } else {
            cout << "Aluno " << j << " REPROVADO!" << endl;
        }

        cout << endl;
    }

    return 0;
}
