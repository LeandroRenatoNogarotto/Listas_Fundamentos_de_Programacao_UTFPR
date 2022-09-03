#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base, altura;

    printf("INSIRA O VALOR DA BASE DO RETANGULO!\n");
    scanf("%f", &base);

    printf("INSIRA O VALOR DA ALTURA DO RETANGULO!\n");
    scanf("%f", &altura);

    printf("O PERIMETRO TOTAL DO RETANGULO EH: %f", 2*base + 2*altura);
    return 0;
}
