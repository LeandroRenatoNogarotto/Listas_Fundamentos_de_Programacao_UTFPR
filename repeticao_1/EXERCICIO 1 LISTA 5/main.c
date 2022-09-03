#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, aux;
    printf("Ola usuario digite um numero inteiro!\n");
    scanf("%d", &n);

    for (aux=0; aux<=10; aux++)
    {
        printf("\t%d X %d = %d\n", n, aux, n*aux);
    }
    return 0;
}
