#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <fstream>

#define TAMANHO 10

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetor[TAMANHO];
    bool troca;
    char elementoArquivo;
    int valor;
    int i = 0;

    ifstream leitura;

    leitura.open("arqDez.txt", ios::in);

    if(leitura.is_open()) {
        cout << "Arquivo aberto." << endl;
        while(!leitura.eof()) {
            cout << elementoArquivo;
            leitura >> vetor[i];
            i++;
            cout << elementoArquivo;
        }
    } else
        cout << "Erro ao abrir o arquivo." << endl;

    leitura.close();

    cout << "\nVETOR: " << endl;
    for(int j = 0; j < TAMANHO; j++) {
        cout << vetor[i] << ", ";
    }

    /*do {
        troca = false;
        if(vetor[i] > vetor[i + 1]) {
            vetor[i] = vetor[i + 1];
            troca = true;
        }

    } while(troca == true);*/
}
