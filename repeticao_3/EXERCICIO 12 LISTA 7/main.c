#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero_1=0, numero_2=0, primo=2, aux=0, n1, n2, mmc=1, cont=0;
    printf("Ola usuario digite 2 numeros para que o mmc seja calculado!\n");
    scanf("%d %d", &numero_1, &numero_2);
    n1=numero_1;
    n2=numero_2;
    while(numero_1!=1 || numero_2!=1)
    {
        aux=primo;
        while (cont!=2 || aux!=1)
        {
            if(primo%aux==0)
            {
                cont++;
            }
            if(cont>2)
            {
                cont=0;
                break;
            }
                if(numero_1%primo==0 || numero_2%primo==0)
                {
                    printf("%d, %d | %d\n", numero_1, numero_2, primo);
                    if (numero_1 % primo == 0)
                        numero_1 /= primo;

                    if (numero_2 % primo == 0)
                        numero_2 /= primo;

                    mmc *= primo;
                    cont=0;
                    break;
                }
                else
                {
                    primo++;
                    cont=0;
                    break;
                }
            }
            aux--;
        }
    printf("1, 1 | 1\n");
    printf("MMC de %d eh %d eh %d\n\n", n1, n2, mmc);
    return 0;
}
