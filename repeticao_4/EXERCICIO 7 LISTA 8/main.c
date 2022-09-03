#include <stdio.h>
#include <stdlib.h>

int bin2dec(int num);
int dec2bin(int num);

int main()
{
    int opcao=3, num=0, resultado=0;
    while (opcao!=0)
    {
        printf("digite a opcao!\n");
        scanf("%d", &opcao);

        if (opcao == 0)
        {
            return 0;
        }

        printf("digite o numero!");
        scanf("%d", &num);

        if (opcao == 1)
        {
            resultado=bin2dec(num);
        }
        if (opcao == 2)
        {
            resultado= dec2bin(num);
        }

        printf("\t%d\n", resultado);
    }
    return 0;
}

int bin2dec(int num)
{
    int decimal=0, elevado=1, resto=0;
    resto=num%10;
    if (resto==1)
    {
        decimal++;
    }
    num=num/10;
    while(num!=0)
    {
        resto=num%10;
        if(resto==1)
        {
            decimal+=2*elevado;
        }
        elevado*=2;
        num=num/10;
    }
    return decimal;
}

int dec2bin(int num)
{
    int binario=0, resto, multiplicador=1;
    while(num!=0)
    {
        resto=num%2;
        if(resto==1)
        {
            binario+=multiplicador;
        }
        multiplicador*=10;
        num=num/2;
    }
    return binario;
}
