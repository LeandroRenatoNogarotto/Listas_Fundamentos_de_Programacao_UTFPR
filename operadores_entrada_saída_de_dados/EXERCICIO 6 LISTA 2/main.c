#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    float media;
    printf("DIGITE UM NUMERO!\n");
    scanf ("%i", &n1);
    printf("DIGITE OUTRO NUMERO!\n");
    scanf ("%i", &n2);

    media = n1+n2;
    media = media/2; //como n1 e n2 s�o inteiros � necessario que seus valores sejam passados
                    // a uma variavel com capacidade para aramzenar numeros quebrados antes de fazer a divis�o

    printf("A MEDIA EH: %f \n", media);

    return 0;
}
