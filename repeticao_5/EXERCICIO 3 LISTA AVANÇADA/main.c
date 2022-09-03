#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, espacos=0, i=1, quantidade=0, aux=0;
    char car;
    printf("digite um numero!\n");
    scanf("%d", &n);
    printf("digite um simbolo!\n");
    scanf(" %c", &car);

    quantidade=n+1;
    while (quantidade>0)
    {
        i=aux*2+1;
        espacos = n-aux;
        while(espacos>0)
        {
            printf(" ");
            espacos--;
        }
        while(i>0)
        {
            printf("%c", car);
            i--;
        }
        printf("\n");
        aux++;
        quantidade--;
    }
    aux=1;
    i= n*2-1;
    quantidade=n+2;
    while (quantidade>n+1 && quantidade<=n*2+1)
    {
        espacos = aux;
        while(espacos>0)
        {
            printf(" ");
            espacos--;
        }
        while(i>0)
        {
            printf("%c", car);
            i--;
        }
        printf("\n");
        aux++;
        i= ((n*2+1)-((aux)*2));
        quantidade++;
    }
    return 0;
}

