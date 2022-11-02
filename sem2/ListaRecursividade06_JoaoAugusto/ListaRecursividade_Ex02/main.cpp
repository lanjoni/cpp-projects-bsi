#include <cstdlib>
#include "cConceitos.h"

using namespace std;

int main(int argc, char** argv) {
    cConceitos obj;
    
    // -> Pilha estática (vetor)
    obj.pilhaEstatica();
    
    // -> Pilha dinâmica (ponteiro)
    //obj.cadastrarPilhaDinamica();
    //obj.listarPilhaDinamica();
    
    // -> Fila estática (vetor)
    //obj.filaEstatica();
    
    // -> Fila dinâmica (ponteiro)
    //obj.cadastrarFilaDinamica();
    //obj.listarFilaDinamica();
    
    return 0;
}

