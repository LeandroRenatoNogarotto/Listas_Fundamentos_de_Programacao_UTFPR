#include <stdio.h>
#include <stdlib.h>

int main()
{

    float a=0, g=0, ra=0, rg=0;

    printf("ola usario digite o preco do alcool!\n");
    scanf("%f", &a);

    printf("digite o preco da gasolina!\n");
    scanf("%f", &g);

    printf("digite o rendimento do carro com alcool (em km/l)\n\n");
    scanf("%f", &ra);

    printf("digite o rendimento do carro com gasolina (em km/l)\n\n");
    scanf("%f", &rg);

    if ((a/ra)<(g/rg))
    {
        printf("A");
    }

    else
    {
        printf("G");
    }
    return 0;
}
