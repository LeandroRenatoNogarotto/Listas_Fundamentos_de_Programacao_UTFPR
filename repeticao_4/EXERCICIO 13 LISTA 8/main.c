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
    int digitos=0,auxa,auxb,aux10=1,i;
    if(b > a)
    {
        auxa = a;
        while(auxa != 0)
        {
            digitos++;
            auxa=auxa/10;
        }
        for(i=0; i<digitos; i++)
            aux10=aux10*10;
        while(b % aux10 != a)
        {
            b=b/10;
            if(b==0)
                return 0;
        }
        return 1;
    }
    else if(a >= b)
    {
        auxb = b;
        while(auxb != 0)
        {
            digitos++;
            auxb=auxb/10;
        }
        for(i=0; i<digitos; i++)
            aux10=aux10*10;
        while(a % aux10 != b)
        {
            a=a/10;
            if(a==0)
                return 0;
        }
        return 2;
    }

}
