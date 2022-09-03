#include <stdio.h>
#include <stdlib.h>

int ultimosDigitos(int a,int b);
int main()
{
    int a,b;
    printf("Digite os valores para 'a' e para 'b': \n");
    scanf("%d%d",&a,&b);
    printf("%d",ultimosDigitos(a,b));
    return 0;
}
int ultimosDigitos(int a, int b)
{
    while(b != 0)
    {
        if(b % 10 == a % 10)
        {
            b = b / 10;
            a = a / 10;
            continue;
        }
        else
            return 0;
    }
    return 1;
}
