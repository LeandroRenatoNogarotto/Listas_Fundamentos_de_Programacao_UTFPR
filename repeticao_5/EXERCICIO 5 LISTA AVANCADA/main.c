#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade=0, atual=0, anterior, seg=0, mudanca1=0, alterada=1,i, numero, total=0,aternada;

    printf("digite quantos numeros!\n");
    scanf("%d", &quantidade);

    for(i=quantidade; i>0; i--)
    {
        printf("numero:");
        scanf("%d", &numero);

        if(i==quantidade)
        {
            if (numero%2==0)
            {
                atual=0;
            }
            else
            {
                atual=1;
            }
            anterior = atual;
            seg++;
            continue;
        }

        if (numero%2==0)
        {
            atual=0;
        }
        else
        {
            atual=1;
        }
        if (mudanca1==0)
        {
            if(anterior==atual)
            {
                seg++;
            }
            else
            {
                total=seg;
                seg=1;
                mudanca1=1;
            }
        }
        else
        {
            if(anterior==atual)
            {
                seg++;
            }
            if(atual!=anterior && total!=seg)
            {
                aternada=0;
            }

            if(total==seg)
            {
                aternada=1;
            }
        }
    }
    if(aternada==0)
    {
        printf("Nao eh altenada");
    }
    else
    {
        printf("%d alternada", total);
    }
    return 0;
}
