   /* Refaça o exercício anterior para imprimir mensagem raízes imaginárias caso as raízes sejam imaginárias. Caso a
equação possua uma única raíz o programa também deve indicar isso (ou seja que a raiz é única). */

#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c;
    float x1, x2;

    printf("Entre com os valores de a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((b * b - 4 * a * c) > 0)
    {
        x1 = (-b + sqrt(b * b - 4 * a * c)) / (2.0 * a);
        x2 = (-b - sqrt(b * b - 4 * a * c)) / (2.0 * a);

        printf("A equacao possui duas raizes reais: \n");
        printf("Resultado: x' = %.4f e x'' = %.4f\n\n", x1, x2);
    }
    else if ((b * b - 4 * a * c) < 0)
    {
        printf("A equacao possui raizes imaginarias");
    }
    else
    {
        x1 = (-b) / (2.0 * a);

        printf("A equiação possui apenas uma raiz: \n");
        printf("Resultado: x = %.4f\n", x1);
    }

    return 0;
}
