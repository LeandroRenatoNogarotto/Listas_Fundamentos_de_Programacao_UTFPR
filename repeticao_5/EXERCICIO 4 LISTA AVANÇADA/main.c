#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero_1, numero_2, dnum1_1, dnum1_2,
        dnum1_3, dnum2_1, dnum2_2, dnum2_3;

    while (numero_1>0 || numero_2>0)
    {
        printf("Ola usuario digite um numero!\n");
        scanf("%d", &numero_1);
        printf("digite outro numero!\n");
        scanf("%d", &numero_2);

        if(numero_1<0 || numero_2<0)
        {
            return 0;
        }
        dnum1_1 = numero_1%10;
        dnum1_2 = ((numero_1/10)%10);
        dnum1_3 = ((numero_1/100)%10);

        dnum2_1 = numero_2%10;
        dnum2_2 = ((numero_2/10)%10);
        dnum2_3 = ((numero_2/100)%10);

        if ((dnum1_1==dnum2_1 || dnum1_1==dnum2_2 || dnum1_1==dnum2_3)&& (dnum1_2==dnum2_1 || dnum1_2==dnum2_2 || dnum1_2==dnum2_3)&& (dnum1_3==dnum2_1 || dnum1_3==dnum2_2 || dnum1_3==dnum2_3))
        {
            printf("%d eh permutacao de %d\n", numero_1, numero_2);
        }
        else
        {
            printf("%d NAO eh permutacao de %d\n", numero_1, numero_2);
        }
    }
    return 0;
}
