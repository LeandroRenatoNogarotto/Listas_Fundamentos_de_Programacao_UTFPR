#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0, x=0, resultado=0, j=0;
    printf("Ola usuario digite um numero inteiro para visualizar o grafico!\n");
    scanf("%d", &n);

    for(x=-n; x<=n; x++)
    {
        if (x < 0)
			printf("%d  ", x);
		else
			printf(" %d  ", x);

        resultado = (x*x)+x+1;
        for(j=0; j<resultado; j++)
        {
            printf(".");
        }
        printf("*\n");
    }
    return 0;
}
