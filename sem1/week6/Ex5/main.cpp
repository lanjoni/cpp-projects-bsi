#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

int main() {
    int x = 0;

    cout << "Informe a quantidade de elementos que deseja ter: ";
    cin >> x;

    struct EstruturaAluno{
        char nome[60];
        char matricula[10];
        int anoIngresso;
        int idade;
        char cidadeNascimento[60];
        char comidaFavorita[60];
    } strAluno[x];

    cout << endl;

    for(int i = 0; i < x; i++){
        cout << "Informe o nome do aluno: ";
        cin.getline(strAluno[i].nome, 60);
        cout << "Informe a matrícula do aluno: ";
        cin.getline(strAluno[i].matricula, 10);
        cout << "Informe o ano de ingresso do aluno: ";
        cin >> strAluno[i].anoIngresso;
        cout << "Informe sua idade: ";
        cin >> strAluno[i].idade;
        cout << "Informe a cidade de nascimento: ";
        cin.getline(strAluno[i].cidadeNascimento, 60);
        cout << "Informe sua comida favorita: ";
        cin.getline(strAluno[i].comidaFavorita, 60);
        cout << endl;
        getchar();
    }

    cout << "Alunos cadastrados com sucesso!" << endl << endl;
    cout << "Alunos cadastrados: " << endl;
    for (int i = 0; i < x; i++){
        cout << "===================================" << endl;
        cout << "Nome: " << strAluno[i].nome << endl;
        cout << "Matrícula: " << strAluno[i].matricula << endl;
        cout << "Ano de ingresso: " << strAluno[i].anoIngresso << endl;
        cout << "Idade: " << strAluno[i].idade << endl;
        cout << "Cidade de nascimento: " << strAluno[i].cidadeNascimento << endl;
        cout << "Comida favorita: " << strAluno[i].comidaFavorita << endl;
    }

    return 0;
}
