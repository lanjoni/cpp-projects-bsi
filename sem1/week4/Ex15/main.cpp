/*
 *  A prefeitura de uma cidade fez uma pesquisa entre 15 habitantes, coletando dados sobre o salário e número de filhos.
 *  A prefeitura deseja saber:
 *  média do salário da população;
 *  média do número de filhos;
 *  maior salário; .
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

    int filhos = 0;
    float salario = 0, salarioM = 0, mediaSalario = 0, mediaFilhos = 0, somaFilhos = 0, somaSalario = 0;

    for (int i = 1; i <= 15; i++){
        cout << "============== " << i << endl;
        cout << "Informe seu salário: ";
        cin >> salario;
        cout << "Informe o número de filhos: ";
        cin >> filhos;

        if (salario > salarioM){
            salarioM = salario;
        }

        somaFilhos = somaFilhos + filhos;
        somaSalario = somaSalario + salario;
    }

    mediaFilhos = somaFilhos/15;
    mediaSalario = somaSalario/15;

    cout << "==============" << endl;
    cout << "A média dos salários da população é: R$" << mediaSalario << endl;
    cout << "A média do número de filhos da população é: " << mediaFilhos << endl;
    cout << "O maior salário informado foi: R$" << salarioM;

    return 0;
}


