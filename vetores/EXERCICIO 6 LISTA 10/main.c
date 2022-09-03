#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

void preenche_vetor(int vetor[], int tamanho, int lim_min, int lim_max);
void imprime_vetor(int vetor[], int tamanho);
void imprime_vetor_inverso(int vetor[], int tamanho);

int main(void)
{
    int vetor[TAM];
    srand(time(NULL));

    preenche_vetor(vetor, TAM, 1, 20);

    printf("Order normal: ");
    imprime_vetor(vetor, TAM);

    printf("Ordem inversa: ");
    imprime_vetor_inverso(vetor, TAM);

    return 0;
}

void preenche_vetor(int vetor[], int tamanho, int lim_min, int lim_max)
{   int i;
    for (i=0; i < tamanho; i++)
        vetor[i] = rand() % (lim_max - lim_min + 1) + lim_min;
}

void imprime_vetor(int vetor[], int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
        printf("%d,", vetor[i]);
        printf("\n");

}

void imprime_vetor_inverso(int vetor[], int tamanho)
{
    int i;
    for (i = tamanho - 1; i >= 0; i--)
        printf("%d,", vetor[i]);


}
