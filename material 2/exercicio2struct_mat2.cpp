#include <iostream>
using namespace std;

struct livro{
string titulo;
string autor;
int ano;
};

int main(){
string continuar;
livro info;
 setlocale(LC_ALL, "Portuguese");
 cout << "Bem vindo � biblioteca" << endl;

 do {

 cout << "Qual o titulo do livro? ";
 getline(cin, info.titulo);
 cout << "Quem � o autor do livro? ";
 getline(cin, info.autor);
 cout << "Qual o ano de publica��o? ";
 cin >> info.ano;

 cout << "T�tulo: " << info.titulo << endl;
 cout << "Autor: " << info.autor << endl;
 cout << "Ano de publica��o: " << info.ano << endl;

 cout << "Digite c++ para sair. ";
 cin >> continuar;
 cin.ignore();

 } while (continuar != "c++");

}
