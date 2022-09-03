#include <stdio.h>
#include <stdlib.h>

int ehBissexto(int ano);

int main()
{
    int ano=0, bissexto=0;

    printf("Digite um ano");
    scanf("%d", &ano);
    bissexto = ehBissexto(ano);

    if (bissexto==1)
    {
        printf("O ano digitado eh bissexto\n");
    }
    else
        printf("O ano digitado nao eh bissexto\n");
    return 0;
}

int ehBissexto(int ano)
{
    if(ano%4==0  && (ano % 100 != 0 || ano % 400 == 0))
    {
        return 1;
    }
    return 0;
}
