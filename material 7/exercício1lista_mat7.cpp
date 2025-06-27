#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> numeros;
    int valor;

    // Solicita 5 n�meros ao usu�rio
    cout << "Digite 5 numeros inteiros:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Numero " << i + 1 << ": ";
        cin >> valor;
        numeros.push_back(valor); // insere no final da lista
    }

    // Exibe os n�meros na ordem de inser��o
    cout << "\nOrdem de insercao: ";
    for (int num : numeros) {
        cout << num << " ";
    }

    // Exibe os n�meros na ordem inversa
    cout << "\nOrdem inversa: ";
    for (auto it = numeros.rbegin(); it != numeros.rend(); ++it) {
        cout << *it << " ";
    }

    cout << endl;
    return 0;
}
