#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numero_aleatorio=0, tentativas=0, numero_digitado=-1;
    srand(time(NULL));
    numero_aleatorio = rand() % 500 + 1;

    while (numero_digitado!=numero_aleatorio)
    {
        printf("Tente um numero entre 0 a 500\n");
        scanf("%d", &numero_digitado);
        if(numero_digitado>numero_aleatorio)
        {
            printf("O numero digitado eh maior que o numero secreto!\n");
        }
        else if(numero_digitado<numero_aleatorio)
        {
            printf("O numero digitado eh menor que o numero secreto!\n");
        }
        tentativas++;
    }
    if (tentativas<=3)
    {
        printf("\n%d tentativas =  /o/",tentativas);
    }
    else if (tentativas <=6)
    {
        printf("\n%d tentativas = :-D",tentativas);
    }
    else if (tentativas <=10)
    {
        printf("\n%d tentativas = :-)",tentativas);
    }
    else
    {
        printf("\n%d tentativas =  :-/",tentativas);
    }

    printf("\n\t ENCERRANDO!\n");
    return 0;
}

