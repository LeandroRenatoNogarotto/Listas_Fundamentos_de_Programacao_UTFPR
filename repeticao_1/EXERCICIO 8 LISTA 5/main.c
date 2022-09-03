#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aux=0;
    for(aux=1000; aux<=9999; aux++)
    {
        if ( (aux/100+aux%100)*(aux/100+aux%100)==aux)
        {
        printf("\t %d \n", aux);
        }
    }
    return 0;
}


/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d1, d2, d3, d4 , d5, i;

    for(i=1000; i<=9999; i++)
    {
        d1 = i %10;
        d2 = (i %100- d1)/10;
        d3 = (i %1000- d1 - d2*10)/100;
        d4 = (i %10000- d1 - d2*10- d3*100)/1000;

        d5= d1+d2*10 + d3+d4*10;

        if (d5*d5== i)

        {

            printf("%d\n", i);
        }
    }
}
*/
