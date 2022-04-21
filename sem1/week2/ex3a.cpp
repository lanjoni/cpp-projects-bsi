/*     
3. Faça um programa que deve perguntar ao usuário se ele deseja somar, subtrair, dividir, multiplicar ou sair do programa. 
    ◦ Caso ele queira somar (+), deverá informar dois números e o computador informará o resultado da soma. 
    ◦ Caso ele queira subtrair (-), deverá informar dois números e o computador informará o resultado da subtração. 
    ◦ Caso ele queira dividir (/), deverá informar dois números e o computador informará o resultado da divisão. 
    ◦ Caso ele queira multiplicar (*), deverá informar dois números e o computador informará o resultado da multiplicação. 
    ◦ Se o usuário quiser sair do programa informará tal opção (S).
    ◦ Para qualquer outro caso o computador deverá informar (Opção inválida).

Aluno: João Augusto Lissoni Lanjoni
*/

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>

using namespace std;

int main(int argc, char** argv){
    setlocale(LC_ALL, "Portuguese");
    char opc;
    float n1, n2;

    cout << "==============================" << endl;
    cout << "Selecione a operação desejada: " << endl;
    cout << "+ - Somar;" << endl;
    cout << "- - Subtrair;" << endl;
    cout << "/ - Dividir;" << endl;
    cout << "* - Multiplicar;" << endl;
    cin >> opc;
    cout << "\nInforme o primeiro número: ";
    cin >> n1;
    cout << "\nInforme o segundo número: ";
    cin >> n2;

    switch (opc){ // A única diferença deste 'switch' é: ele verifica caracteres! Sim, de modo geral! Para trabalhar com letras usamos 'toupper' pois todas as letras se tornam maiúsculas!
        case '+':
            cout << "O resultado de " << n1 << " + " << n2 << " é " << n1 + n2 << endl;
            break;
        case '-':
            cout << "O resultado de " << n1 << " - " << n2 << " é " << n1 - n2 << endl;
            break;
        case '/':
            cout << "O resultado de " << n1 << " / " << n2 << " é " << n1 / n2 << endl;
            break;
        case '*':
            cout << "O resultado de " << n1 << " * " << n2 << " é " << n1 * n2 << endl;
            break;
        default:
            cout << "Opção inválida!" << endl;
    }
}
