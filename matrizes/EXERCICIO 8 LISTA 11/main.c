#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3

void gera_matriz(int matriz[TAM][TAM], int lin, int col);
void imprime_matriz(int matriz[TAM][TAM], int linhas, int colunas);
void imprime_mult_matrizes(int matriz1[TAM][TAM], int matriz2[TAM][TAM], int lin, int col);
void multiplicacao_matrizes(int matriz1[TAM][TAM], int matriz2[TAM][TAM], int lin, int col, int matriz_res[TAM][TAM]);
void potencia_matriz(int matriz[TAM][TAM], int potencia, int lin, int col);
void copia_matriz(int matriz_o[TAM][TAM], int matriz_c[TAM][TAM], int lin, int col);

int main(void)
{
    int matrizA[TAM][TAM], matrizB[TAM][TAM], potencia;
    srand(time(NULL));

    gera_matriz(matrizA, TAM,TAM);
    printf("Matriz A:\n");
    imprime_matriz(matrizA, TAM, TAM);

    gera_matriz(matrizB,TAM, TAM);
    printf("Matriz B:\n");
    imprime_matriz(matrizB, TAM, TAM);

    imprime_mult_matrizes(matrizA, matrizB, TAM, TAM);

    potencia_matriz(matrizA, 2, TAM, TAM);

    printf("A qual potência você deseja elevar A? ");
    scanf("%d", &potencia);
    potencia_matriz(matrizA, potencia, TAM, TAM);

    return 0;

}

void gera_matriz(int matriz[TAM][TAM], int lin, int col)
{
    int i,j;
    for (i = 0; i < lin; i++)
        for (j = 0; j < col; j++)
            matriz[i][j] = rand() % 10;
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

void imprime_mult_matrizes(int matriz1[TAM][TAM], int matriz2[TAM][TAM], int lin, int col)
{
    int matriz_aux[TAM][TAM];

    multiplicacao_matrizes(matriz1, matriz2, lin, col, matriz_aux);

    printf("Multiplicacao A * B:\n");
    imprime_matriz(matriz_aux, lin, col);
}

void multiplicacao_matrizes(int matriz1[TAM][TAM], int matriz2[TAM][TAM], int lin, int col, int matriz_res[TAM][TAM])
{
    int soma = 0,i,j,k;

    for (i = 0; i < lin; i++)
    {
        for (j = 0; j < col; j++)
        {
            for (k = 0; k < col; k++)
                soma += matriz1[i][k] * matriz2[k][j];

            matriz_res[i][j] = soma;
            soma = 0;
        }
    }
}

void potencia_matriz(int matriz[TAM][TAM], int potencia, int lin, int col)
{
    int matriz_aux[TAM][TAM], matriz_res[TAM][TAM],i;
    copia_matriz(matriz, matriz_aux, lin, col);

    for (i = 1; i < potencia; i++)
    {
        multiplicacao_matrizes(matriz, matriz_aux, lin, col, matriz_res);

        copia_matriz(matriz_res, matriz_aux, lin, col);
    }

    printf("Matriz A^%d:\n", potencia);
    imprime_matriz(matriz_res, lin, col);
}

void copia_matriz(int matriz_o[TAM][TAM], int matriz_c[TAM][TAM], int lin, int col)
{
    int i,j;
    for (i = 0; i < lin; i++)
        for (j = 0; j < col; j++)
            matriz_c[i][j] = matriz_o[i][j];
}
