#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

int main()
{
    int matriz[TAM][TAM], i, j;

    srand(time(NULL));

    for(i=0; i<TAM; i++)
        for(j=0; j<TAM; j++)
        {
            matriz[i][j]= rand()%100;
        }
    for(i=0; i<TAM; i++)
    {
        printf("\n");
        for(j=0; j<TAM; j++)
        {
            printf("%d ",matriz[i][j]);
        }
    }
   printf("\n");

   for(i=0; i<TAM; i++)
    {
        printf("\n");
        for(j=0; j<TAM; j++)
        {
            printf("%d ",matriz[j][i]);
        }
    }

    return 0;
}
