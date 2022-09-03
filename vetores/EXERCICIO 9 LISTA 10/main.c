#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5
#define MIN 1
#define MAX 10

void preenche_vetor(int vetor[], int tamanho, int lim_min, int lim_max);
void imprime_vetor(int vetor[], int tamanho);
void intercala_valores(int v1[], int v2[], int v3[], int n);

int main(void)
{
    srand(time(NULL));

    int vetor1[TAM], vetor2[TAM], vetor3[TAM * 2];

    preenche_vetor(vetor1, TAM, MIN, MAX);
    preenche_vetor(vetor2, TAM, MIN, MAX);

    printf("Vetor 1: ");
    imprime_vetor(vetor1, TAM);
    printf("\n");

    printf("Vetor 2: ");
    imprime_vetor(vetor2, TAM);
    printf("\n");

    intercala_valores(vetor1, vetor2, vetor3, TAM);

    printf("Vetor resultante: ");
    imprime_vetor(vetor3, TAM * 2);
    printf("\n");

    return 0;
}

void preenche_vetor(int vetor[], int tamanho, int lim_min, int lim_max)
{
    int i;
    for (i = 0; i < tamanho; i++)
        vetor[i] = rand() % (lim_max - lim_min + 1) + lim_min;
}

void imprime_vetor(int vetor[], int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
        printf("%d,", vetor[i]);

}

void intercala_valores(int v1[], int v2[], int v3[], int n)
{
    int i, k,  j;
    for (i = 0, j = 0; i < n; i++)
        for (k = 0; k < 2; k++, j++)
            v3[j] = k % 2 == 0 ? v1[i] : v2[i];
}
