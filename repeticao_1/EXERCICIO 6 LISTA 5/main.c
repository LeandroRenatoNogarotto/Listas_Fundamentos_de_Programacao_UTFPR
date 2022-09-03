#include <stdio.h>
#include <stdlib.h>

//O ULTIMO RESULTADO CORRETO QUE PODE SER ALCANÇADO É 12!, ISSO OCORRE POR UMA LIMITAÇÃO DE CASAS
//DECIMAIS NO TIPO DE VARIAVEL INT

int main()
{
    int numero=0, aux=0, fatorial=0;
    printf("Ola usuario digete um numero para receber seu respectivo fatorial!\n");
    scanf("%d", &numero);

    fatorial= numero;

    for(aux=1; aux<numero; aux++)
    {
        fatorial *= aux;
    }

    printf("O fatorial de %d eh %d\n\n", numero, fatorial);
    return 0;
}
