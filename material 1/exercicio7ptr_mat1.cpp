#include <iostream>

using namespace std;


int main() {

    setlocale(LC_ALL, "Portuguese");
    int vetor[10];

    cout << "Digite 10 valores inteiros para o vetor:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> *(vetor + i);
    }

    cout << "Vetor na ordem normal:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << *(vetor + i) << " ";
    }

    cout << endl << "Vetor na ordem inversa:" << endl;
    for (int i = 9; i >= 0; i--) {
        cout << *(vetor + i) << " ";
    }

    return 0;
}
