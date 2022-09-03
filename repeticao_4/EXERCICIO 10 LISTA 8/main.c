#include <stdio.h>
#include <stdlib.h>

int retornaMDC(int num1, int num2);

int main()
{
    int mdc=0, num1,num2;
    printf("digite dois numeros!\n");
    scanf("%d %d", &num1, &num2);
    mdc=retornaMDC(num1,num2);

    printf("O MDC entre %d e %d eh: %d", num1,num2, mdc);
    return 0;
}

int retornaMDC(int num1, int num2)
{
    int diferenca=0;
    while(num1 != num2)
    {
        if(num1>num2)
        {
            diferenca = num1-num2;
            num1= diferenca;
        }
        else
        {
            diferenca = num2-num1;
            num2=diferenca;
        }
    }
    return num1;
}
