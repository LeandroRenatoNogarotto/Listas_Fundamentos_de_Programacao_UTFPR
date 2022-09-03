#include <stdio.h>
#include <stdlib.h>

int main()
{
    float DISTANCIA, COMBUSTIVEL, CMEDIO;
    printf("OLA' USUARIO INSIRA A DISTANCIA TOTAL PERCORRIDA!\n");
    scanf("%f", &DISTANCIA);

    printf("OLA' USUARIO INSIRA O TOTAL DE COMBUSTIVEL GASTO!\n");
    scanf("%f", &COMBUSTIVEL);

    CMEDIO = (DISTANCIA/COMBUSTIVEL);

    printf("SEU CONSUMO MEDIO EH: %.3f Km/l\n", CMEDIO);
    return 0;
}
