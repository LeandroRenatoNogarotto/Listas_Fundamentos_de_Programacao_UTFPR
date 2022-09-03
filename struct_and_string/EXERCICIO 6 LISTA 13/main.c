#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

int main()
{
    char frase [TAM], vogais[10]= {'a','e','i','o','u','A','E','I','O','U'};
    int quatidade_letras[5]= {0,0,0,0,0}, i,j;

    printf("ola digite sua frase!\n");
    fgets(frase,TAM,stdin);
    frase[strlen(frase)-1]='\0';

    for(i=0; frase[i] != '\0'; i++)
    {
        for (j=0; j<5; j++)
        {
            if(frase[i]==vogais[j])
            {
                quatidade_letras[j]++;
            }
        }
        for (j=5; j<10; j++)
        {
            if(frase[i]==vogais[j])
            {
                quatidade_letras[j]++;
            }
        }
    }
    for(i = 0; i < 5; i++)
    {
        printf("%c : ",vogais[i]);
        for(j = 0; j < quatidade_letras[i]; j++)
        {
            printf("*");
        }
        printf(" (%d)\n",quatidade_letras[i]);
    }
    return 0;
}
