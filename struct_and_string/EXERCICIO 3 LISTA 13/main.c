#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15
#define PMAX 10000

typedef struct
{
    float preco;
    int telefone;
    int codigo;
} Eletrodomestico;

float calcula_media_preco_eletro(Eletrodomestico *eletros);
void imprime_telefones_abaixo_media (Eletrodomestico *eletro, float media);
void preenche_conjunto(Eletrodomestico *p_eletro);

int main()
{
    Eletrodomestico *p_eletro;
    float media;

    srand(time(NULL));
    p_eletro = (Eletrodomestico *) malloc(TAM * sizeof(Eletrodomestico));

    preenche_conjunto(p_eletro);

    media = calcula_media_preco_eletro(p_eletro);
    printf("Media dos precos: %.2f\n", media);

    imprime_telefones_abaixo_media (p_eletro, media);
    return 0;
}

void preenche_conjunto(Eletrodomestico *p_eletro)
{
    int i;
    for (i = 0; i < TAM; i++)
    {
        p_eletro[i].preco = (rand() / (float) RAND_MAX) * PMAX;
        p_eletro[i].codigo = rand() % 2147483647;
        p_eletro[i].telefone = rand() % 1000000000;
    }
}

float calcula_media_preco_eletro(Eletrodomestico *eletros)
{
    float media=0;
    int i;

    for (i=0; i<TAM; i++)
    {
        media+= eletros[i].preco;
    }
    return media/TAM;
}

void imprime_telefones_abaixo_media (Eletrodomestico *eletro, float media)
{
    int i;
    printf("Telefone das lojas com preco abaixo da media:\n");
    for(i=0; i<TAM; i++)
    {
        if(eletro[i].preco<media)
        {
            printf("\tTelefone: %08d, preco: R$%.2f\n", eletro[i].telefone, eletro[i].preco);
        }
    }
}



