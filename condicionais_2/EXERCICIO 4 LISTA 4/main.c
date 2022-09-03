#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a, b, c;

    printf("Entre com tres valores separados por espaco: ");
    scanf("%f %f %f", &a, &b, &c);

    if (!(a + b > c && a + c > b && b + c > a))
    {
        printf("Nao eh triangulo!\n\n");
        return 0;
    }

    if (a == b && b == c)
    {
        printf("os lados %.2f %.2f %.2f formam um triangulo equilatero", a, b, c);
    }
    else if ((a == b)|| (a == c)|| (b == c))
    {
        printf("os lados %.2f %.2f %.2f formam um triangulo isosceles", a, b, c);
    }
    else
    {
        printf("os lados %.2f %.2f %.2f formam um triangulo escaleno\n \n", a, b, c);
    }
    return 0;
}
