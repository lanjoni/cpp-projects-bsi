#include <cstdlib>
#include <iostream>
#include "cPilha.h"

using namespace std;

int main(int argc, char** argv) {
    cPilha obj;
    
    obj.cadastrar();
    obj.listar();
    //obj.consultar();
    obj.remover();
    obj.listar();
    
    return 0;
}

