#include <iostream>
#include <locale>
#include <cstdlib>
#define NALUNO 5

using namespace std;

int main() {
    struct EstruturaAluno{
        char nome[60];
        char matricula[10];
        int anoIngresso;
    } strAluno[NALUNO];

    int i;
    for(i = 0; i < NALUNO; i++){
        cout << "Informe o nome do aluno: ";
        cin.getline(strAluno[i].nome, 60);
        cout << "Informe a matrícula do aluno: ";
        cin.getline(strAluno[i].matricula, 10);
        cout << "Informe o ano de ingresso do aluno: ";
        cin >> strAluno[i].anoIngresso;
        cout << endl;
        getchar();
    }

    cout << "Alunos cadastrados com sucesso!" << endl << endl;
    cout << "Alunos cadastrados: ";
    for (i = 0; i < NALUNO; i++){
        cout << "===================================" << endl;
        cout << "Nome: " << strAluno[i].nome << endl;
        cout << "Matrícula: " << strAluno[i].matricula << endl;
        cout << "Ano de ingresso: " << strAluno[i].anoIngresso << endl;
    }

    return 0;
}
