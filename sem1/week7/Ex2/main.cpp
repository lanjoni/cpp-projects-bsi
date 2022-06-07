#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int qu(int n){
    return n * n;
}

int main() {
    int s1, s2, s3;

    cout << "Informe três números inteiros: ";
    cin >> s1 >> s2 >> s3;

    if (s1 > 0 && s2 > 0 && s3 > 0 &&
            ( qu(s1) + qu(s2) == qu(s3) ||
            qu(s2) + qu(s3) == qu(s1) ||
            qu(s3) + qu(s1) == qu(s2)
            )
    ){
        cout << " " << s1 << " " << s2 << " " << s3 << " podem formar um triângulo reto\n";
    } else {
        cout << " " << s1 << " " << s2 << " " << s3 << " não podem formar um triângulo reto\n";
    }

    return 0;
}
