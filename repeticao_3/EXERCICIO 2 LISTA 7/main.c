#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=0, i=0, j=0, impares=1;
    printf("Ola usuario digite um numero inteiro!\n");
    scanf("%d", &m);

    for(i=1; i<=m; i++)
    {
        printf("%d^3 = ", i);

        for (j=0; j<i; j++)
        {
            printf("%d", impares);
            if(i>1 && ((i-1)!=j))
            {
                printf(" + ");
            }
            impares+=2;
        }
        printf("\n");
    }
    return 0;
}

