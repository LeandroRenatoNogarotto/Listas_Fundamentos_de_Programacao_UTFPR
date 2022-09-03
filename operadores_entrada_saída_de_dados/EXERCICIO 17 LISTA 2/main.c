#include <stdio.h>
#include <stdlib.h>

int main()
{
    float TEMP;
    printf("INSIRA A TEMPERATURA EM CELSIUS!\n");
    scanf("%f", &TEMP);

    TEMP = (((TEMP*9)/5)+32);
    printf("%f\n", TEMP);
    return 0;
}
