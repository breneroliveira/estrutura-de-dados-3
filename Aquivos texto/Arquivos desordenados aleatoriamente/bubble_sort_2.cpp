#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <fstream>
#include <chrono>
#include <vector>

using namespace std;

void bubbleSortV2(vector<int>&array);

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nomeArquivo[50];
    char extencaoArquivo[10];
    vector<int>array;
    int numero;

    cout << "Nome do arquivo: ";
    cin.getline(nomeArquivo, sizeof(nomeArquivo));
    fflush(stdin);

    strcpy(extencaoArquivo, ".txt");

    string concatenado = strcat(nomeArquivo, extencaoArquivo);

    ifstream leitura;
    leitura.open(concatenado, ios::in);

    //int aux;

    // Abre o arquivo e passa para o final do vetor.
    if(leitura.is_open()) {
        leitura >> numero;

        while(leitura.good()) {
            array.push_back(numero);
            leitura >> numero;
        }
    } else
        cout << "\nErro ao abrir o arquivo." << endl;

    auto start = std::chrono::high_resolution_clock::now();

    //bool troca;

    // Ordenacao.
    /*do {
        troca = false;
        for(int i = 0; i < array.size(); i++) {
            if(array[i] > array[i + 1]) {
                aux = array[i];
                array[i] = array[i + 1];
                array[i + 1] = aux;
                troca = true;
            }
        }
    } while(troca == true);*/

    bubbleSortV2(array);

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> float_ms = end - start;

    cout << "\nVetor: ";
    for(int i = 0; i < array.size(); i++){
        cout << array[i] << " ";
    }

    cout << "\n\nTempo de execucao: " << float_ms.count() << " millisegundos." << endl;
}

void bubbleSortV2(vector<int>&array) {
    int aux;
    bool troca;

    do {
        troca = false;
        for(int i = 0; i < array.size(); i++) {
            if(array[i] > array[i + 1]) {
                aux = array[i];
                array[i] = array[i + 1];
                array[i + 1] = aux;
                troca = true;
            }
        }
    } while(troca == true);
}