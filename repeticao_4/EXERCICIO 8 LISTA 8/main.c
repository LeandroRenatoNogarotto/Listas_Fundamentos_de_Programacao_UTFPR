#include <stdio.h>
#include <stdlib.h>

void determinaValores(int n);

int main()
{
    int n;
    printf("Digite um numero!\n");
    scanf("%d", &n);
    determinaValores(n);
    return 0;
}

void determinaValores(int n)
{
    int i,j,k;

    for(i=1; i<=n-2; i++)
    {
        for(j=1; j<=n-2; j++)
        {
            for(k=1; k<=n-2; k++)
            {
                if((i+k+j)==n)
                {
                    printf("%d + %d + %d\n", i,j,k);
                }
            }
        }
    }
}
