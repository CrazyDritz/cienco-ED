#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<string> fila; // Fila para gerenciar os clientes
    int opcao;
    string nome;

    do {
        cout << "\n=== Sistema de Atendimento ===\n";
        cout << "1 - Inserir cliente na fila\n";
        cout << "2 - Atender proximo cliente\n";
        cout << "3 - Exibir fila de espera\n";
        cout << "4 - Encerrar\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cin.ignore(); // Limpar buffer do teclado após entrada numérica

        switch (opcao) {
            case 1:
                cout << "Digite o nome do cliente: ";
                getline(cin, nome);
                fila.push(nome);
                cout << "Cliente \"" << nome << "\" adicionado na fila.\n";
                break;

            case 2:
                if (!fila.empty()) {
                    cout << "Atendendo cliente: " << fila.front() << endl;
                    fila.pop();
                } else {
                    cout << "Nao ha clientes na fila para atender.\n";
                }
                break;

            case 3:
                if (!fila.empty()) {
                    cout << "Clientes na fila de espera:\n";
                    queue<string> temp = fila;
                    while (!temp.empty()) {
                        cout << "- " << temp.front() << endl;
                        temp.pop();
                    }
                } else {
                    cout << "A fila esta vazia.\n";
                }
                break;

            case 4:
                cout << "Encerrando o programa...\n";
                break;

            default:
                cout << "Opcao invalida! Tente novamente.\n";
        }

    } while (opcao != 4);

    return 0;
}
