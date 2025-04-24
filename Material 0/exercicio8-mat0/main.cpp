#include <iostream>
using namespace std;

int main() {
    int voto;
    int totalVotos = 0, candidato1 = 0, candidato2 = 0, nulo = 0, branco = 0;

    cout << "Digite o codigo do voto (1,2=candidatos, 3=Nulo, 4=Branco, 0=Finaliza): ";
    cin >> voto;

    do {
       switch (voto) {
            case 1:
                candidato1++;
                totalVotos++;
                break;
            case 2:
                candidato2++;
                totalVotos++;
                break;
            case 3:
                nulo++;
                totalVotos++;
                break;
            case 4:
                branco++;
                totalVotos++;
                break;
            case 0:
                break;
            default:
                cout << "Codigo invalido. Digite novamente.";
        }
    } while (voto != 0);

    if (totalVotos > 0) {
        cout << "Percentual de votos para o candidato 1: " << (candidato1 * 100.0 / totalVotos);
        cout << "Percentual de votos para o candidato 2: " << (candidato2 * 100.0 / totalVotos);
        cout << "Percentual de votos nulos: " << (nulo * 100.0 / totalVotos);
        cout << "Percentual de votos em branco: " << (branco * 100.0 / totalVotos);
    } else {
        cout << "Nenhum voto foi registrado.";
    }

    return 0;
}
