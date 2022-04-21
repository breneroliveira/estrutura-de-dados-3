#include <iostream>
#include <chrono>

using namespace std;

int fibonacci(int numero);
int tempoFinal();
int fib(int numero);

int main() {
    setlocale(LC_ALL, "Portuguese");

    // fib(n) = fib(n-1) + fib(n -2)

    int valor = 0;

    cout << "Informe um valor: ";
    cin >> valor;

    int tempoInicial = clock();
    cout << "\nResultado: " << fibonacci(valor) << endl;
    int tempoFinal = clock();

    int resultado = tempoFinal - tempoInicial;
    cout << "Tempo de execucao: " << resultado << endl;

    cout << "\nCom programacao dinamica: " << fib(valor) << endl;
}

int fibonacci(int numero) {
    if(numero == 1 || numero == 2) {
        return 1;
    } else {
        return fibonacci(numero - 1) + fibonacci(numero - 2);
    }
}

int tempoFinal() {
    return clock();
}

// Forma mais eficiente: propgramacao dinamica.
int fib(int numero) {
    int vetor[] = {0, 1, 1};

    for(int i = 2; i <= numero; i++) {
        vetor[i] = vetor[i - 1] + vetor[i - 2];
    }

    return vetor[numero];
}

// Forma iterativa
