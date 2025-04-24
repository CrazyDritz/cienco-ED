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
 cout << "Bem vindo à biblioteca" << endl;

 do {

 cout << "Qual o titulo do livro? ";
 getline(cin, info.titulo);
 cout << "Quem é o autor do livro? ";
 getline(cin, info.autor);
 cout << "Qual o ano de publicação? ";
 cin >> info.ano;

 cout << "Título: " << info.titulo << endl;
 cout << "Autor: " << info.autor << endl;
 cout << "Ano de publicação: " << info.ano << endl;

 cout << "Digite c++ para sair. ";
 cin >> continuar;
 cin.ignore();

 } while (continuar != "c++");

}
