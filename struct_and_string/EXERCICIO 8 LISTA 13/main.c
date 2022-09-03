#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 1000
int main()
{
    char frase1[TAM],frase2[TAM],fraseFinal[TAM];
    int i=0,j= 0;
    printf("\nDigite a primeira frase: \n");
    fgets(frase1,TAM,stdin);
    frase1[strlen(frase1)-1]='\0';
    printf("\nAgora digite a segunda frase: \n");
    fgets(frase2,TAM,stdin);
    frase2[strlen(frase2)-1]='\0';

    while (frase1[i] != '\0' || frase2[j] != '\0')
    {
        while(frase1[i] != ' ' && frase1[i] != '\0')
        {
            fraseFinal[i+j] = frase1[i];
            i++;
        }
        fraseFinal[i+j] = ' ';
        i++;
        while(frase2[j] != ' ' && frase2[j] != '\0')
        {
            fraseFinal[i+j] = frase2[j];
            j++;
        }
        fraseFinal[i+j] = ' ';
        j++;
    }
    printf("%s",fraseFinal);
    return 0;
}
