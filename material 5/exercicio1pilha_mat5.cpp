#include<iostream>
#include<stack>

using namespace std;

int main(){
 stack<int> pilha;
    int opcao;

    do {
        cout<< "Escolha uma opção:" << endl;
        cout << "1. Inserir elemento na pilha" << endl;
        cout << "2. Remover elemento do topo da pilha" << endl;
        cout << "3. Verificar elemento do topo da pilha" << endl;
        cout << "4. Verificar se a pilha está vazia" << endl;
        cout << "5. Exibir o tamanho da pilha" << endl;
        cout << "0. Sair" << endl;
        cin >> opcao;

        switch(opcao) {
            case 1: {
                int valor;
                cout << "Digite o valor a ser inserido: ";
                cin >> valor;
                pilha.push(valor);
                cout << "Valor inserido na pilha.";
                break;
            }
            case 2: {
                if (!pilha.empty()) {
                    cout << "Elemento " << pilha.top() << " removido do topo.";
                    pilha.pop();
                } else {
                    cout << "A pilha esta vazia. Nao ha elementos para remover.";
                }
                break;
            }
            case 3: {
                if (!pilha.empty()) {
                    cout << "Elemento no topo: " << pilha.top() << endl;
                } else {
                    cout << "A pilha esta vazia.";
                }
                break;
            }
            case 4: {
                if (pilha.empty()) {
                    cout << "A pilha esta vazia.";
                } else {
                    cout << "A pilha NAO esta vazia.";
                }
                break;
            }
            case 5: {
                cout << "Tamanho da pilha: " << pilha.size() << endl;
                break;
            }
            case 0: {
                cout << "Saindo...";
                break;
            }
            default: {
                cout << "Opcao invalida. Tente novamente.";
            }
        }
    } while (opcao != 0);

    return 0;
}


