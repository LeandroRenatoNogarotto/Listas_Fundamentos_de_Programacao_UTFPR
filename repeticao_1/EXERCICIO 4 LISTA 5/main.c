#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero_de_casos=0, aux=0;
    float valor_1=0 ,valor_2=0, valor_3=0;

    printf("Ola usuario entre com o numero de casos teste dejado!\n");
    scanf("%d",&numero_de_casos);

    for(aux=0; aux< numero_de_casos; aux++)
    {
        printf("Digite espacadamente 3 valores para calcular a media ponderada (Ex.: 1 2 3):\n");
        scanf("%f %f %f", &valor_1, &valor_2, &valor_3);

        printf("Resultado = %.3f\n\n",(valor_1*2+ valor_2*3+valor_3*5)/10);

    }
    return 0;
}
