#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero=0, media_positivos=0;
    int quantidade_positivos=0;

    while(numero!=-1000)
    {
        printf("Ola usuario digite um numero (-1000 para sair)\n");
        scanf("%f", &numero);
        if(numero>0)
        {
           quantidade_positivos++;
            media_positivos+=numero;
        }
    }
    media_positivos/=quantidade_positivos;
    printf("%d valores positivos!\n", quantidade_positivos);
    printf("Media %.1f\n", media_positivos);

    return 0;
}
