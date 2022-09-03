#include <stdio.h>
#include <stdlib.h>

#define TAM 3

void preenche_matriz(int matriz[TAM][TAM], int lin, int col);
int eh_quadrado_magico(int matriz[TAM][TAM], int lin, int col);
void imprime_matriz(int matriz[TAM][TAM], int linhas, int colunas);

int main(void)
{
    int matriz[TAM][TAM], l, c, eh_magico;
    l = c = TAM;

    preenche_matriz(matriz, l, c);

    eh_magico = eh_quadrado_magico(matriz, l, c);
    printf("O quadrado informado%s eh magico\n", eh_magico ? "" : " nao");

    imprime_matriz(matriz, l, c);

    return 0;
}

void preenche_matriz(int matriz[TAM][TAM], int lin, int col)
{
    int i,j;
    for (i = 0; i < lin; i++)
        for (j = 0; j < col; j++)
        {
            printf("Digite o elemento da posicao %d %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
}

int eh_quadrado_magico(int matriz[TAM][TAM], int lin, int col)
{
    int soma_anterior, soma1 = 0, soma2 = 0,i,j;

    for (i = 0; i < lin; i++)
    {
        for (j = 0; j < col; j++)
            soma1 += matriz[i][j],
            soma2 += matriz[j][i];

        if (soma1 != soma2 || (soma_anterior != soma1 && i != 0))
            return 0;

        soma_anterior = soma1;
        soma1 = soma2 = 0;
    }


    for (i = 0, j = lin - 1; i < lin && j >= 0; i++, j--)
        soma1 += matriz[i][i],
        soma2 += matriz[j][j];

    if (soma1 != soma2 || soma_anterior != soma1)
        return 0;

    return 1;
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
