#include <iostream>
using namespace std;

/* 2. Escreva um programa em C++ que permita a leitura das notas de uma
turma de 20 alunos. Calcular a m�dia da turma e contar quantos alunos
obtiveram nota acima desta m�dia calculada. Escrever a m�dia da turma
e o resultado da contagem. */

int main()
{
const int TOTAL_ALUNOS = 20;
    double notas[TOTAL_ALUNOS], soma = 0, media;
    int acimaMedia = 0;

    cout << "Digite as notas dos " << TOTAL_ALUNOS << " alunos:\n";
    for (int i = 0; i < TOTAL_ALUNOS; i++) {
        cout << "Nota do aluno " << i + 1 << ": ";
        cin >> notas[i];
        soma += notas[i];
    }

    media = soma / TOTAL_ALUNOS;

    for (int i = 0; i < TOTAL_ALUNOS; i++) {
        if (notas[i] > media) {
            acimaMedia++;
        }
    }


    cout << "M�dia da turma: " << media << endl;
    cout << "N�mero de alunos com nota acima da m�dia: " << acimaMedia << endl;

    return 0;
}
