#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero=0, aux=10, i=0, digito_atual=0, digito_passado=0, numero_calculado=0;
    printf("Ola usuario digite um numero!\n");
    scanf("%d", &numero);
    numero_calculado=numero;
    while(1)
    {
        i++;
        digito_atual=(numero_calculado%aux);
        numero_calculado=numero_calculado - (digito_atual*(aux/10));
        aux=aux*10;
        if(i==1)
        {            digito_passado=digito_atual;
            digito_passado*=10;
            continue;
        }

        if(digito_atual!=digito_passado)
        {
            printf("os digitos do valor %d nao sao todos iguais entre si\n", numero);
            break;
        }
        else if(aux>numero_calculado)
        {
            printf("O numero %d possui todos os digitos iguais",numero);
            break;
        }
        digito_passado=digito_atual;
        digito_passado*=10;
    }
    return 0;
}
