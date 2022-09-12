#include "cNotas.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>

using namespace std;

cNotas::cNotas() {
}

cNotas::cNotas(const cNotas& orig) {
}

cNotas::~cNotas() {
}

void cNotas::insert(){
    int qtd;
    
    cout << "Informe a quantidade de alunos que deseja cadastrar: ";
    cin >> qtd;
    
    struct alunos{
        string nome;
        int matricula;
        float nota1, nota2;
    } aluno[qtd];
    
    float media[qtd];
    
    cout << endl << "*** CADASTRO ***" << endl << endl;
    
    for (int i = 0; i < qtd; i++){
        cout << "Cadastrando aluno " << i+1 << "!" << endl;
        cout << "Informe o nome do aluno: ";
        cin >> aluno[i].nome;
        cout << "Informe o número de matrícula do aluno: ";
        cin >> aluno[i].matricula;
        cout << "Informe a primeira nota do aluno: ";
        cin >> aluno[i].nota1;
        cout << "Informe a segunda nota do aluno: ";
        cin >> aluno[i].nota2;
        
        media[i] = calcularMedia(aluno[i].nota1, aluno[i].nota2);
        
        cout << "*************" << endl;
    }
    
    cout << endl << "*** CADASTRO CONCLUÍDO! ***" << endl << "Verificar cadastros..." << endl;
    
    for (int j = 0; j < qtd; j++){
        cout << "Nome do aluno " << j+1 << ": " << aluno[j].nome << endl;
        cout << "Matrícula do aluno " << j+1 << ": " << aluno[j].matricula << endl;
        cout << "Primeira nota do aluno " << j+1 << ": " << aluno[j].nota1 << endl;
        cout << "Segunda nota do aluno " << j+1 << ": " << aluno[j].nota2 << endl;
        cout << "Média das notas do aluno " << j+1 << ": " << media[j] << endl;
        cout << endl;
    }
}

float cNotas::calcularMedia(float nota1, float nota2){
    return (nota1 + nota2)/2;
}