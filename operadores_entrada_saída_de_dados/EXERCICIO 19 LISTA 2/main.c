#include <stdio.h>
#include <stdlib.h>

int main()
{
    float NOTA1, NOTA2, NOTA3, MEDIA;
    printf("OLA USUARIO DIGITE A SUA  PRIMEIRA NOTA\n");
    scanf("%f", &NOTA1);
    printf("DIGITE A SUA SEGUNDA NOTA\n");
    scanf("%f", &NOTA2);
    printf("DIGITE A SUA TERCEIRA NOTA\n");
    scanf("%f", &NOTA3);

    MEDIA = ((2*NOTA1 + 3*NOTA2 + 5*NOTA3)/10);
    printf("A MEDIA FINAL E':%.1f", MEDIA);
    return 0;
}
