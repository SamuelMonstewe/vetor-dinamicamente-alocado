#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Numero;
    int TamanhoVetor;
    int *Vetor;

    printf("Digite um numero: ");
    scanf("%d", &TamanhoVetor);
    Vetor = (int *)malloc(TamanhoVetor * sizeof(int));

    for(int i = 0; i < TamanhoVetor; i++)
    {
        printf("Digite o %d.o numero: ", i+1);
        scanf("%d", &Numero);
        Vetor[i] = Numero;
    }

    printf("Numero fornecidos: \n");

    for(int i = 0; i < TamanhoVetor; i++)
    {
        printf("%d", Vetor[i]);
        printf("\t");
    }
    return 0;
}
