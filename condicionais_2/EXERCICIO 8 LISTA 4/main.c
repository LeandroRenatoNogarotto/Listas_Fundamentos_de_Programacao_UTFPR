#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, h, l;

    printf("RESTRICOES 1 <= A, B, C, H, L <= 100\n\n");
    printf("Digite as dimensoes da caixa separadas por espacos (a b c): ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Digite as dimensoes da janela separadas por espacos (h l): ");
    scanf("%d %d", &h, &l);


    if ((a <1 || a >100) || (b <1 || b >100) || (c <1 || c >100) || (h <1 || h >100) || (l <1 || l >100))
    {
        printf("entrada invalidas\n");
        return 0;
    }
    else
    {
        if ((h >= a && l >= b)|| (h >= a && l >= c)|| (h >= b && l >= c)|| (h >= b && l >= a)|| (h >= c && l >= a)|| (h >= c && l >= b))
        {
            printf("S");
        }
        else
        {
            printf("N");
        }
    }
    return 0;
}
