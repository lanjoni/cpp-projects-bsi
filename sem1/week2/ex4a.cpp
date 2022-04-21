/*     
Faça um programa para ler N números inteiros – informe um de cada vez. 
A repetição será encerrada quando o usuário digitar o número 0. O programa deve informar quantos números foram digitados. 

Aluno: João Augusto Lissoni Lanjoni
*/

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    int opc = 1, contador = 0, maior = 0;
    
    cout << "==============================" << endl;
    while (opc != 0){
        cout << "Digite um número (0 para parar): ";
        cin >> opc;
        contador++;
        if (opc > maior){
            maior = opc;
        }
    }
    
    cout << "A quantidade de números digitados foi: " << contador << endl;
    cout << "O maior número digitado foi: " << maior << endl;
}