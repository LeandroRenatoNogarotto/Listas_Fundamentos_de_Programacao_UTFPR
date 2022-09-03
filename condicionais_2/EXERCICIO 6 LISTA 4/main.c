#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x, y;

    printf("Digite as coordenadas do ponto de contato separadas por virgula (x,y): \n");
    scanf("%d,%d", &x, &y);

    if(x < 0 || y<0)
    {
        printf("entrada invalida\n");
        return 0;
    }
    else
    {
        if (x > 432 || y > 468)
        {
            printf("f\n");
        }
        else
            printf("d\n");

        return 0;
    }
}

