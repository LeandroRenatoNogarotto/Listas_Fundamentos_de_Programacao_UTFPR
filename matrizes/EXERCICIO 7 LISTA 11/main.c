#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int gera_menu(void);
int gera_matrizes(int matriz1[TAM][TAM], int matriz2[TAM][TAM], int lin, int col);
void imprime_matrizes(int matriz1[TAM][TAM], int matriz2[TAM][TAM], int lin, int col, int matrizes_geradas);
void imprime_matriz(int matriz[TAM][TAM], int linhas, int colunas);
void soma_matrizes(int matriz1[TAM][TAM], int matriz2[TAM][TAM], int lin, int col, int matrizes_geradas);
void subtrai_matrizes(int matriz1[TAM][TAM], int matriz2[TAM][TAM], int lin, int col, int matrizes_geradas);
void multiplica_matriz(int matriz[TAM][TAM], int lin, int col, int matrizes_geradas);

int main(void)
{
    int opcao, matriz1[TAM][TAM], matriz2[TAM][TAM], matrizes_ja_geradas = 0, tamanho = TAM;
    srand(time(NULL));

    do
    {
        opcao = gera_menu();

        switch (opcao)
        {
            case 0:
                matrizes_ja_geradas = gera_matrizes(matriz1, matriz2, tamanho, tamanho);
                break;

            case 1:
                imprime_matrizes(matriz1, matriz2, tamanho, tamanho, matrizes_ja_geradas);
                break;

            case 2:
                soma_matrizes(matriz1, matriz2, tamanho, tamanho, matrizes_ja_geradas);
                break;

            case 3:
                subtrai_matrizes(matriz1, matriz2, tamanho, tamanho, matrizes_ja_geradas);
                break;

            case 4:
                multiplica_matriz(matriz1, tamanho, tamanho, matrizes_ja_geradas);
                break;

            case 5:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opcao invalida!!\n");
        }

    } while (opcao != 5);
    return 0;
}

int gera_menu(void)
{
    int opcao;

    printf("O que voce deseja fazer?\n");
    printf("(0) Gerar novas matrizes 10 x 10\n");
    printf("(1) Imprimir as matrizes\n");
    printf("(2) Somar as matrizes\n");
    printf("(3) Subtrair as matrizes\n");
    printf("(4) Multiplicar a primeira matriz por uma constante\n");
    printf("(5) Sair do programa\n");
    scanf("%d", &opcao);

    return opcao;
}

int gera_matrizes(int matriz1[TAM][TAM], int matriz2[TAM][TAM], int lin, int col)
{
    int i,j;
    for (i = 0; i < lin; i++)
        for (j = 0; j < col; j++)
            matriz1[i][j] = rand() % 10,
            matriz2[i][j] = rand() % 10;

    return 1;
}

void imprime_matrizes(int matriz1[TAM][TAM], int matriz2[TAM][TAM], int lin, int col, int matrizes_geradas)
{
    if (matrizes_geradas)
    {
        printf("Matriz 1:\n");
        imprime_matriz(matriz1, lin, col);
        printf("Matriz 2:\n");
        imprime_matriz(matriz2, lin, col);
    }
    else
        printf("Matrizes ainda nao foram geradas!\n");
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

void soma_matrizes(int matriz1[TAM][TAM], int matriz2[TAM][TAM], int lin, int col, int matrizes_geradas)
{
    int matriz_aux[TAM][TAM],i,j;
    if (matrizes_geradas)
    {
        for (i = 0; i < lin; i++)
            for (j = 0; j < col; j++)
                matriz_aux[i][j] = matriz1[i][j] + matriz2[i][j];

        printf("Matriz resultante:\n");
        imprime_matriz(matriz_aux, lin, col);
    }
    else
        printf("Matrizes ainda nao foram geradas!\n");
}

void subtrai_matrizes(int matriz1[TAM][TAM], int matriz2[TAM][TAM], int lin, int col, int matrizes_geradas)
{
    int matriz_aux[TAM][TAM],i,j;

    if (matrizes_geradas)
    {
        for (i = 0; i < lin; i++)
            for (j = 0; j < col; j++)
                matriz_aux[i][j] = matriz2[i][j] - matriz1[i][j];

        printf("Matriz resultante:\n");
        imprime_matriz(matriz_aux, lin, col);
    }
    else
        printf("Matrizes ainda nao foram geradas!\n");
}

void multiplica_matriz(int matriz[TAM][TAM], int lin, int col, int matrizes_geradas)
{
    int constante, matriz_aux[TAM][TAM],i,j;

    if (matrizes_geradas)
    {
        printf("Forneca a constante desejada: ");
        scanf("%d", &constante);

        for (i = 0; i < lin; i++)
            for (j = 0; j < col; j++)
                matriz_aux[i][j] = matriz[i][j] * constante;

        printf("Matriz resultante:\n");
        imprime_matriz(matriz_aux, lin, col);
    }
    else
        printf("Matrizes ainda nao foram geradas!\n");
}
