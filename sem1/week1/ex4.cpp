// Faça um programa em C++ para calcular a área total de uma casa com (quarto, sala, cozinha e banheiro).

// Aluno: João Augusto Lissoni Lanjoni

#include <cstdlib>
#include <iostream>
#include <locale.h>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    
    float qcomp, qlarg, qarea, scomp, slarg, sarea, ccomp, clarg, carea, bcomp, blarg, barea, area; 
    
    cout << " ================== Calcular área! ================== " << endl;
    cout << " ================== Quarto! ================== " << endl;
    cout << "\nInforme o valor do comprimento do quarto: ";
    cin >> qcomp;
    cout << "\nInforme o valor da largura do quarto: ";
    cin >> qlarg;
    
    cout << "\n ================== Sala! ================== " << endl;
    cout << "\nInforme o valor do comprimento da sala: ";
    cin >> scomp;
    cout << "\nInforme o valor da largura da sala: ";
    cin >> slarg;
    
    cout << "\n ================== Cozinha! ================== " << endl;
    cout << "\nInforme o valor do comprimento da cozinha: ";
    cin >> ccomp;
    cout << "\nInforme o valor da largura da cozinha: ";
    cin >> clarg;
    
    cout << "\n ================== Banheiro! ================== " << endl;
    cout << "\nInforme o valor do comprimento do banheiro: ";
    cin >> bcomp;
    cout << "\nInforme o valor da largura do banheiro: ";
    cin >> blarg;
    
    qarea = qcomp * qlarg;
    sarea = scomp * slarg;
    carea = ccomp * clarg;
    barea = bcomp * blarg;
    
    area = qarea + sarea + carea + barea;

    cout << "\n ============================================= ";
    cout << "\nA área total é: " << area << endl;
    
    return 0;
}

