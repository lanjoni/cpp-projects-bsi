#include <iostream>
#include <cstdlib>
#include <locale>
#include <fstream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    string abc;

    ifstream arq_leitura ("arquivoFOR.txt");
    if (arq_leitura.is_open()){
        while (! arq_leitura.eof()){
            cout << abc << endl;
        }

        arq_leitura.close();
    } else {
        cout << "ERRO! Arquivo não foi aberto ou não existe!" << endl;
    }

    return 0;
}
