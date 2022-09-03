#include <stdio.h>
#include <stdlib.h>

int main()
{   int i=0, j=1, cont=0;

        while(1)
        {
            cont=0;
            for(i=1;i<=20;i++)
            {
                if(j%i==0)
                {
                    cont++;
                }
                 else
                {
                    break;
                }
                if(cont==20)
                {
                    printf("o menor número divisível por cada um dos números de 1 a 20 eh: %d", j);
                    return 0;
                }
            }
        j++;
        }

    return 0;
}
