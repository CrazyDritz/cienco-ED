#include <iostream>

using namespace std;

int main() {
    int N;



   cout << "Digite o tamanho dos vetores: ";
    cin >> N;
    int A[N], B[N], Soma[N];


    cout << "Digite os " << N << " elementos do vetor A: ";
    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    cout << "Digite os " << N << " elementos do vetor B: ";
    for (int i = 0; i < N; i++) {
        cout << "B[" << i << "]: ";
        cin >> B[i];
    }

   for (int i = 0; i < N; i++) {
        Soma[i] = A[i] + B[i];
    }


    cout << "Vetor Soma: ";
    for (int i = 0; i < N; i++) {
        cout << "Soma[" << i << "]: " << Soma[i] << endl;
    }
    return 0;
}
