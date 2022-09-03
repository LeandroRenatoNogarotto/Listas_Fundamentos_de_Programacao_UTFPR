#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alunos=0, monitores=0;
    printf("Ola usuario insira a quantidade de alunos!\n");
    scanf("%d",&alunos);
    printf("insira a quantidade de monitores!\n");
    scanf("%d",&monitores);

    if ((alunos+monitores)>50)
    {
        printf("nao eh possivel levar todos em uma unica viagem\n(A cabine do bondinho pode levar 50 pessoas no máximo)");
    }
    else
    {
        printf("e possivel levar todos em uma unica viagem\n");
    }
    return 0;
}
