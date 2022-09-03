#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero=0, aux=0, total_divisores=0;
    printf("Ola usuario digite um numero e o programa dira se ele eh perfeito ou nao!\n");
    scanf("%d", &numero);

    for(aux=1; aux<numero; aux++)
    {
        if  (numero%aux==0)
        {
            total_divisores+=aux;
        }
    }
    if (total_divisores==numero)
    {
        printf("\no numero %d eh perfeito\n\n", numero);
    }
    else
    {
        printf("\no numero %d nao eh perfeito\n\n", numero);
    }

    return 0;
}
