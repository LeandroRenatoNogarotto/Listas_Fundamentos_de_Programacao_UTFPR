#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int rnumber1=0, rnumber2=0, rop_aritimetico=0,resultado=0, resposta=0;
    clock_t t;
    clock_t tempo;

    srand(time(NULL));
    rnumber1 = rand() %100 +1;
    rnumber2 = rand() %100 +1;
    rop_aritimetico = rand() %5;


    if(rop_aritimetico==0)
    {
        resultado = rnumber1+rnumber2;
        t = clock();
        tempo = time(NULL);
        printf("ola usuario digite o resultado da operacao %d + %d = ?\n", rnumber1, rnumber2);
        scanf("%d", &resposta);
        t = clock() - t;
    }

    else if(rop_aritimetico==1)
    {
        resultado = rnumber1-rnumber2;
        t = clock();
        tempo = time(NULL);
        printf("ola usuario digite o resultado da operacao %d - %d = ?\n", rnumber1, rnumber2);
        t = clock()-t;
        scanf("%d", &resposta);
    }

    else if(rop_aritimetico==2)
    {
        resultado = rnumber1*rnumber2;
        t = clock();
        tempo = time(NULL);
        printf("ola usuario digite o resultado da operacao %d * %d = ?\n", rnumber1, rnumber2);
        t = clock()-t;
        scanf("%d", &resposta);
    }
    else if(rop_aritimetico==3)
    {
        resultado = rnumber1/rnumber2;
        t = clock();
        tempo = time(NULL);
        printf("ola usuario digite o resultado da operacao %d / %d = ?\n", rnumber1, rnumber2);
        t = clock()-t;
        scanf("%d", &resposta);
    }

    else
    {
        resultado = rnumber1%rnumber2;
        t = clock();
        tempo = time(NULL);
        printf("ola usuario digite o resultado da operacao resto  de %d / %d = ?\n", rnumber1, rnumber2);
        t = clock()-t;
        scanf("%d", &resposta);
    }


    if(resposta==resultado)
    {
        printf("parabens voce acertou em cheio\n\n");
    }
    else
    {
        printf("que pena voce errou a conta\n\n");
    }

    printf("Tempo de execucao: %d\n", t);
    printf("Tempo de execucao: %lf\n", ((double)t)/((CLOCKS_PER_SEC/1000000)));
    printf("Tempo de execucao: %ld", time(NULL)-tempo);
    return 0;

}
