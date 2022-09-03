
#include <stdio.h>
#include <stdlib.h>

int contadigitos(int n, int d);

int main()
{
    int n=0, d=-1;
    printf("Ola usuario digite um numero!\n");
    scanf("%d", &n);

    while (d<0 || d>9)
    {
        printf("Ola usuario digite um digito!\n");
        scanf("%d", &d);
    }

    printf("%d",
           contadigitos(n,d));
    return 0;
}

int contadigitos(int n, int d)
{
    int cont=0;
    while(n!=0)
    {
        if(n%10==d)
        {
            cont++;
        }
        n/=10;
    }
    return cont;
}
