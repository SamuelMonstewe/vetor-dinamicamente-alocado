#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int TamanhoVetor;
    int Numero;
    int *Vetor;
    cout << "Digite um numero: " << endl;
    cin >> TamanhoVetor;
    Vetor = new int[TamanhoVetor];

    for(int i = 0; i < TamanhoVetor; i++)
    {
        cout << "Digite o " << i + 1 << ".o numero: " << endl;
        cin >> Numero;
        Vetor[i] = Numero;
    }

    cout << "Numeros digitados: " << endl;

    for(int i = 0; i < TamanhoVetor; i++)
    {  
        cout << Vetor[i] << endl;
    }

    delete[] Vetor;
}