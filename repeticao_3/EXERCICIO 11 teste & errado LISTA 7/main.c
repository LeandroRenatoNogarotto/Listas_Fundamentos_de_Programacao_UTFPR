#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade=0, numero_inicial=0, teste=0, cont_primo=0, aux=0;

    printf("Ola usuario digite a quantidade de numeros primos que deseja saber!\n");
    scanf("%d", &quantidade);
    printf("digite o numero inicial!\n");
    scanf("%d", &numero_inicial);


    if((numero_inicial<=0) || (quantidade<=0))
    {
        printf("entradas invalidas\n");
        return 0;
    }
    teste = numero_inicial;
    for (; quantidade>0; quantidade--)
    {
        cont_primo=0;
        aux=teste;
        while((cont_primo!=2) || (aux!=1))
        {
            if(teste%aux==0)
            {
                cont_primo++;
            }
            if((cont_primo==2) && (aux==1))
            {
                printf("%d ", teste);
                teste++;
                break;
            }
            if(aux==1)
            {
                teste++;
                aux=teste;
                cont_primo=0;
            }
            if (aux>1)
            {
                aux--;
            }

        }
    }
    return 0;
}
