#include "cPessoa.h"
#include <iostream>

using namespace std;

cPessoa::cPessoa() {
}

cPessoa::cPessoa(const cPessoa& orig) {
}

cPessoa::~cPessoa() {
}

void cPessoa::lerDados(){
    int qtd, busca, indice = -1;
    float imc;
    char opc = 'S';
    
    cout << "Informe a quantidade de pessoas que deseja cadastrar: ";
    cin >> qtd;
    
    pessoa x[qtd];
    
    for (int i = 0; i < qtd; i++){
        cout << endl;
        cout << "Informe o nome da pessoa " << i+1 << ": ";
        cin >> x[i].nome;
        cout << "Informe o CPF da pessoa " << i+1 << ": ";
        cin >> x[i].cpf;
        cout << "Informe a altura da pessoa " << i+1 << ": ";
        cin >> x[i].altura;
        cout << "Informe o peso da pessoa " << i+1 << ": ";
        cin >> x[i].peso;
        cout << endl;
    }
    
    cout << endl << "Cadastro concluído!" << endl << endl;
    
    do {
        if (opc == 'S'){
            cout << "Informe o CPF que deseja buscar: ";
            cin >> busca;
            indice = pesquisaSequencial(x, qtd, busca);
            
            if (indice == -1){
                cout << endl << "CPF não foi encontrado!" << endl;
            } else {
                cout << endl << "CPF encontrado!" << endl;
                
                pessoa y = x[indice];
                imc = calcIMC(y);
                
                cout << "Nome da pessoa: " << y.nome << endl;
                cout << "CPF da pessoa: " << y.cpf << endl;
                cout << "Altura da pessoa: " << y.altura << endl;
                cout << "Peso da pessoa: " << y.peso << endl;
                cout << "IMC da pessoa: " << imc << endl;
             }
        } else {
            cout << endl << "Opção inválida! Tente novamente!" << endl;
        }
        
        cout << endl << "Deseja continuar sua busca? (S - SIM / N - NÃO): ";
        cin >> opc;
        
        opc = toupper(opc);
    } while (opc != 'N');
}

float cPessoa::calcIMC(pessoa y){
    float imc;
    
    imc = y.peso/(y.altura * y.altura);
    
    return imc;
}

int cPessoa::pesquisaSequencial(pessoa vetor[], int qtd, int cpf){
    for (int i = 0; i < qtd; i++){
        if (vetor[i].cpf == cpf){
            return i;
        }
    }
    
    return -1; //Erro!
}