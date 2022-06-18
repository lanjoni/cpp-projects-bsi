/*
 * Escreva um programa em C++ que receba do usuário dados de um PET (nome do animal, espécie, raça,
 * sexo, idade, nome do dono, rg do dono, telefone do dono). O programa deve solicitar os dados
 * de N PETs e salvar os dados cadastrados em um arquivo.TXT.
 *
 * ALERTA: Tentei utilizar com getline e char[50], porém meu compilador só dava problema :( Por favor, use nomes simples e não compostos!
 * GRATO! ASS: João Augusto Lissoni Lanjoni - BSI1
 */

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n;

    cout << "Informe a quantidade de animais que deseja cadastrar: ";
    cin >> n;
    cout << endl;

    struct PET{
        string nome;
        string especie;
        string raca;
        string idade;
        string dono;
        string rg;
        string telefone;
    } pet[n];

    ofstream arquivo;

    arquivo.open("pets.txt", ios::out | ios::app);

    for (int i = 0; i < n; i++){
        cout << "Informe o nome do PET: ";
        cin >> pet[i].nome;
        cout << "Informe a espécie do PET: ";
        cin >> pet[i].especie;
        cout << "Informe a raça do PET: ";
        cin >> pet[i].raca;
        cout << "Informe a idade do PET: ";
        cin >> pet[i].idade;
        cout << "Informe o nome do dono do PET: ";
        cin >> pet[i].dono;
        cout << "Informe o RG do dono do PET: ";
        cin >> pet[i].rg;
        cout << "Informe o telefone do dono do PET: ";
        cin >>pet[i].telefone;
        cout << "=========================" << endl;
        cout << "PET cadastrado com sucesso!" << endl;
        cout << endl;

        if (arquivo.is_open()){
            arquivo << "ENTRANDO COM DADOS DO PET " << pet[i].nome << endl;
            arquivo << "Nome do PET: " << pet[i].nome << endl;
            arquivo << "Espécie do PET: " << pet[i].especie << endl;
            arquivo << "Raça do PET: " << pet[i].raca << endl;
            arquivo << "Idade do PET: " << pet[i].idade << endl;
            arquivo << "Nome do dono do PET: " << pet[i].dono << endl;
            arquivo << "RG do dono do PET: " << pet[i].rg << endl;
            arquivo << "Telefone do dono do PET: " << pet[i].telefone << endl;
            arquivo << endl;
        } else {
            cout << "ERRO! Arquivo não existe!";
        }
    }

    arquivo.close();

    cout << endl;
    cout << "Todos os PETs foram cadastrados com sucesso!" << endl;
    cout << endl;

    return 0;
}