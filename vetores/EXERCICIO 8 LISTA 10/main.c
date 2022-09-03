#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define MIN 1
#define MAX 10

void preenche_vetor(int vetor[], int tamanho, int lim_min, int lim_max);
void imprime_vetor(int vetor[], int tamanho);
float media_pares(int vetor[], int tamanho, int *max, int *min);

int main(void)
{
    int vetor[TAM], max = 0, min = 0;
    float media;
    srand(time(NULL));

    preenche_vetor(vetor, TAM, MIN, MAX);

    printf("Vetor trabalhado: ");
    imprime_vetor(vetor, TAM);
    printf("\n");
    media = media_pares(vetor, TAM, &max, &min);
    printf("Media elementos pares: %f \n maior numero: %d \n menor numero: %d\n", media, max, min);

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

float media_pares(int vetor[], int tamanho, int *max, int *min)
{
    float soma = 0, qtd = 0;
    int i;
    for (i = 0; i < tamanho; i++)
    {
        if (vetor[i] % 2 == 0)
            soma += vetor[i], qtd++;

        if (*max < vetor[i])
            *max = vetor[i];

        if (*min > vetor[i] || i == 0)
            *min = vetor[i];
    }

    return soma / qtd;
}

