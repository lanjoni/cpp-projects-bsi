/*
 *  O programa deve escrever o número do aluno (matrícula), suas notas, a média dos exercícios,
 *  a média de aproveitamento e o conceito correspondente. De acordo com o conceito exiba a mensagem:
 *  APROVADO se o conceito for A,B ou C e REPROVADO se o conceito for D ou E.
 *
 *  Aluno: João Augusto Lissoni Lanjoni
 */

#include <cstdlib>
#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");

    int matricula;
    float nota1, nota2, nota3, atividades, mediaAproveitamento;

    cout << "Informe o número de sua matrícula: ";
    cin >> matricula;
    cout << "Informe sua nota 1: ";
    cin >> nota1;
    cout << "Informe sua nota 2: ";
    cin >> nota2;
    cout << "Informe sua nota 3: ";
    cin >> nota3;
    cout << "Informe a média das atividades: ";
    cin >> atividades;

    mediaAproveitamento = (nota1 + (nota2 * 2) + (nota3 * 3) + atividades)/7;

    if (mediaAproveitamento >= 9){
        cout << "Aluno com matrícula " << matricula << " APROVADO com conceito A" << endl;
    } else if (mediaAproveitamento < 9 && mediaAproveitamento >= 7.5){
        cout << "Aluno com matrícula " << matricula << " APROVADO com conceito B" << endl;
    } else if (mediaAproveitamento < 7.5 && mediaAproveitamento >= 6){
        cout << "Aluno com matrícula " << matricula << " APROVADO com conceito C" << endl;
    } else if (mediaAproveitamento < 6 && mediaAproveitamento >= 4){
        cout << "Aluno com matrícula " << matricula << " REPROVADO com conceito D" << endl;
    } else {
        cout << "Aluno com matrícula " << matricula << " REPROVADO com conceito E" << endl;
    }

    return 0;
}

