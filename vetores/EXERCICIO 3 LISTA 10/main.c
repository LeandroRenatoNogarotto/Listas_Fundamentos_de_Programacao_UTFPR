#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

int main()
{
    int vetor[TAM],vetor1[TAM], i;
    srand ( time ( NULL ));
    for(i=0; i<TAM; i++)
    {
        vetor[i] = rand()%100+1;
        vetor1[i] = rand()%97+4;
    }

    for(i=0; i<TAM; i++)
    {
        printf("%d\n", vetor[i]);
    }
    printf("\n");
    for(i=0; i<TAM; i++)
    {
        printf("%d\n", vetor1[i]);
    }
    printf("\n");
    for(i=0; i<TAM; i++)
    {
        printf("%d\n", (vetor1[(TAM-1)-i]+vetor[i]));
    }

    return 0;
}
