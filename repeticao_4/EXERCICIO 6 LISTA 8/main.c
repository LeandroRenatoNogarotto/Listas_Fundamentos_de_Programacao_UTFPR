#include <stdio.h>
#include <stdlib.h>

int retornaResto(int alexandre, int maria, int rafael);
void imprimeVencedor(int resto);

int main()
{
    int alexandre=0, maria=0, rafael=0;
    printf("digite as entradas dos jogadores!\n");
    scanf("%d %d %d", &alexandre, &maria, &rafael);

    retornaResto(alexandre, maria, rafael);

    return 0;
}
int retornaResto(int alexandre, int maria, int rafael)
{
   imprimeVencedor((alexandre+maria+rafael)%3);
}
void imprimeVencedor(int resto)
{
    if(resto==2)
    {
        printf("vancedor RAFAEL");
    }
    else if(resto==1)
    {
        printf("vancedor MARIA");
    }
    else
    {
         printf("vancedor ALEXANDRE");
    }
}
