#include <stdio.h>
#include <stdlib.h>

int arredonda (float x);

int main()
{
    float numero=0;
    int arrendondado=0;
    printf("Digite um numero!\n");
    scanf("%f", &numero);

    arrendondado = arredonda(numero);

    printf("%d",arrendondado);
    return 0;
}

int arredonda (float x)
{
    int inteiro_proximo=0, inteiro_anterior=0;
    float diferenca=0, diferenca_1=0;

    inteiro_proximo = x+1;

    diferenca = inteiro_proximo-x;

    inteiro_anterior = x;

    diferenca_1 = x-inteiro_anterior;

    if(diferenca<=diferenca_1)
    {
        return inteiro_proximo;
    }
    else
        return inteiro_anterior;
}
