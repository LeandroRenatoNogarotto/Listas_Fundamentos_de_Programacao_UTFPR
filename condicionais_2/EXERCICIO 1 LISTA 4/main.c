#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ano;
    printf("Para saber se um ano eh bissexto, digite ele aqui: ");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0))
    {
        printf("%d eh um ano bissexto!", ano);
    }
    else
    {
        printf("%d nao eh um ano bissexto!", ano);
    }

    printf("\n\n");

    return 0;
}
