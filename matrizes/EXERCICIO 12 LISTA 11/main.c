#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 10
#define C 10

void preenche_matriz(int matriz[L][C], int linhas, int colunas);
int acha_maior(int matriz[L][C], int linhas, int colunas, int *linha_maior);
int acha_minimax(int vetor[], int colunas, int *col_minimax);
void imprime_matriz(int matriz[L][C], int linhas, int colunas);

int main(void)
{
    int maior, minimax, lin_minimax, col_minimax, matriz[L][C], col = C, lin = L;
    srand(time(NULL));

    preenche_matriz(matriz, lin, col);

    maior = acha_maior(matriz, lin, col, &lin_minimax);
    minimax = acha_minimax(matriz[lin_minimax], col, &col_minimax);

    imprime_matriz(matriz, lin, col);

    printf("O maior elemento é: %d, o elemento minimax eh %d e ele se encontra na posicao: %d;%d\n",
           maior, minimax, lin_minimax, col_minimax);

    return 0;
}

void preenche_matriz(int matriz[L][C], int linhas, int colunas)
{
    int i,j;
    for (i = 0; i < linhas; i++)
        for (j = 0; j < colunas; j++)
            matriz[i][j] = rand() % 101;
}

int acha_maior(int matriz[L][C], int linhas, int colunas, int *linha_maior)
{
    int maior = 0,i,j;

    for (i = 0; i < linhas; i++)
        for (j = 0; j < colunas; j++)
            if (matriz[i][j] > maior)
                maior = matriz[i][j],
                *linha_maior = i;

    return maior;
}

int acha_minimax(int vetor[], int colunas, int *col_minimax)
{
    int minimax,i;

    for (i = 0; i < colunas; i++)
    {
        if (i == 0 || minimax > vetor[i])
            minimax = vetor[i],
            *col_minimax = i;
    }

    return minimax;
}

void imprime_matriz(int matriz[L][C], int linhas, int colunas)
{
    int i,j;
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            printf("%3d ", matriz[i][j]);

        printf("\n");
    }
}
