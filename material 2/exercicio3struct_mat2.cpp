#include <iostream>
#include <string>

using namespace std;

struct AvaliacaoFilme {
    string nomeFilme;
    float enredo;
    float atuacao;
    float efeitosEspeciais;
    float media;
};

int main() {
    char continuar;

    do {
        AvaliacaoFilme filme;

        cout << "Digite o nome do filme: ";
        getline(cin, filme.nomeFilme);

        cout << "Avalie o enredo (0 a 10): ";
        cin >> filme.enredo;

        cout << "Avalie a atuação (0 a 10): ";
        cin >> filme.atuacao;

        cout << "Avalie os efeitos especiais (0 a 10): ";
        cin >> filme.efeitosEspeciais;


        filme.media = (filme.enredo + filme.atuacao + filme.efeitosEspeciais) / 3.0f;


        cout << "\nFilme: " << filme.nomeFilme << endl;
        cout << "Média da avaliação: " << filme.media << "\n\n";

        cout << "Deseja avaliar outro filme? (s/n): ";
        cin >> continuar;
        cin.ignore();

        cout << "\n";

    } while (continuar == 's' || continuar == 'S');

    cout << "Programa encerrado. Obrigado por suas avaliações!" << endl;

    return 0;
}
