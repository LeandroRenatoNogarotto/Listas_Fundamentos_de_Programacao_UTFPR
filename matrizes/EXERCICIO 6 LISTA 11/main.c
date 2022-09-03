#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

void cria_cartela(int matriz[TAM][TAM], int lin, int col);
int ja_esta_na_cartela(int matriz[TAM][TAM], int lin, int col, int elemento);
void imprime_cartela(int matriz[TAM][TAM], int lin, int col);

int main()
{
    int cartela[TAM][TAM];
    srand(time(NULL));
    cria_cartela(cartela, TAM, TAM);
    printf("Cartela gerada:\n");
    imprime_cartela(cartela, TAM, TAM);
    return 0;
}

void cria_cartela(int matriz[TAM][TAM], int lin, int col)
{
    int n_gerado,i,j;
    for (i = 0; i < lin; i++)
        for (j = 0; j < col; j++)
        {
            n_gerado = rand() % 100;
            while (ja_esta_na_cartela(matriz, i, col, n_gerado))
                n_gerado = rand() % 100;
            matriz[i][j] = n_gerado;
        }
}

int ja_esta_na_cartela(int matriz[TAM][TAM], int lin_atual, int col, int elemento)
{
    int i,j;
    for (i = 0; i <= lin_atual; i++)
        for (j = 0; j < col; j++)
            if (matriz[i][j] == elemento)
                return 1;
    return 0;
}

void imprime_cartela(int matriz[TAM][TAM], int lin, int col)
{
    int i,j;
    for (i = 0; i < lin; i++)
    {
        for (j = 0; j < col; j++)
            printf("%3d ", matriz[i][j]);
        printf("\n");
    }
}
