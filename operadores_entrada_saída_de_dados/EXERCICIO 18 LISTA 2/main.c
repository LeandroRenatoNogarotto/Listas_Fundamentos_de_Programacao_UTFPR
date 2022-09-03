#include <stdio.h>
#include <stdlib.h>

int main()
{
    float DISTANCIA, PEDAGIO, VALOR;
    printf("BOM DIA USUARIO QUAL A DISTANCIA ENTRE AS CIDADES!\n");
    scanf("%f", &DISTANCIA);
    printf("E QUAL A QUANDIDADE DE PEDAGIOS ENTRE AS CIDADES!\n");
    scanf("%f", &PEDAGIO);

    VALOR = (((DISTANCIA/15)*2.60)+(PEDAGIO *8));
    printf("O VALOR GASTO AO FINAL SERA DE %.2f", VALOR);
    return 0;
}
