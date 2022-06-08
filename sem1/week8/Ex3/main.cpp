#include <iostream>
#include <fstream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    ofstream arq1;

    arq1.open("nome.txt", ios::app);

    if (arq1.is_open()){
        arq1 << "João" << endl;
        arq1 << "Sofia" << endl;
        arq1.close();
    } else {
        cout << "ERRO! Arquivo não foi aberto ou não existe!";
    }

    return 0;
}
