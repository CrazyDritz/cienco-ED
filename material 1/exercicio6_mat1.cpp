#include <iostream>
#include <limits>

using namespace std;

int main() {
    const int MESES_ANO = 12;
    double temperaturas[MESES_ANO], soma = 0, mediaAnual;
    double menorTemp = numeric_limits<double>::max();
    double maiorTemp = numeric_limits<double>::lowest();
    int mesesAbaixoMedia = 0;


    cout << "Digite a temperatura m�dia de cada m�s:\n";
    for (int i = 0; i < MESES_ANO; i++) {
        cout << "M�s " << i + 1 << ": ";
        cin >> temperaturas[i];


        soma += temperaturas[i];
        if (temperaturas[i] < menorTemp) menorTemp = temperaturas[i];
        if (temperaturas[i] > maiorTemp) maiorTemp = temperaturas[i];
    }


    mediaAnual = soma / MESES_ANO;


    for (int i = 0; i < MESES_ANO; i++) {
        if (temperaturas[i] < mediaAnual) {
            mesesAbaixoMedia++;
        }
    }


    cout << "Menor temperatura do ano: " << menorTemp << "�C" << endl;
    cout << "Maior temperatura do ano: " << maiorTemp << "�C" << endl;
    cout << "Temperatura m�dia anual: " << mediaAnual << "�C" << endl;
    cout << "N�mero de meses com temperatura abaixo da m�dia anual: " << mesesAbaixoMedia << endl;

    return 0;
}
