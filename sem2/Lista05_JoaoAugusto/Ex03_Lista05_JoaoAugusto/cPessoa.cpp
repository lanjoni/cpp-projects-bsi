#include "cPessoa.h"
#include <iostream>

using namespace std;

cPessoa::cPessoa() {
}

cPessoa::cPessoa(const cPessoa& orig) {
}

cPessoa::~cPessoa() {
}

void cPessoa::principal(){
    int qtd;
    string nome, sexo;
    float altura, peso;
    int cpf;
    
    cout << "Informe a quantidade de pessoas que deseja cadastrar: ";
    cin >> qtd;
    
    PESSOA pessoas[qtd];
    
    cout << endl << "*** CADASTRO ***" << endl;
    
    for (int i = 0; i < qtd; i++){
        cout << endl << "********************" << endl << endl;
        cout << "Informe a nome da pessoa " << i+1 << ": ";
        cin >> nome;
        cout << "Informe o CPF da pessoa " << i+1 << ": ";
        cin >> cpf;
        cout << "Informe a altura da pessoa " << i+1 << ": ";
        cin >> altura;
        cout << "Informe o peso da pessoa " << i+1 << ": ";
        cin >> peso;
        cout << "Informe o sexo da pessoa " << i+1 << ": ";
        cin >> sexo;
        
        pessoas[i] = insert(nome, cpf, sexo, altura, peso);
    }
    
    cout << "*** CADASTRO CONCLUÍDO ***" << endl << endl;
    organizar(pessoas, qtd);
    buscar(pessoas, qtd);
}

PESSOA cPessoa::insert(string nome, int cpf, string sexo, float altura, float peso){
    PESSOA pessoas;
    
    pessoas.nome = nome;
    pessoas.cpf = cpf;
    pessoas.sexo = sexo;
    pessoas.altura = altura;
    pessoas.peso = peso;
    
    return pessoas;
}

float cPessoa::calcularIMC(float altura, float peso){
    return peso/(altura * altura);
}

void cPessoa::buscar(PESSOA pessoas[], int qtd){
    char opc;
    int cpf;
    
    do {
        cout << "Deseja buscar algum CPF? (S - SIM ou N - NÃO): ";
        cin >> opc;
        
        opc = toupper(opc);
        
        if (opc == 'S'){
            cout << "Informe o CPF que deseja buscar: ";
            cin >> cpf;
            
            //BUSCA indice = buscarCPF(pessoas, qtd, cpf);
            BUSCA indice = buscarCPF_binaria(pessoas, qtd, cpf);
            
            if (indice.qtd != 0){
                cout << "CPF ENCONTRADO!" << endl;
                //cout << "Quantidade de CPFs encontrados: " << indice.qtd << endl;
                cout << "Índices encontrados: " << endl;
                
                for (int j = 0; j < indice.qtd; j++){
                    cout << indice.indices[j] << endl;
                }
                
                cout << endl << "IMPRIMIR IMC: " << endl<< endl;
                
                for (int h = 0; h < indice.qtd; h++){
                    cout << "IMC do(a) " << pessoas[indice.indices[h]].nome << ": " << endl;
                    cout << calcularIMC(pessoas[indice.indices[h]].altura, pessoas[indice.indices[h]].peso) << endl << endl;
                }
                
                buscar(pessoas, qtd);
            } else {
                cout << "CPF NÃO FOI ENCONTRADO!" << endl;
            }
        } else if (opc != 'N'){
            cout << "Opção inválida! Tente novamente!" << endl << endl;
            buscar(pessoas, qtd);
        }
    } while (opc == 'S');
}

void cPessoa::organizar(PESSOA pessoas[], int qtd){
    int i, j;
    bool troca = true;
    PESSOA temp;
  
    for (i = qtd-1; i>= 1 && troca == true; i--){
        troca = false;
        for (j = 0; j < i; j++){
            if (pessoas[j].cpf > pessoas[j+1].cpf){
                temp = pessoas[j];
                pessoas[j] = pessoas[j+1];
                pessoas[j+1] = temp;
                troca = true;
            }
        }
    }
}

BUSCA cPessoa::buscarCPF_binaria(PESSOA pessoas[], int qtd, int cpf){
    int inf, sup, meio, comparacoes = 0;
    bool troca = true;
    BUSCA busca;
    
    inf = 0;
    sup = qtd - 1;
    
    while (inf <= sup){
        meio = (inf + sup)/2;
        
        if (cpf == pessoas[meio].cpf){
            busca.indices[0] = meio;
            busca.qtd = 1;
            return busca;
        } else if (cpf == pessoas[meio].cpf) {
            sup = meio - 1;
        } else {
            inf = meio + 1;
        }
    }
    
    busca.indices[0] = -1;
    busca.qtd = 1;
    return busca;
}

BUSCA cPessoa::buscarCPF(PESSOA pessoas[], int qtd, int cpf){
    int cont = 0;
    BUSCA busca;
    
    for (int i = 0; i < qtd; i++){
        if (pessoas[i].cpf == cpf){
            pessoas[i].imc = calcularIMC(pessoas[i].altura, pessoas[i].peso);
            busca.indices[cont] = i;
            cont++;
        }
    }
    
    busca.qtd = cont;
    
    return busca;
}