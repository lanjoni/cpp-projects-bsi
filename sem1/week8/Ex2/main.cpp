#include <iostream>
#include <cstdlib>
#include <fstream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    ofstream arq1;
    arq1.open ("nomes.txt", ios::app);
    arq1 << "João" << endl;
    arq1 << "Sofia" << endl;
    arq1.close();

    return 0;
}
