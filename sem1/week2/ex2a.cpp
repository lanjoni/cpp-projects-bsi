/*     
2. Faça um programa em C++ para calcular o valor que uma pessoa deve pagar de imposto de renda. O programa deve pedir o nome e o salário dessa pessoa.
    ◦ Se o salário for menor que R$ 2000,00, deve aparecer a mensagem:  (“Fulano”, você tem isenção de pagamento do IRPF);
    ◦ Se o salário for maior ou igual a R$ 2000,00, o imposto a ser pago será de 15% do salário.  
        (IRPF = salário * 0,15). O programa deverá mostrar a mensagem: (“Fulano”, você deverá pagar “$$$” de IRPF);  
    ◦ Se o salário for maior ou igual a R$ 3000,00, o imposto a ser pago será de 20% do salário.  
        (IRPF = salário * 0,20). O programa deverá mostrar a mensagem: (“Fulano”, você deverá pagar “$$$” de IRPF);  
    ◦ Se o salário for maior ou igual a R$ 5000,00, o imposto a ser pago será de 23% do salário.  
        (IRPF = salário * 0,23). O programa deverá mostrar a mensagem: (“Fulano”, você deverá pagar “$$$” de IRPF);  
    ◦ Se o salário for maior ou igual a R$ 10000,00, o imposto a ser pago será de 27% do salário.  
        (IRPF = salário * 0,27). O programa deverá mostrar a mensagem: (“Fulano”, você deverá pagar “$$$” de IRPF).

Aluno: João Augusto Lissoni Lanjoni
*/

#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main(int argc, char** argv){
    setlocale(LC_ALL, "Portuguese");
    char nome[50];
    float sal; // O salário é declarado como 'float' pois seu valor pode ser um número decimal, correto?

    cout << "============== Calcular Imposto de Renda! ==============" << endl;
    cout << "Informe o seu nome: "; // Aqui informamos o nome do usuário!
    cin >> nome;
    cout << "Informe o seu salário: ";
    cin >> sal;

    cout << "==========================================" << endl;
    if (sal < 2000){ // Essa é considerada a verificação principal pois separa nosso código em duas partes: os maiores que 2000 (que possuem quebras) ou os menores!
        cout << nome << ", você tem isenção de pagamento do IRPF!";
    } else {
        if (sal < 3000){
            cout << nome << ", você deverá pagar " << sal * 0.15 << " de IRPF!";
        } else if (sal < 5000){
            cout << nome << ", você deverá pagar " << sal * 0.20 << " de IRPF!";
        } else if (sal < 10000){
            cout << nome << ", você deverá pagar " << sal * 0.23 << " de IRPF!";
        } else {
            cout << nome << ", você deverá pagar " << sal * 0.27 << " de IRPF!";
        }
    }
}
