#include <iostream>
using namespace std;

int main() {
    int numAluno, alunoMaisAlto = 0, alunoMaisBaixo = 0;
    int altura, maiorAltura = 0, menorAltura = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Digite o numero do aluno e sua altura (em cm): ";
        cin >> numAluno >> altura;

        if (i == 0) {
            maiorAltura = menorAltura = altura;
            alunoMaisAlto = alunoMaisBaixo = numAluno;
        }

        if (altura > maiorAltura) {
            maiorAltura = altura;
            alunoMaisAlto = numAluno;
        }

        if (altura < menorAltura) {
            menorAltura = altura;
            alunoMaisBaixo = numAluno;
        }
    }

    cout << "Aluno mais alto: " << alunoMaisAlto << " com " << maiorAltura << " cm\n";
    cout << "Aluno mais baixo: " << alunoMaisBaixo << " com " << menorAltura << " cm\n";

    return 0;
}
