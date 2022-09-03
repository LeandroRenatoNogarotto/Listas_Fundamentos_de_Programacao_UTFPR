#include <stdio.h>
#include <stdlib.h>

# define TAM 5

int main()
{
    int vetor[TAM], i, j;
    printf("digite os valores!\n");

    for(i=0; i<TAM; i++)
    {
        scanf("%d", &vetor[i]);
        for(j=0; j<i; j++)
        {
        if (vetor[i]==vetor[j])
        {
            printf("O valor ja foi inserido\n");S
            i--;
            break;
        }
        }
    }

    return 0;
}
