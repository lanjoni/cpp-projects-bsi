#include "cNota.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

cNota::cNota() {
}

cNota::cNota(const cNota& orig) {
}

cNota::~cNota() {
}

void cNota::insert(){
    cout << "Informe o código do aluno: ";
    cin >> cod;
    cout << "Informe a nota 1 do aluno: ";
    cin >> nota1;
    cout << "Informe a nota 2 do aluno: ";
    cin >> nota2;
    cout << "Informe a nota 3 do aluno: ";
    cin >> nota3;
}

void cNota::print(){
    float maior = -9999999;
    float menor1 = 0;
    float menor2 = 0;
    
    if (nota1 > maior){
        maior = nota1;
        menor1 = nota2;
        menor2 = nota3;
    }
    
    if (nota2 > maior){
        maior = nota2;
        menor1 = nota1;
        menor2 = nota3;
    }
    
    if (nota3 > maior){
        maior = nota3;
        menor1 = nota1;
        menor2 = nota2;
    }
    
    float media = ((maior * 0.4) + (menor1 * 0.3) + (menor2 * 0.3));
    
    cout << endl;
    cout << "Aluno com código: " << cod << endl;
    cout << "================================" << endl;
    cout << "Nota 1: " << nota1 << endl;
    cout << "Nota 2: " << nota2 << endl;
    cout << "Nota 3: " << nota3 << endl;
    cout << "================================" << endl;
    cout << "Média: " << media << endl;
    cout << "================================" << endl;
     
    if (media >= 5){
        cout << "ALUNO APROVADO!" << endl;
    } else {
        cout << "ALUNO REPROVADO!" << endl;
    }
}

