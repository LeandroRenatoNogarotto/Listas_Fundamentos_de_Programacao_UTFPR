#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

void preenche_vetor(int vetor[], int tamanho, int lim_min, int lim_max);
void imprime_vetor(int vetor[], int tamanho);
float media_pares(int vetor[], int tamanho);
float media_dos_elementos(int vetor[], int tamanho);

int main(void)
{
    int vetor[TAM];
    float media_posicao, media_elementos;

    srand(time(NULL));

    preenche_vetor(vetor, TAM, 1, 10);

    printf("Vetor trabalhado: ");
    imprime_vetor(vetor, TAM);
    printf("\n");

    media_posicao = media_pares(vetor, TAM);
    printf("Media elementos com posicao par: %f\n", media_posicao);

    media_elementos = media_dos_elementos(vetor, TAM);
    printf("Media elementos pares: %f\n", media_elementos);

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

float media_pares(int vetor[], int tamanho)
{
    int i;
    float soma = 0, qtd = 0;
    for (i = 0; i < tamanho; i++)
        if (i % 2 == 0) //INDICE PAR
            soma += vetor[i], qtd++;
    return soma / qtd;
}

float media_dos_elementos(int vetor[], int tamanho)
{
    int i;
    float soma = 0, qtd = 0;
    for (i = 0; i < tamanho; i++)
        if (vetor[i] % 2 == 0) //VALOR ARMAZENADO PAR
            soma += vetor[i], qtd++;
    return soma / qtd;
}
