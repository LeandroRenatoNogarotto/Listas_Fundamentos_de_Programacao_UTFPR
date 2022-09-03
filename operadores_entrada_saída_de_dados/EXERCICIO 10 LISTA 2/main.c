#include <stdio.h>
#include <stdlib.h>

int main()
{
    double RAIO;
    printf("OLA USUARIO INSIRA O VALOR DO RAIO!\n");
    scanf("%lf",&RAIO);
    printf("O VOLUME TOTAL DA ESFERA EH: %.3lf",((4.0/3)*3.14159*(RAIO*RAIO*RAIO)));

    return 0;
}

