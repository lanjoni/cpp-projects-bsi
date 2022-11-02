#include "cPilha.h"
#include <iostream>

using namespace std;

cPilha::cPilha() {
}

cPilha::cPilha(const cPilha& orig) {
}

cPilha::~cPilha() {
}

// -> Fatorial
void cPilha::fatorialPrincipal(){
    int n = 0;
    
    cout << "Informe o numero que deseja calcular o fatorial: ";
    cin >> n;
    
    cout << "O fatorial de " << n << " é igual a: " << calcularFatorial(n);
}

int cPilha::calcularFatorial(int n){
    if (n > 1){
        return n * (calcularFatorial(n -1));
    } else {
        return 1;
    }
}

// -> Tabuada
void cPilha::tabuadaPrincipal(){
    int n, i;
    
    cout << "Informe o numero da tabuada que deseja calcular: ";
    cin >> n;
    
    cout << "A tabuada de " << n << ":" << endl << calcularTabuada(n, 10);
}

int cPilha::calcularTabuada(int n, int i){
    if (i < 0){
        return 1;
    } else {
        cout << n << " X " << i << " = " << n * i << endl;
        return calcularTabuada(n, i-1);
    }
}

// -> Fibonacci
int cPilha::calcularFibonacci(int n){ 
    if (n == 1 || n == 0){
        return n;
    } else {
        return calcularFibonacci(n - 1) + calcularFibonacci(n - 2);
    }
}

void cPilha::fibonacciPrincipal(){
    int n;
    
    cout << "Informe qual a posicao do termo que deseja calcular: ";
    cin >> n;
    
    cout << "Fibonacci: " << endl << calcularFibonacci(n);
}

// -> Pilha
void cPilha::cadastrar(){
    int digitado;
    char opc = 'S';
    NO *aux;
    
    while (toupper(opc) != 'N'){
        if (toupper(opc) != 'S'){
            cout << "Opção inválida! Tente novamente..." << endl << endl;
        } else {
            aux = (NO*) malloc(sizeof(aux));
            
            cout << "Informe o valor do elemento: ";
            cin >> digitado;

            aux -> elemento = digitado;
            aux -> ant = topo;

            topo = aux;
        }
        
        cout << "Deseja continuar? (S ou N): ";
        cin >> opc;
    }
}

void cPilha::listaRecursiva(NO *topo){    
    if (topo != NULL){
        cout << topo -> elemento << endl;
        this->listaRecursiva(topo -> ant);
    }
}

void cPilha::listar(){
    NO *aux;
    
    cout << endl;
    
    /*for (aux = topo; aux != NULL; aux = aux -> ant){
        cout << "O elemento é: " << aux -> elemento << endl;
    }*/
    
    listaRecursiva(topo);
}

void cPilha::consultar(){
    NO *aux;
    int numero;
    
    cout << endl;
    cout << "Informe o número que deseja buscar: ";
    cin >> numero;
    
    for (aux = topo; aux != NULL; aux = aux -> ant){
        if (aux->elemento == numero) {
            cout << "Número encontrado!" << endl;
            cout << "Posição: " << &aux->elemento;
        }
    }
}

void cPilha::remover(){
    NO *aux = topo;
    topo = topo -> ant;
    free(aux);
}