/* Modifique o programa anterior para que imprima qual dos dois é maior (perímetro ou área). Assuma que nunca podem
ser iguais */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float base, altura;

    printf("Digite a medida da base do retangulo: ");
    scanf("%f", &base);

    printf("Digite a medida da altura do retangulo: ");
    scanf("%f", &altura);

    printf("Perimetro: %f\n", altura * 2 + base * 2);
    printf("Area: %f\n", base * altura);

    if ((altura * 2 + base * 2) > base * altura)
    {
        printf("O perimetro eh maior que a area\n\n");
    }
    else
    {
         printf("A area eh maior que o perimetro\n\n");
    }

    return 0;

}
