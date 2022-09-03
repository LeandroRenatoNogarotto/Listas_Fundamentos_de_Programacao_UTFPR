#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int horas;
    int minutos;
    int segundos;
} Tempo;

Tempo fango(int segundos)
{
    Tempo gustavao;
    gustavao.horas = segundos/3600;
    segundos = segundos%3600;
    gustavao.minutos = segundos/60;
    segundos = segundos%60;
    gustavao.segundos= segundos;

    return gustavao;
}

int main()
{
    Tempo tempo;
    int segundos;
    printf("Digete os segundos\n");
    scanf("%d", &segundos);
    tempo = fango(segundos);
    printf("%d %d %d", tempo.horas, tempo.minutos, tempo.segundos);
    return 0;
}
