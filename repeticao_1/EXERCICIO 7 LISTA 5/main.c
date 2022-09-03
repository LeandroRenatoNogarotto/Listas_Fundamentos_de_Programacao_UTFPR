#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade=0, aux=0, ultimo_resultado=0, resultado=0;
    printf("Ola usuario quantos numeros da sequancia de Fibonacci deseja ver?\n");
    scanf("%d", &quantidade);

    for(aux=0; aux<quantidade; aux++)
    {

        resultado += ultimo_resultado;
        ultimo_resultado = resultado-ultimo_resultado;
        printf("\t%d \n", resultado);
        if(aux==0)
        {
            ultimo_resultado++;
        }
    }

    return 0;
}

