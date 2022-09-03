#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int numero1, centena, dezena, unidade;
    printf("Digite um numero inteiro entre 100 e 900!\n");
    scanf("%d", &numero1);

    if (numero1<100 ||numero1>999)
    {
        printf("numero invalido");
        return 0;
    }
    else
    {
        unidade = numero1%10;
        dezena = (numero1%100-unidade)/10;
        centena = (numero1 - (dezena*10+unidade))/100;

        if (numero1 == (pow(centena,3)+pow(dezena,3)+pow(unidade,3)))
        {
            printf("%d eh um numero de Armstrong (narcisista)!\n\n", numero1);
        }
        else
        {
            printf("%d nao eh um numero de Armstrong (narcisista)!\n\n", numero1);
        }
    }
    return 0;
}
