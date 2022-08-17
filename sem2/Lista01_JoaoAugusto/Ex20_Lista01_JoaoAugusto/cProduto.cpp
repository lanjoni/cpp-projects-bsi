#include "cProduto.h"
#include <iostream>
#include <cmath>

using namespace std;

cProduto::cProduto() {
}

cProduto::cProduto(const cProduto& orig) {
}

cProduto::~cProduto() {
}

void cProduto::insert(){
    cout << "* Código do produto ****** Preço unitário *" << endl;
    cout << "******* 1001 *************** R$5.32 *******" << endl;
    cout << "******* 1324 *************** R$6.45 *******" << endl;
    cout << "******* 6548 *************** R$2.37 *******" << endl;
    cout << "******* 0987 *************** R$5.32 *******" << endl;
    cout << "******* 7623 *************** R$6.45 *******" << endl;
    cout << endl;
    cout << "Informe o código do produto desejado: ";
    cin >> codigo;
    cout << "Informe a quantidade: ";
    cin >> qtd;
}

void cProduto::print(){
    float preco;
    
    switch(codigo){
        case 1001:
            preco = qtd * 5.32;
            break;
        case 1324:
            preco = qtd * 6.45;
            break;
        case 6548:
            preco = qtd * 2.37;
            break;
        case 987: // case não aceita número começando por 0, pois aceita como se 0987 == 987!
            preco = qtd * 5.32;
            break;
        case 7623:
            preco = qtd * 6.45;
            break;
        default:
            cout << "O código informado não é compatível!" << endl;
            exit(0);
    }
    
    cout << "O preço final a ser pago será igual a: R$" << preco << endl;
}