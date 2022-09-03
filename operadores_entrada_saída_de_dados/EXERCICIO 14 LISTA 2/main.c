#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUMERO,C1,C5,C50;

    printf("INSIRA UM VALOR INTEIRO!\n");
    scanf("%i", &NUMERO);

    C50 = NUMERO/50;
    NUMERO = NUMERO%50;
    C5 = NUMERO/5;
    NUMERO =  NUMERO%5;
    C1 =  NUMERO/1;

    printf("O VALOR PODE SER REPRESNETADO POR %i CEDULAS DE 50, %i CEDULAS DE 5, E %i CEDULAS DE 1",C50,C5,C1);
    return 0;
}
