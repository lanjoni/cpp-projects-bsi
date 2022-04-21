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
    int opc = 1, contador = 0, maior = 0; // Primeiro iniciamos nossas variáveis! A variável 'opc' não pode ser 0, pois senão jamais entrará no laço!
    
    cout << "==============================" << endl;
    while (opc != 0){
        cout << "Digite um número (0 para parar): ";
        cin >> opc;
        contador++; // Basicamente este contador aumenta de um em um para mostrar a quantidade de vezes que o laço foi executado, ou seja, a quantidade de números digitados!
        if (opc > maior){ // Aqui fazemos uma comparação para saber qual o maior número digitado. Se ele for maior que o anterior armazenado, então ele será armazenado!
            maior = opc;
        }
    }
    
    cout << "A quantidade de números digitados foi: " << contador << endl;
    cout << "O maior número digitado foi: " << maior << endl;
}
