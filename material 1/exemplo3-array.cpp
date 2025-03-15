#include <iostream>

using namespace std;

int main()
{
    char nome[] = "adriano";
    int i = 0;

    while(nome[i] != '\0')
    {
        cout << nome[i];
        i++;
    }
    return 0;
}
