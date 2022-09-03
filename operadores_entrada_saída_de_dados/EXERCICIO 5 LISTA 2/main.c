#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i1, i2, divis, rest;

    printf("OLA USUARIO DIGITE UM NUMERO INTEIRO!\n");
    scanf("%i", &i1);
    printf("DIGITE OUTRO NUMERO INTEIRO!\n");
    scanf("%i", &i2);

    divis = i1/i2;
    rest =i1%i2;

    printf("divisao = %i resto = %i\n", divis, rest);
    return 0;

}
//na divisão de 12 por 5 tem como resultado 2 e deixa de resto 2;
