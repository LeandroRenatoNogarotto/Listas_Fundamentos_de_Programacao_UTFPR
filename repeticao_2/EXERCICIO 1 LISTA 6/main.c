#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero=0,maior=0;

    while(numero>=0)
    {
        printf("Ola usuario digite um numero (Para sair digite um numero negativo)!\n");
        scanf("%f", &numero);
        if(numero>maior)
        maior=numero;
    }

    printf("o maior numero digitado foi: %f", maior);
    return 0;

}
