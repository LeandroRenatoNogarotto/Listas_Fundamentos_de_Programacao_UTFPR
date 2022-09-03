#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c=0;
    printf("Ola usuario digite quantos litros de agua foram consumidos\n");
    scanf("%d",&c);

    if (c <= 10)
    {
        c = 7;
        printf("o valor da sua fatura eh %d\n",c);
        return 0;
    }

    else if(c>10 && c<=30)
    {
        c = 7 + (c-10)*1;
        printf("o valor da sua fatura eh %d\n",c);
        return 0;
    }
    else if(c>30 && c<=100)
    {
        c = 7 + 20 + (c-30)*2;
        printf("o valor da sua fatura eh %d\n",c);
        return 0;
    }
    else
    {
        c = 7 + 20 + 140 + (c-100)*5;
        printf("o valor da sua fatura eh %d\n",c);
        return 0;
    }
    return 0;
}
