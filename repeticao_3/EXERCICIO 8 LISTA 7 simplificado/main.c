#include <stdio.h>
int main()
{
    int n,aux1=0,aux2,cont1=0,cont2=-1;
    printf("digite um valor com pelo menos 2 digitos: \n");
    scanf("%d",&n);
    while(n!=0)
    {
        aux2=aux1;
        aux1=n%10;
        n=n/10;

        if(aux2==aux1)
        {
            cont1++;
        }
        cont2++;
    }
    if(cont2==cont1)
        printf("todos os digitos sao iguais!");
    else
        printf("os digitos nao sao todos iguais");
    return 0;
}
