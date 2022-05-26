#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    string nome;

    cout << "Olá! Vamos conversar?" << endl;
    cout << "Qual é o seu nome?: ";
    getline(cin, nome);

    cout << "Nossa, " << nome << ", que nome feio!" << endl;

    return 0;
}
