#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numeros(10);

    // Leitura dos 10 números
    cout << "Digite 10 numeros inteiros:\n";
    for (int i = 0; i < 10; ++i) {
        cin >> numeros[i];
    }

    // Ordenar o vetor
    sort(numeros.begin(), numeros.end());

    // Encontrar o menor e maior número
    int menor = numeros[0];
    int maior = numeros[9];

    // Contar quantas vezes eles aparecem
    int contMenor = count(numeros.begin(), numeros.end(), menor);
    int contMaior = count(numeros.begin(), numeros.end(), maior);

    // Mostrar os resultados
    cout << "\nVetor ordenado: ";
    for (int n : numeros) {
        cout << n << " ";
    }

    cout << "\n\nMenor numero: " << menor << " (aparece " << contMenor << " vez(es))";
    cout << "\nMaior numero: " << maior << " (aparece " << contMaior << " vez(es))";

    return 0;
}
