#include <iostream>
using namespace std;

struct paciente {
    string nome;
    int idade;
    string sintoma;
};

int main(){
    setlocale(LC_ALL, "Portuguese");
    string continuar;
    paciente informacoes;

    do{
        cout << "Qual o nome do paciente? ";
        cin >> informacoes.nome;
        cout << "Qual a idade do paciente? ";
        cin >> informacoes.idade;
        cout << "Qual o sintoma do paciente? ";
        cin >> informacoes.sintoma;


        cout << "Nome do paciente: " << informacoes.nome << endl;
        cout << "Idade do paciente: " << informacoes.idade << " anos." << endl;
        cout << "Sintoma do paciente: " << informacoes.sintoma << endl;

        cout << "Deseja continuar? S-SIM N-NÃO ";
        cin >> continuar;

    }  while(continuar=="s" || continuar=="S" );










}
