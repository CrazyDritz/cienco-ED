#include <iostream>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    list<string> funcionarios;
    int quantidade;

    cout << "Quantos funcionarios deseja cadastrar? ";
    cin >> quantidade;

    // Verificar se a lista está vazia
    if (quantidade <= 0) {
        cout << "Lista vazia. Nenhum funcionario cadastrado.\n";
        return 0;
    }

    // Cadastro dos funcionários
    cin.ignore(); // Limpa o buffer
    for (int i = 0; i < quantidade; ++i) {
        string nome;
        cout << "Digite o nome do funcionario " << (i + 1) << ": ";
        getline(cin, nome);
        funcionarios.push_back(nome);
    }

    // Exibir lista na ordem de cadastro
    cout << "\nLista na ordem de cadastro:\n";
    for (const string& nome : funcionarios) {
        cout << nome << endl;
    }

    // Exibir lista ordenada
    funcionarios.sort(); // Ordena em ordem alfabética
    cout << "\nLista ordenada:\n";
    for (const string& nome : funcionarios) {
        cout << nome << endl;
    }

    // Exibir lista reversa
    cout << "\nLista em ordem reversa:\n";
    for (auto it = funcionarios.rbegin(); it != funcionarios.rend(); ++it) {
        cout << *it << endl;
    }

    // Exibir quantidade de funcionários
    cout << "\nTotal de funcionarios cadastrados: " << funcionarios.size() << endl;

    return 0;
}
