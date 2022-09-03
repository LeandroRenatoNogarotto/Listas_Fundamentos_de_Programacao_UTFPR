#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, aux=0;

    printf("ola usuario digite um numero inteiro\n");
    scanf("%d",&numero);
    printf("numero de 1 a 100 que dividos por %d deixam resto 2:\n", numero);
    for(aux=1; aux<=100;aux++ )
      {
       if(aux%numero==2){
        printf("\t %d\n",aux);
        }
        }
        return 0;
}
