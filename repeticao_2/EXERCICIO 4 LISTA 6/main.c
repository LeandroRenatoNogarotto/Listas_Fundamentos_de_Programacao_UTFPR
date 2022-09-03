#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1=0, n2=0, resto=0, a=0, b=0;

    printf("Ola usuario digite um numero!\n");
    scanf("%d", &n1);

    printf("Ola usuario digite um numero!\n");
    scanf("%d", &n2);
    a=n1;
    b=n2;
    do
    {
        resto = a%b;
        a = b;
        b= resto;
    }
    while (resto!= 0);

    printf("O MMC de %d e %d eh: %d", n1, n2, (n1*n2)/a);

    return 0;
}
