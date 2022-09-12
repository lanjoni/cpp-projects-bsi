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

void cNotas::principal(){
    string nome;
    int qtd, matricula;
    float nota1, nota2;
    
    cout << "Informe a quantidade de alunos que deseja cadastrar: ";
    cin >> qtd;
    
    ALUNOS aluno[qtd];
    
    float media[qtd];
    
    cout << endl << "*** CADASTRO ***" << endl << endl;
    
    for (int i = 0; i < qtd; i++){
        cout << "Cadastrando aluno " << i+1 << "!" << endl;
        cout << "Informe o nome do aluno: ";
        cin >> nome;
        cout << "Informe o número de matrícula do aluno: ";
        cin >> matricula;
        cout << "Informe a primeira nota do aluno: ";
        cin >> nota1;
        cout << "Informe a segunda nota do aluno: ";
        cin >> nota2;
        
        aluno[i] = insert(nome, matricula, nota1, nota2);
        
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

ALUNOS cNotas::insert(string nome, int matricula, float nota1, float nota2){
    ALUNOS aluno;
    
    aluno.nome = nome;
    aluno.matricula = matricula;
    aluno.nota1 = nota1;
    aluno.nota2 = nota2;
    
    return aluno;
}

float cNotas::calcularMedia(float nota1, float nota2){
    return (nota1 + nota2)/2;
}