#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0, i=0, j=0;
    printf("Ola usuario digite um numero!\n");
    scanf("%d", &n);
    printf("  ");
    for(i=1; i<=n; i++)
    {
        printf("%d ", i);
        if (i < 10)
            printf("   ");

        else if (i < 100)
            printf("  ");

        else
            printf(" ");
    }
    printf("\n");
    for(i=1; i<=n; i++)
    {
        printf("%d ", i);
        for(j=1; j<=i; j++)
        {
            printf("%d ", i*j);
            if (i*j < 10)
                printf("   ");

            else if (i*j < 100)
                printf("  ");

            else
                printf(" ");

        }
        printf("\n");
    }
    return 0;
}
