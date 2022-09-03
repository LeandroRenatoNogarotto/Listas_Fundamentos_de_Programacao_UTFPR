#include <stdio.h>
#include <stdlib.h>


int testaTipoChar (char c);

int main()
{
    int resposta;
    char caractere= 0;

    printf("Ola usuario entre com um caractere\n");
    scanf("%c", &caractere);

    resposta = testaTipoChar (caractere);

    printf("%d", resposta);
    return 0;
}

int testaTipoChar (char c)
{
    if(c>=48 && c<=57)
    {
        return 3;
    }
    if(c>=64 && c<=90)
    {
        return 1;
    }
    if(c>=97 && c<=122)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

