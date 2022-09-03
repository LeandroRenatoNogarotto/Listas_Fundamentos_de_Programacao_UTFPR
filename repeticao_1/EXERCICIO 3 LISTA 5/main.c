#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero_1=0,numero_2=0, aux=0,total_impares=0;

    printf("ola usuario digite um numero inteiro\n");
    scanf("%d",&numero_1);
    printf("digite outro numero inteiro menor que o anterior\n");
    scanf("%d",&numero_2);
    if (numero_1<=numero_2)
    {
       printf("entrada invalida\n");
    }
    else{
    for(aux=numero_2+1; aux<numero_1; aux++)
    {
        if(aux%2==1)
        {
            total_impares++;
        }
    }

    printf("numeros impares entre %d e %d = %d", numero_1, numero_2, total_impares);
    }
    return 0;
}
