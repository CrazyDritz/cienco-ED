#include <iostream>
using namespace std;

 /* 1. Escreva um programa em C++ que permita a leitura dos nomes de 10
pessoas e armaze os nomes lidos em um vetor. Após isto, o algoritmo
deve permitir a leitura de mais 1 nome qualquer de pessoa e depois
escrever a mensagem ACHEI, se o nome estiver entre os 10 nomes lidos
anteriormente (guardados no vetor), ou NÃO ACHEI caso contrário. */


int main()
{
    int num_pessoas = 10;
    string nomes[num_pessoas];
    string nome_procurado, Achei;

    cout << "Digite o nome de 10 pessoas: " << endl;

    for (int i = 0; i < num_pessoas; i++)
    {
        cout << "Nome " << (i + 1) << ": ";
        cin >> nomes[i];
    }

    cout << "Qual nome você está procurando?";
    cin >> nome_procurado;
    for (int i = 0; i < num_pessoas; i++)
    {
        if (nome_procurado == nomes[i])
        {
           Achei = "Achei o nome procurado.";
        }
        else{
             Achei = "Não achei o nome procurado.";
        }

    }
    cout << Achei;
    return 0;
}


