#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMF 100 //limite maximo de caracter para a frase
#define TAMP 30 //limite maximo de caracter para a palavra

int main()
{
    int i, j, tamanho_palavra,quantidade=0;
    char frase[TAMF], palavra[TAMP];
    printf("Digite a palavra:\n");
    fgets(palavra,TAMP,stdin);
    palavra[strlen(palavra)-1]='\0';
    printf("Agora digite a frase: \n");
    fgets(frase,TAMF,stdin);
    frase[strlen(frase)-1]='\0';

    tamanho_palavra = strlen(palavra);

    for(i=0; frase[i] != '\0'; i++)
    {
        if(frase[i] == palavra[0])
            for(j = 1; j < tamanho_palavra; j++)
            {
                if(frase[i+j]==palavra[j])
                {
                    if(j == tamanho_palavra-1)
                    {
                        quantidade++;
                    }
                    continue;
                }
                else
                    break;
            }
    }

    printf("A palavra aparece %d vezes na frase!",quantidade);

    return 0;
}
