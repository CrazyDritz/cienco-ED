#include <iostream>

using namespace std;

int var = 0;

void passagemPorReferencia(int* n){ // *n aponta para o endereço de pvar
	*n = 100;
}

int main()
{
	var = 50;

	int *pvar;
	pvar = &var;

	passagemPorReferencia(pvar);

	cout << var << endl;
	return 0;
}
