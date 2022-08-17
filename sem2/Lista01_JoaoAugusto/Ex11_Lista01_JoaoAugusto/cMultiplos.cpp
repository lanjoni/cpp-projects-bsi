#include "cMultiplos.h"
#include <iostream>
#include <cmath>

using namespace std;

cMultiplos::cMultiplos() {
}

cMultiplos::cMultiplos(const cMultiplos& orig) {
}

cMultiplos::~cMultiplos() {
}

void cMultiplos::insert(){
   cout << "Informe o valor de a: ";
   cin >> a;
   cout << "Informe o valor de b: ";
   cin >> b;
}

void cMultiplos::print(){
    bool test = false;
    
    if (a % b == 0){
        test = true;
    } else if (b % a == 0){
        test = true;
    }
    
    if (test == true){
        cout << endl << "São múltiplos!" << endl;
    } else {
        cout << endl << "Não são múltiplos!" << endl;
    }
}

