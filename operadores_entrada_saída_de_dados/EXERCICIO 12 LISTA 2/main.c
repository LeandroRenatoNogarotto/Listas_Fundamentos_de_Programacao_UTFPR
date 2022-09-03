#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c, menorAB,menorABC;

    printf ("ola usuario digite tres numero entre espacos\n");
    scanf("%d %d %d",&a,&b,&c);

    menorAB = (a+b-abs(a-b))/2;

    menorABC = (menorAB+c-abs(menorAB-c))/2;

    printf("%d eh o menor\n",menorABC);

    return 0;
}
