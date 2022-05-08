/*
 *  Escrever um programa que leia o código do item pedido,
 *  a quantidade do item e calcule o valor a ser pago por aquele lanche.
 *  Considere que a cada execução somente será calculado um item.
 *  Informe que código inválido caso seja digitado algo diferente.
 *
 *  Aluno: João Augusto Lissoni Lanjoni
 */

#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");

    int cod, qtd;
    float valor;

    cout << "Especificação ======= Código ======= Preço" << endl;
    cout << "Cachorro quente ====== 100 ========= R$9,20" << endl;
    cout << "Bauru simples ======== 101 ========= R$12,00" << endl;
    cout << "Bauru com ovo ======== 102 ========= R$13,00" << endl;
    cout << "Hambúrguer =========== 103 ========= R$10,00" << endl;
    cout << "Cheeseburguer ======== 104 ========= R$12,00" << endl;
    cout << "Refrigerante lata ==== 105 ========= R$5,00" << endl;
    cout << "Água ================= 106 ========= R$3,00" << endl;
    cout << "Informe o código de seu pedido: ";
    cin >> cod;
    cout << "Informe a quantidade de seu pedido: ";
    cin >> qtd;

    switch(cod){
        case 100:
            valor = qtd * 9.20;
            cout << "Valor a ser pago: R$" << valor << endl;
            break;
        case 101:
            valor = qtd * 12;
            cout << "Valor a ser pago: R$" << valor << endl;
            break;
        case 102:
            valor = qtd * 13;
            cout << "Valor a ser pago: R$" << valor << endl;
            break;
        case 103:
            valor = qtd * 10;
            cout << "Valor a ser pago: R$" << valor << endl;
            break;
        case 104:
            valor = qtd * 12;
            cout << "Valor a ser pago: R$" << valor << endl;
            break;
        case 105:
            valor = qtd * 5;
            cout << "Valor a ser pago: R$" << valor << endl;
            break;
        case 106:
            valor = qtd * 3;
            cout << "Valor a ser pago: R$" << valor << endl;
            break;
        default:
            cout << "Código inválido!" << endl;
    }

    return 0;
}

