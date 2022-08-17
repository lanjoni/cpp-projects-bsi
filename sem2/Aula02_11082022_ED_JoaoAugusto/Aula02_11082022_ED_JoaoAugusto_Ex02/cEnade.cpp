#include "cEnade.h"
#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>
#include <iomanip>


using namespace std;

cEnade::cEnade() {
}

cEnade::cEnade(const cEnade& orig) {
}

cEnade::~cEnade() {
}

void cEnade::insert(){
    for (int i = 0; i < 10; i++){
        vetB[i] = 0;
        
        if (i % 2 == 0){
            vetA[i] = i;
        } else {
            vetA[i] = 2 * i;
        }
    }
    
    for (int i = 0; i < 10; i++){
        while(vetA[i] > i){
            vetB[i] = vetA[i];
            vetA[i] = vetA[i] - 1;
        }
    }
}

void cEnade::print(){
    cout << "VALORES DE vetA:" << endl;
    for (int i = 0; i < 10; i++){
        cout << vetA[i] << " ";
    }
    
    cout << endl;
    cout << endl;
    
    cout << "VALORES DE vetB:" << endl;
    for (int i = 0; i < 10; i++){
        cout << vetB[i] << " ";
    }
}
