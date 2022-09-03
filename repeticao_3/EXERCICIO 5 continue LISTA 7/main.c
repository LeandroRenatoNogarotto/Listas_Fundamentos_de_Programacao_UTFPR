#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade=0, numero_atual=0, numero_passado=0, resultado=0, i=0, descrecente=0;
    printf("Ola usuario digite um numero\n");
    scanf("%d", &quantidade);
    printf("agora digite a sequencia\n");

    for(i=0; i<quantidade; i++)
    {
        scanf("%d", &numero_atual);
        if(i==0)
        {
            numero_passado = numero_atual-1;
        }
        if(numero_passado>numero_atual)
        {
            descrecente=1;
            continue;
        }
        if(numero_passado<numero_atual)
        {
            numero_passado=numero_atual;
            resultado++;
        }
    }
    if(resultado>1 && descrecente==0)
    {
        printf("SIM\n");
    }
    else
    {
        printf("NAO\n");
    }
    return 0;
}
