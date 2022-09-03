#include <stdio.h>
#include <stdlib.h>

int main()
{
    char DADOchar1;
    int DADOint1;
    float DADOfloat1;
    printf("OLA USARIO DIGITE ALGUM NUMERO INTEIRO!\n"); //entrada int
    scanf("%d", &DADOint1);

    printf("DIGITE UM CARACTER!\n"); //entrada char
    scanf(" %c", &DADOchar1); //o espaço antes do %c evita que o scanf leia o seu enter ao enviar o dado da entrada de dados anterior

    printf("DIGITE UM NUMERO DECIMAL!\n"); //entrada float
    scanf("%f", &DADOfloat1);

    printf("1 = %i 2 = %c 3 = %f", DADOint1, DADOchar1, DADOfloat1);
    return 0;
}
