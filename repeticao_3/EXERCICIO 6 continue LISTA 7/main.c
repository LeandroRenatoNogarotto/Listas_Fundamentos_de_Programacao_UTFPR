#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade=0, numero_atual=0, numero_passado=0, resultado1=0, i=0, resultado2=0;
    printf("Ola usuario digite um numero\n");
    scanf("%d", &quantidade);

    if (quantidade<=1)
    {
        printf("VALOR INVALIDO\n");
        return 0;
    }
    printf("agora digite a sequencia\n");
    for(i=0; i<quantidade; i++)
    {
        scanf("%d", &numero_atual);
        if (i==0)
        {
            numero_passado=numero_atual;
            continue;
        }
        if(numero_passado>numero_atual)
        {
            resultado1++;
        }
        if(numero_passado<numero_atual)
        {
            resultado2++;
        }
        numero_passado=numero_atual;

    }
    if(resultado1>0 && resultado2==0)
    {
        printf("DESCRESCENTE\n");
    }
    else if(resultado2>0 && resultado1==0)
    {
        printf("CRESCENTE\n");
    }
    else
    {
        printf("DESORDENADA\n");
    }
    return 0;
}
