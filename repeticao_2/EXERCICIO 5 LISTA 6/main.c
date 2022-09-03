#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura_Ze=1.10, altura_Chico=1.50;
    int anos=0;

    while(altura_Ze<=altura_Chico)
    {
        altura_Ze+=0.03;
        altura_Chico+=0.02;
        anos++;
    }
    printf("serao necessarios %d anos para que Ze seja maior que Chico", anos);
    return 0;
}
