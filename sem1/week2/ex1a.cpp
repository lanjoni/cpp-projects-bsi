/*     
1. Crie um programa para exibir o nome dos times (São Paulo, Santos, Palmeiras e Corinthians) na tela e que 
permita ao usuário a escolha de uma opção. Imprima uma mensagem sobre o time escolhido. 

Exemplo :
1 - São Paulo 
2 - Santos 
3 - Palmeiras 
4 - Corinthians 

Aluno: João Augusto Lissoni Lanjoni
*/

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>

// Acima incluímos todas as bibliotecas que podem ser necessárias para o desenvolvimento!

using namespace std;

int main(int argc, char** argv){
    setlocale(LC_ALL, "Portuguese");
    int time;

    cout << "==============================" << endl;
    cout << "Selecione um time: " << endl;
    cout << "1 - São Paulo;" << endl;
    cout << "2 - Santos;" << endl;
    cout << "3 - Palmeiras;" << endl;
    cout << "4 - Corinthians;" << endl;
    cin >> time;
    // Aqui o usuário entra com a opção de time que desejar, e após ser lida, passará para o switch!

    switch (time){ // O 'switch' funciona verificando casos, agilizando o processo de menus para opções! Saber quando utilizar o 'switch' é essencial!
        case 1:
            cout << "O time selecionado foi São Paulo!" << endl;
            cout << "Famoso freguês do Palmeiras..." << endl;
            break;
        case 2:
            cout << "O time selecionado foi Santos!" << endl;
            cout << "Se fosse pra depender dos torcedores..." << endl;
            break;
        case 3:
            cout << "O time selecionado foi Palmeiras!" << endl;
            cout << "O maior campeão brasileiro!" << endl;
            break;
        case 4:
            cout << "O time selecionado foi Corinthians!" << endl;
            cout << "CÁSSIO!" << endl;
            break;
        default:
            cout << "Opção inválida!" << endl;
    }
}
