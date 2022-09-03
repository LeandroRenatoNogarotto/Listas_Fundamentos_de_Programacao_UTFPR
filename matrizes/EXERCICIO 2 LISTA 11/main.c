#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void constroi_triangulo(int triangulo[TAM][TAM], int tamanho);
void imprime_triangulo(int triangulo[TAM][TAM], int tamanho);

int main()
{
    int triangulo_pascal[TAM][TAM];
    constroi_triangulo(triangulo_pascal,TAM);
    imprime_triangulo(triangulo_pascal,TAM);
    return 0;
}

void constroi_triangulo(int triangulo[TAM][TAM], int tamanho)
{
    int i,j;
    for (i = 0; i < tamanho; i++)
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == j)
                triangulo[i][j] = 1;
            else
                triangulo[i][j] = triangulo[i - 1][j] + triangulo[i - 1][j - 1];
        }
}

void imprime_triangulo(int triangulo[TAM][TAM], int tamanho)
{
    printf("Triangulo de Pascal de tamanho %d:\n", tamanho);
    int i,j;
    for (i = 0; i < tamanho; i++)
    {
        for (j = 0; j <= i; j++)
            printf("%3d ", triangulo[i][j]);
        printf("\n");
    }
}
