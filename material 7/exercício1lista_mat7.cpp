#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> numeros;
    int valor;

    // Solicita 5 números ao usuário
    cout << "Digite 5 numeros inteiros:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Numero " << i + 1 << ": ";
        cin >> valor;
        numeros.push_back(valor); // insere no final da lista
    }

    // Exibe os números na ordem de inserção
    cout << "\nOrdem de insercao: ";
    for (int num : numeros) {
        cout << num << " ";
    }

    // Exibe os números na ordem inversa
    cout << "\nOrdem inversa: ";
    for (auto it = numeros.rbegin(); it != numeros.rend(); ++it) {
        cout << *it << " ";
    }

    cout << endl;
    return 0;
}
