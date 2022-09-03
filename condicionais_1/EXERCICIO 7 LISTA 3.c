/* Leia 2 valores reais (x e y), os quais representam as coordenadas de um ponto em um plano. A seguir, determine a
qual quadrante pertence o ponto. Analise também se está sobre um dos eixos cartesianos ou na origem (x = y = 0).
Para auaxiliar a resoluação do exercícico, a figura abaixo ilustra os quatro quadrantes no plano cartesiano X ˆ Y , como
primeiro quadrante iniciando no canto superior direito, o segundo no canto superior esquerdo e assim por diante */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float x,y;
    printf("Digite uma abscissa e uma ordenada!\n");
    scanf("%f %f", &x, &y);

    if (x==0 && y==0){
    printf("Origem");
    }
    else if (x==0){
    printf("Eixo X");
    }
    else if (y==0){
    printf("Eixo Y");
    }
    else if(x>0 && y>0){
    printf("Q1");
    }
    else if(x>0 && y<0){
    printf("Q4");
    }
    else if(x<0 && y>0){
    printf("Q2");
    }
    else {
    printf("Q3");
    }

    return 0;
}
