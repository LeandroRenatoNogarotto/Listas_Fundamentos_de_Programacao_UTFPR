#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    char opcao;
    float media, n1, n2, n3;
    printf("Ola usuario digite qual operacao deseja realizar\n A = media aritmetica.\n P = media ponderada com pesos 1, 2 e 3 para o primeiro, segundo e terceiro valor, respectivamente.\n G = media geometrica.\n H = media harmonica.\n");
    scanf("%c", &opcao);
    printf("digite 3 numeros para o calculo da media\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    if(opcao=='A' || opcao== 'a')
    {
        media = (n1 + n2 + n3) / 3.0;
        printf("Media aritmetica: %.6f", media);
    }
    else if (opcao == 'P' || opcao == 'p')
    {
        media = (n1 * 1 + n2 * 2 + n3 * 3) / 6;
        printf("Media ponderada: %.6f", media);
    }
    else if (opcao == 'G' || opcao == 'g')
    {
        media = cbrt(n1 * n2 * n3);//cbrt função para raiz cubica
        printf("Media geometrica: %.6f", media);
    }
    else if (opcao == 'H' || opcao == 'h')
    {
        if(n1!=0 && n2!=0 && n3!=0)
        {
            float media = 3 / (1/n1 + 1/n2 + 1/n3);
            printf("Media harmonica: %.6f", media);
        }
        else
        {
            printf("impossivel calcular a media devido a divisao por 0");
        }
    }
    else
        printf("Opcao invalida\n\n");

    return 0;
}
