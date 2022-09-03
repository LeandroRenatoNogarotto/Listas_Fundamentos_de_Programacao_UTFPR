#include <stdio.h>
#include <stdlib.h>

int calculaDigitoVerificador(int num);

int main()
{
    int numero=0, verificador=0;
    printf("Número de tres digitos!\n");
    scanf("%d", &numero);

    verificador = calculaDigitoVerificador(numero);
    printf("%d", verificador);

    return 0;
}

int calculaDigitoVerificador(int num)
{
    int d1=0, d2=0, d3=0, somatoria=0;

    d1= num%10;
    d2= ((num-d1)%100)/10;
    d3= ((num-(d2*10+d1))%1000)/100;

    somatoria= d1*3+ d2*2 + d3*1;
    somatoria = somatoria%11;
    somatoria = somatoria%10;

    return somatoria;

}
