/* Fa�a um programa que dados os coeficientes (a,b e c) de uma equa��o do 2o grau, calcule e imprima suas ra�zes (caso
a equa��o possua ra�zes imagin�rias, o programa n�o deve imprimir nada). */

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
        printf("Resultado: x' = %.3f e x'' = %.3f\n\n", x1, x2);
    }

    return 0;
}
