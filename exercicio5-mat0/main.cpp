#include <iostream>

using namespace std;

int main()
{
    float preco;
    int codigo;

    cout << "Informe o pre�o da entiqueta: ";
    cin >> preco;

    cout << "Informe o c�digo de entiqueta: ";
    cin >> codigo;

    switch (codigo)
{
    case 1:

        preco = preco + (preco * 0.10);
        cout << "O pre�o �: " << preco << endl;
        break;

    case 2:
       preco = preco + (preco * 0.05);
        cout << "O pre�o �: " << preco << endl;
        break;

     case 3:

       preco = preco + (preco / 2);
        cout << "O pre�o �: " << preco << endl;
        break;

     case 4:

       preco = preco + (preco * 0.10) / 3;
        cout << "O pre�o �: " << preco << endl;
        break;

}
}
