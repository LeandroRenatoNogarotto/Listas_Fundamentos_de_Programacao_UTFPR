#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome;
    int dia;
    int mes;
} Aniversario;


int main(void)
{
    Aniversario aniversarios[5];
    int i, d, entrou=0;

    for (i=0; i < 5; i++)
    {
        printf("Qual a inicial do %dº ?:\n", (i+1));
        scanf(" %c", &aniversarios[i].nome);
        printf("Qual o dia do %dº ?:\n", (i+1));
        scanf("%d", &aniversarios[i].dia);
        printf("Qual o mes do o %dº ?:\n", (i+1));
        scanf("%d", &aniversarios[i].mes);
    }

    for (d=1; d <= 12; d++)
    {
        entrou = 0;
        for (i=0; i < 5; i++)
        {

            if (aniversarios[i].mes == d )
            {
                printf("Aniversariantes do mes %d: %c\n",d,       aniversarios[i].nome);
                entrou=1;
            }
            if(entrou==0 && i==4)
            {
                printf("nao tem aniversariante no mes %d\n", d);
            }
        }
    }
    return 0;
}
