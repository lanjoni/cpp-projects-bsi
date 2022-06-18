/*
 * Escreva um programa em C++ que receba do usuário dados de um PET (nome do animal, espécie, raça, sexo, idade,
 * nome do dono, rg do dono, telefone do dono). O programa deve solicitar os dados de N PETs. Mostre na tela todos os cadastros.
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
    }

    cout << endl;
    cout << "Todos os PETs foram cadastrados com sucesso!" << endl;
    cout << endl;
    cout << "PETS CADASTRADOS AGORA: " << endl;
    for (int j = 0; j < n; j++){
        cout << "Nome do PET: " << pet[j].nome << endl;
        cout << "Espécie do PET: " << pet[j].especie << endl;
        cout << "Raça do PET: " << pet[j].raca << endl;
        cout << "Idade do PET: " << pet[j].idade << endl;
        cout << "Nome do dono do PET: " << pet[j].dono << endl;
        cout << "RG do dono do PET: " << pet[j].rg << endl;
        cout << "Telefone do dono do PET: " << pet[j].telefone << endl;
        cout << endl;
    }

    return 0;
}
