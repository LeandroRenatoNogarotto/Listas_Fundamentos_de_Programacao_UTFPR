#include <stdio.h>

int main(void)
{
    int quantidade, numero_inicial, primo, primos_achados = 0, i, j;

    printf("Digite um numero inicial: ");
    scanf("%d", &numero_inicial);

    printf("Digite quantos numeros primos voce quer a partir de %d: ", numero_inicial);
    scanf("%d", &quantidade);

    if (numero_inicial <= 0 || quantidade <= 0)
    {
        printf("Entrada invalida, ambos os numeros devem ser positivos\n");
        return 0;
    }

    // utilizando for para tornar mais facil o incremento da variavel
    for (i = numero_inicial; primos_achados < quantidade; i++)
    {
        primo = 1;

        for (j = i - 1; j > 1; j--)
        {
            if (i % j == 0)
            {
                primo = 0;
                break;
            }
        }
        if (primo && i != 1)
        {
            primos_achados++;
            printf("%d - %d\n", primos_achados, i);
        }
    }

    return 0;
}
