#include "prova.h"
#include <iostream>

using namespace std;

prova::prova() {
}

prova::prova(const prova& orig) {
}

prova::~prova() {
}

float prova::mat1(float x, float y){
    return (x + y * y);
}

float prova::mat2(float x, float y){
    return (x - y/3);
}

void prova::leitura(){
    cin >> this->x;
    cin >> this->y;
}