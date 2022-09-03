#include <stdio.h>
#include <stdlib.h>

int main()
{
    int SEGUNDOS, DIAS, HORAS, MINUTOS;

    printf("DIGITE QUANTOS SEGUNDOS\n");
    scanf("%i", &SEGUNDOS);

    DIAS = SEGUNDOS/86400;
    SEGUNDOS = SEGUNDOS - (DIAS*86400);
    HORAS = (SEGUNDOS/3600);
    SEGUNDOS = SEGUNDOS - (HORAS*3600);
    MINUTOS = (SEGUNDOS/60);
    SEGUNDOS = SEGUNDOS- (MINUTOS*60);
    printf(" %i dias %i horas %i minutos %i segundos",  DIAS, HORAS, MINUTOS, SEGUNDOS);
    return 0;
}
