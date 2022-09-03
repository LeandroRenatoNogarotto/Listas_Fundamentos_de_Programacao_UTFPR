#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade, i=0, primo=0, soma_primos=0, numero=0, j=0;
    printf("ola usuario digite quantos numeros deseja digitar?\n");
    scanf("%d", &quantidade);

    for(i=0; i<quantidade; i++)
    {
        printf("digite os numeros\n");
        scanf("%d", &numero);
        primo=0;
        for(j=numero; j>=1; j--)
        {
            if(numero%j==0)
            {
                primo++;
            }
            if(primo==2&&j==1)
            {
                soma_primos+=numero;
            }
            if(primo>2)
            {
                break;
            }
        }
    }
    printf("a soma de todos os primos digitados eh de %d", soma_primos);
    return 0;
}
