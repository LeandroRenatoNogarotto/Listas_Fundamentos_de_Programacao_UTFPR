#include <stdio.h>
#include <stdlib.h>

#define SENHA 2002
int main()
{
    int senha_digitada=0;


    while(senha_digitada!=SENHA)
    {

        printf("Ola usuario insira a senha!\n");
        scanf("%d", &senha_digitada);
        if(senha_digitada!=SENHA)
        {
            printf("Senha Invalida\n");
        }

    }
    printf("\nAcesso permitido\n");


    return 0;
}
