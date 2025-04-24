#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int idade, opiniao;
    int totalPessoas = 0, somaIdades = 0;
    int qtdOtimo = 0, qtdBom = 0, qtdRegular = 0, qtdRuim = 0;

    cout << "Pesquisa de opini�o sobre o filme.\n";
    cout << "Digite a idade e a opini�o (1=�timo, 2=Bom, 3=Regular, 4=Ruim).\n";
    cout << "Digite uma idade negativa para encerrar.\n";

    while (true) {
        cout << "Idade: ";
        cin >> idade;
        if (idade < 0) break;

        cout << "Opini�o: ";
        cin >> opiniao;

        if (opiniao < 1 || opiniao > 4) {
            cout << "Opini�o inv�lida! Tente novamente.\n";

        }

        totalPessoas++;
        somaIdades += idade;

        switch (opiniao) {
            case 1: qtdOtimo++; break;
            case 2: qtdBom++; break;
            case 3: qtdRegular++; break;
            case 4: qtdRuim++; break;
        }
    }

    cout << "Resultados da Pesquisa:";
    if (totalPessoas > 0) {
        cout << fixed << setprecision(2);
        double mediaIdade = static_cast<double>(somaIdades) / totalPessoas;
        cout << "Total de participantes: " << totalPessoas << "\n";
        cout << "M�dia de idade: " << mediaIdade << " anos\n";
        cout << "Percentual de �timo: " << (qtdOtimo * 100.0 / totalPessoas) << "%\n";
        cout << "Percentual de Bom: " << (qtdBom * 100.0 / totalPessoas) << "%\n";
        cout << "Percentual de Regular: " << (qtdRegular * 100.0 / totalPessoas) << "%\n";
        cout << "Percentual de Ruim: " << (qtdRuim * 100.0 / totalPessoas) << "%\n";
    } else {
        cout << "Nenhuma pessoa respondeu � pesquisa.\n";
    }

    return 0;
}
