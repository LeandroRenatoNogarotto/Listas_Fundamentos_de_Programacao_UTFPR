#include <stdio.h>
#include <stdlib.h>

int retornaMaior(int n1, int n2);

int main()
{
    int numero1=0, numero2=0, numero3=0, maior;
    printf("Ola usuario digite 3 numeros\n");
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    maior = retornaMaior(numero1, numero2);
    maior = retornaMaior(maior, numero3);

    printf("O maior eh: %d\n", maior);
    return 0;
}

int retornaMaior(int n1, int n2)
{
    if(n1>=n2)
    {
        return n1;
    }
    else
        return n2;
}
