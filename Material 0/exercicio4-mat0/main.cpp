#include <iostream>

using namespace std;

int main()
{
    float salario, novosalario;
    float reajuste;

    cout << "Digite o salário atual: ";
    cin >> salario;

    if (salario < 1000) {
        reajuste = 0.15;
    }
    else if (salario >= 1000 && salario <= 1500) {
        reajuste = 0.10;
    }

    else {
        reajuste = 0.05;
    }

    novosalario = salario * reajuste + salario;

    cout << "O novo salário do funcionário é: " << novosalario;

    return 0;
}
