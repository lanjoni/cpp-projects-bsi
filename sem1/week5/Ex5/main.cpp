#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char texto[] = "Este exemplo de texto.";
    char *ptr;

    cout << "Procurando por 's' no texto: " << texto << endl << endl;
    ptr = strchr(texto, 's'); // strrchr - Mostra a última vez que apareceu.

    if (*ptr){
        cout << "A letra 's' apareceu a primeira vez na posição: " << ptr-texto+1;
    } else {
        cout << "A letra 's' não foi encontrada no texto...";
    }

    return 0;
}
