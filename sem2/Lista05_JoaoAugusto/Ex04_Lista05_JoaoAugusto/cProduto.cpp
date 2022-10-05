#include "cProduto.h"
#include <iostream>

using namespace std;

cProduto::cProduto() {
}

cProduto::cProduto(const cProduto& orig) {
}

cProduto::~cProduto() {
}

void cProduto::principal(){
    int max;
    
    cout << "*** CADASTRO DE PRODUTOS ***" << endl << endl;
    cout << "Informe a quantidade máxima de produtos a serem cadastrados: ";
    cin >> max;
    
    PRODUTO produtos[max];
    
    for (int i = 0; i < max; i++){
        cout << endl;
        cout << "Informe o código do produto que deseja cadastrar: ";
        cin >> produtos[i].codigo;
        cout << "Informe o nome do produto que deseja cadastrar: ";
        cin >> produtos[i].nome;
        cout << "Informe o preço do produto que deseja cadastrar: ";
        cin >> produtos[i].preco;
        cout << endl;
    }
    
    cout << endl << "*** CADASTRO CONCLUÍDO ***" << endl;
    
    imprimir(produtos, max);
    organizar(produtos, max);
    
    cout << endl << "*******************************" << endl;
    cout << endl << "*** VERIFICAR PRODUTO POR CÓDIGO ***" << endl;
    
    buscar(produtos, max);
}

void cProduto::imprimir(PRODUTO produtos[], int max){
    cout << endl << "*** LISTA DE PRODUTOS CADASTRADOS *** " << endl;
    
    for (int i = 0; i < max; i++){
        cout << endl;
        cout << "CÓDIGO: " << produtos[i].codigo << endl;
        cout << "NOME: " << produtos[i].nome << endl;
        cout << "PREÇO: " << produtos[i].preco << endl;
        cout << endl;
    }
}

void cProduto::organizar(PRODUTO produtos[], int max){
    int i, j;
    bool troca = true;
    PRODUTO temp;
  
    for (i = max-1; i>= 1 && troca == true; i--){
        troca = false;
        for (j = 0; j < i; j++){
            if (produtos[j].codigo > produtos[j+1].codigo){
                temp = produtos[j];
                produtos[j] = produtos[j+1];
                produtos[j+1] = temp;
                troca = true;
            }
        }
    }
}

void cProduto::buscar(PRODUTO produtos[], int max){
    int cod;
    char opc;
    
    do {
        cout << "Deseja procurar algum produto pelo seu código? (S - SIM / N - NÃO): ";
        cin >> opc;
        
        opc = toupper(opc);
        
        if (opc == 'S'){
            cout << "Informe o código do produto que deseja buscar: ";
            cin >> cod;

            PRODUTO resultado = buscaBinaria(produtos, max, cod);
            
            if (resultado.codigo == -1){
                cout << endl << "PRODUTO NÃO ENCONTRADO!" << endl;
            } else {
                cout << endl << "PRODUTO ENCONTRADO: " << endl;
                cout << "CÓDIGO: " << resultado.codigo << endl;
                cout << "NOME: " << resultado.nome << endl;
                cout << "PREÇO: " << resultado.preco << endl;
                cout << endl;
            }
            
            buscar(produtos, max);
        } else if (opc != 'N'){
            cout << endl << "O termo digitado não foi reconhecido! Tente novamente..." << endl;
            buscar(produtos, max);
        }
    } while (opc != 'N');
}

PRODUTO cProduto::buscaBinaria(PRODUTO produtos[], int max, int cod){
    PRODUTO resultado;
        
    int inf, sup, meio;
    
    inf = 0;
    sup = max - 1;
    
    while (inf <= sup){
        meio = (inf + sup)/2;
        
        if (cod == produtos[meio].codigo){
            resultado = produtos[meio];
            
            return resultado;
        } else if (cod == produtos[meio].codigo) {
            sup = meio - 1;
        } else {
            inf = meio + 1;
        }
    }
    
    PRODUTO erro;
    
    erro.codigo = -1;
    return erro;
}