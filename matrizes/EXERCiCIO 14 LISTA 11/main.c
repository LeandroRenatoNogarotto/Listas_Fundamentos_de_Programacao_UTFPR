#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

void preenche_matriz(int matriz[TAM][TAM], int lin, int col);
void imprime_matriz(int matriz[TAM][TAM], int linhas, int colunas);
int checa_matriz(int matriz[TAM][TAM], int lin, int col);

int main(void)
{
    int tamanho, matriz[TAM][TAM], eh_permutacao;

    printf("Digite o tamanho da matriz: ");
    scanf("%d", &tamanho);

    preenche_matriz(matriz, tamanho, tamanho);
    printf("Matriz informada:\n");
    imprime_matriz(matriz, tamanho, tamanho);

    eh_permutacao = checa_matriz(matriz, tamanho, tamanho);

    printf("A matriz informada%s eh de permutacao\n", eh_permutacao ? "" : " nao");
    return 0;
}

void preenche_matriz(int matriz[TAM][TAM], int lin, int col)
{
    int i,j;
    for (i = 0; i < lin; i++)
        for (j = 0; j < col; j++)
        {
            printf("Digite o valor (0 ou 1) da posicao %d %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }

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

int checa_matriz(int matriz[TAM][TAM], int lin, int col)
{
    int count = 0;
    int i,j;
    for (i = 0; i < lin; i++)
    {
        for (j = 0; j < col; j++)
            if (matriz[i][j] == 1)
                count++;

        if (count != 1)
            return 0;

        count = 0;
    }

    return 1;
}
