#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

void preenche_vetor(int vetor[], int tamanho, int limite);
void imprime_vetor(int vetor[], int tamanho);

int main(void)
{
    int limite, vetor[TAM];
    srand(time(NULL));

    printf("Digite um numero limite para preenchimento do vetor: ");
    scanf("%d", &limite);

    preenche_vetor(vetor, TAM, limite);
    imprime_vetor(vetor, TAM);

    return 0;
}

void preenche_vetor(int vetor[], int tamanho, int limite)
{
    int i;
    for (i = 0; i < tamanho; i++)
        vetor[i] = rand() % limite;
}

void imprime_vetor(int vetor[], int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
        printf("%d,", vetor[i]);

}
