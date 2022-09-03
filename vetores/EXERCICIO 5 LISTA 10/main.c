#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

void preenche_vetor(int vetor[], int tamanho, int lim_min, int lim_max);
void imprime_vetor(int vetor[], int tamanho);

int main(void)
{
    int min, max, vetor[TAM];
    srand(time(NULL));

    printf("Digite um numero limite maximo e minimo, separados por espacos, para preenchimento do vetor: ");
    scanf("%d %d", &min, &max);

    preenche_vetor(vetor, TAM, min, max);
    imprime_vetor(vetor, TAM);

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
