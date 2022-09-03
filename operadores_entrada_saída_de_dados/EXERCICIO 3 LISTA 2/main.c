#include <stdio.h>
#include <stdlib.h>

int main()
{
    char DADOchar1;
    int DADOint1;
    float DADOfloat1;
    printf("OLA USARIO DIGITE UM CARACTERE !\n"); //entrada char
    scanf("%c", &DADOchar1);

    printf("DIGITE UM NUMERO INTEIRO!\n"); //entrada int
    scanf("%d", &DADOint1);

    printf("DIGITE UM NUMERO DECIMAL!\n"); //entrada float
    scanf("%f", &DADOfloat1);

    printf("1 = %c 2 = %d 3 =%f", DADOchar1, DADOint1, DADOfloat1);
    return 0;
}
