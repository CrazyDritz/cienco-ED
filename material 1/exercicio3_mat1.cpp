#include <iostream>

using namespace std;

int main() {
    const int TAM = 10;
    int A[TAM], M[TAM], X;


    cout << "Digite " << TAM << " números para o vetor A:\n";
    for (int i = 0; i < TAM; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

   cout << "Digite um número X: ";
    cin >> X;


    for (int i = 0; i < TAM; i++) {
        M[i] = A[i] * X;
    }

   cout << "Vetor M (A * X):\n";
    for (int i = 0; i < TAM; i++) {
        cout << "M[" << i << "]: " << M[i] << endl;
    }

    return 0;
}
