#include "cConta.h"
#include <iostream>

using namespace std;

cConta::cConta() {
}

cConta::cConta(const cConta& orig) {
}

cConta::~cConta() {
}

void cConta::principal(){
    CLIENTE conta[3];
    
    cout << "*** CRIAÇÃO DE CONTAS ***" << endl;
    
    for (int i = 0; i < 3; i++){
        cout << endl;
        cout << "Informe o nome do cliente da conta número " << i+1 << ": ";
        cin >> conta[i].nome;
        cout << "Informe o CPF do cliente da conta número " << i+1 << ": ";
        cin >> conta[i].cpf;
        cout << "Informe o valor do primeiro depósito da conta de número " << i+1 << ": ";
        cin >> conta[i].saldo;
        cout << endl;
    }
    
    gerenciar(conta);
}

void cConta::gerenciar(CLIENTE conta[]){
    int numero;
    char opc;
    
    do {        
        cout << "*** LISTA DE OPERAÇÕES ***" << endl;
        cout << "S - SAQUE" << endl << "D - DEPÓSITO" << endl << "X - SAIR" << endl;
        cout << "Informe a operação que deseja realizar: ";
        cin >> opc;
        
        opc = toupper(opc);
        
        if (opc != 'X'){
            cout << endl << "Informe o número da conta que deseja gerenciar: ";
            cin >> numero;
            
            if (numero == 1 || numero == 2 || numero == 3){
                if (opc == 'S'){
                    CLIENTE resultado = saque(conta, numero);
                    conta[numero] = resultado;

                    cout << endl << "*** VALORES ATUALIZADOS! SAQUE CONCLUÍDO COM SUCESSO! ***" << endl;
                    cout << endl << "Número da conta: " << numero;
                    cout << endl << "Nome do cliente: " << conta[numero].nome;
                    cout << endl << endl << "Saldo atual do cliente: " << conta[numero].saldo;
                    cout << endl;

                    gerenciar(conta);
                } else if (opc == 'D'){
                    CLIENTE resultado = deposito(conta, numero);
                    conta[numero] = resultado;

                    cout << endl << "*** VALORES ATUALIZADOS! DEPÓSITO CONCLUÍDO COM SUCESSO! ***" << endl;
                    cout << endl << "Número da conta: " << numero;
                    cout << endl << "Nome do cliente: " << conta[numero].nome;
                    cout << endl << endl << "Saldo atual do cliente: " << conta[numero].saldo;
                    cout << endl;

                    gerenciar(conta);
                } else {
                    cout << endl << "A operação informada é inválida! Tente novamente..." << endl;
                    gerenciar(conta);
                }
            } else {
                cout << endl << "Erro! Conta informada não existe! Tente novamente!" << endl << endl;
                gerenciar(conta);
            }
        }
    } while(opc != 'X');
}

CLIENTE cConta::saque(CLIENTE conta[], int numero){
    float quantia;
    
    cout << "Informe a quantia que deseja sacar: ";
    cin >> quantia;
    
    conta[numero].saldo -= quantia;
    
    return conta[numero];
}

CLIENTE cConta::deposito(CLIENTE conta[], int numero){
    float quantia;
    
    cout << "Informe a quantia que deseja depositar: ";
    cin >> quantia;
    
    conta[numero].saldo += quantia;
    
    return conta[numero];
}