#include <stdio.h>

int main(void)
{
    int dia_hoje, mes_hoje, ano_hoje, dia_nasc, mes_nasc, ano_nasc, dia_da_semana, j=0, k=0, q=0, m=0;
    long int dias_ate_hoje, dias_ate_nasc, diff_dias;

    printf("Digite sua data de nascimento (formato dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia_nasc, &mes_nasc, &ano_nasc);

    printf("Digite a data de hoje (formato ddmm/aaaa): ");
    scanf(" %d/%d/%d", &dia_hoje, &mes_hoje, &ano_hoje);

    dias_ate_hoje = (dia_hoje) + (mes_hoje * 30) + (ano_hoje * 365);
    dias_ate_nasc = (dia_nasc) + (mes_nasc * 30) + (ano_nasc * 365);

    if (dias_ate_hoje< dias_ate_nasc)
    {
        printf("entrada de dados invalida\n");
        return 0;
    }

    else
    {
        diff_dias = dias_ate_hoje - dias_ate_nasc;

        printf("Voce tem %ld anos, %ld meses e %ld dias\n", (diff_dias / 365), (diff_dias%365)/30, ((diff_dias%365)%30));

        if (mes_nasc < 3)
        {
            mes_nasc += 12;
            ano_nasc -= 1;
        }

            j = ano_nasc / 100;
            k = ano_nasc % 100;
            q = dia_nasc;
            m = mes_nasc;

        dia_da_semana = (q + ((m + 1) * 26) / 10 + k + k / 4 + j / 4 + 5 * j) % 7;

        if (dia_da_semana == 0)
        {
            printf("Voce nasceu num sabado");
        }
        else if (dia_da_semana == 1)
        {
            printf("Voce nasceu num domingo");
        }
        else if (dia_da_semana == 2)
        {
            printf("Voce nasceu numa segunda");
        }
        else if (dia_da_semana == 3)
        {
            printf("Voce nasceu numa terca");
        }
        else if (dia_da_semana == 4)
        {
            printf("Voce nasceu numa quarta");
        }
        else if (dia_da_semana == 5)
        {
            printf("Voce nasceu numa quinta");
        }
        else
        {
            printf("Voce nasceu numa sexta");
        }
    }
    printf("\n\n");
    return 0;
}
