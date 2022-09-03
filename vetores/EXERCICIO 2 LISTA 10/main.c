#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

int main()
{
    int vetor[TAM], i, aux;
    srand ( time ( NULL ));
    for(i=0; i<TAM; i++)
    {
        vetor[i] = rand()%100+1;
    }

    for(i=0; i<TAM; i++)
    {
        printf("%d\n", vetor[i]);
    }

    printf("ola usuario digite qual posicao do vetor deseja retirar\n");
    scanf("%d", &aux);

    for(; aux<TAM; aux++)
    {
        vetor[aux]=vetor[aux+1];
    }

    for(i=0; i<TAM-1; i++)
    {
        printf("%d\n", vetor[i]);
    }
    return 0;
}
