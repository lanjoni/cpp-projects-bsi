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
    int I = 0, J = 0, C = 0;
    
    C = 0;
    
    for (I = 0; I < 3; I++){
        for (J = 0; J < 4; J++){
            C++;
            this->M[I][J] = C;
        }
    }
    
    for (I = 0; I < 3; I++){
        for (J = 0; J < 4; J++){
            C = M[2-I][3-J];
            M[I][J] = C;
        }
    }
}

void cEnade::print(){
    for (int I = 0; I < 3; I++){
        for (int J = 0; J < 4; J++){
            cout << " " << this->M[I][J];
        }
        cout << endl;
    }
}
