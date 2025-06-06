#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> pilha;
    int numero;

    cout << "Digite numeros inteiros positivos ou (digite 0 para finalizar):";

    // Leitura dos números
    do {
        cout << "Numero: ";
        cin >> numero;

        if (numero > 0) {
            pilha.push(numero);
        } else if (numero < 0) {
            cout << "Numero invalido! Digite apenas numeros positivos ou 0 para sair.";
        }
    } while (numero != 0);

    // Impressão na ordem inversa
    cout << "\nNumeros na ordem inversa:\n";
    while (!pilha.empty()) {
        cout << pilha.top() << " ";
        pilha.pop();
    }
    cout << endl;

    return 0;
}
