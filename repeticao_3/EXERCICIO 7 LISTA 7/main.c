#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero=0, i=0;
    printf("Ola usuario digite um numero natural!\n");
    scanf("%d", &numero);

    if (numero< 0)
    {
        printf("Entrada invalida\n");
        return 0;
    }
    for(i=0; i<numero; i++)
    {
        if ((i)*(i+1)*(i+2)==numero)
        {
            printf("O numero %d eh triangular pois %d x %d x %d = %d", numero, i, i+1, i+2, numero);
            break;
        }
        if ((i*(i+1)+(i+2)>numero))
        {
            printf("o numero %d nao eh triangular", numero);
            break;
        }
    }
    return 0;
}
