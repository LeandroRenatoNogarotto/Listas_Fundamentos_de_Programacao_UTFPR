#include <stdio.h>
#include <stdlib.h>

float calculaIMC(float altura, float peso);
void exibidor(float imc);

int main()
{
    float altura, peso;
    printf("Digite seu peso e sua altura!\n");
    scanf("%f %f", &peso, &altura);
    calculaIMC(altura,peso);
    return 0;

}

float calculaIMC(float altura, float peso)
{
    float imc;
    imc= (peso/(altura*altura));
    exibidor(imc);
}

void exibidor(float imc)
{
    if (imc<18.5)
        printf("Voce esta abaixo do peso.");
    else if (imc<=25)
        printf("Voce esta com o peso normal.");
    else if (imc<=30)
        printf("Voce esta acima do peso.");
    else if (imc>30)
        printf("Voce esta obeso.");
}
