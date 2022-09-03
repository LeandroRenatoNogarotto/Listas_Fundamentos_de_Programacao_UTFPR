#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main()
{

    int matriz[TAM][TAM], i, j, maior=0, linha=0, coluna=0, menor=999;
    srand(time(NULL));

    for (i=0; i<TAM; i++)
    {
        printf("\n");
        for (j=0; j<TAM; j++)
        {
            matriz[i][j]=rand()%100;
            printf("%d ", matriz[i][j]);
            if (matriz[i][j]>maior)
            {
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }
    for (i=0; i<TAM; i++)
    {
        if (matriz[linha][i]<menor)
        {
            menor = matriz[linha][i];
            coluna = i;
        }
    }
    printf("linha: %d \n coluna: %d \n minimax: %d \n maior: %d \n", linha, coluna, menor, maior);
    return 0;
}
