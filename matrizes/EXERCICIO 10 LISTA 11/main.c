#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

void preenche_matriz(int matriz[TAM][TAM], int linhas, int colunas);
void imprime_matriz(int matriz[TAM][TAM], int linhas, int colunas);
void imprime_transposta(int matriz[TAM][TAM], int linhas, int colunas);

int main(void)
{
    srand(time(NULL));
    int matriz[TAM][TAM], l, c;
    l = c = 5;
    preenche_matriz(matriz, l, c);
    printf("Matriz resultante: \n");
    imprime_matriz(matriz, l, c);
    printf("Matriz transposta: \n");
    imprime_transposta(matriz, l, c);
    return 0;
}

void preenche_matriz(int matriz[TAM][TAM], int linhas, int colunas)
{
    int i,j;
    for (i = 0; i < linhas; i++)
        for (j = 0; j < colunas; j++)
            matriz[i][j] = rand() % 101;
}

void imprime_matriz(int matriz[TAM][TAM], int linhas, int colunas)
{
    int i,j;
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            printf("%3d ", matriz[i][j]);
        printf("\n");
    }
}
void imprime_transposta(int matriz[TAM][TAM], int linhas, int colunas)
{
    int i,j;
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            printf("%3d ", matriz[j][i]);
        printf("\n");
    }
}
