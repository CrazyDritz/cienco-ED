#include <iostream>

using namespace std;

int main() {
    const int TAM = 20;
    int numeros[TAM];


    cout << "Digite " << TAM << " n�meros: ";
    for (int i = 0; i < TAM; i++) {
        cout << "N�mero " << i + 1 << ": ";
        cin >> numeros[i];
    }


    cout << "N�meros na ordem inversa: ";
    for (int i = TAM - 1; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
