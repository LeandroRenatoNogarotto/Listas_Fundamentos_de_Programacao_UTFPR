#include <stdio.h>
int ehPermutacao(int n1, int n2);
int contadigitos(int n, int d);
int main()
{
    int n1,n2;
    printf("Digite os 2 numeros: \n");
    scanf("%d%d",&n1,&n2);
    printf("%d",ehPermutacao(n1,n2));
    return 0;
}

int ehPermutacao(int n1, int n2)
{
    int i;
    for(i=0;i<=9;i++)
    {
        if(contadigitos(n1,i)==contadigitos(n2,i))
            continue;
        else
            return 2;
    }
    return 1;
}
int contadigitos(int n, int i)
{
    int contador=0,ultimo_digito;
    while(n!=0)
    {
        ultimo_digito = n % 10;
        if(ultimo_digito==i)
            contador++;
        n = n/10;
    }
    return contador;
}
