#include <stdio.h>
#include <stdlib.h>

int bloco(int n);
int main()
{
    int n, m = 1, paridade_ant, paridade, eh_piramidal_alternante = 1;
    printf("Digite quantos digitos ira digitar: \n");
    scanf("%d", &n);
    paridade_ant = bloco(1);
    n--;
    while (n > 0)
    {
        m++;
        if (m > n)
        {
            m = n;
            eh_piramidal_alternante = 0;
        }
        paridade = bloco(m);
        if (paridade == -1 || paridade == paridade_ant)
            eh_piramidal_alternante = 0;
        paridade_ant = paridade;
        n = n - m;
    }
    if (eh_piramidal_alternante == 1)
        printf("A sequencia e piramidal %d-alternante\n", m);
    else
        printf("A sequencia nao e piramidal m-alternante.\n");
    return 0;
}
int bloco(int n)
{
    int num, tem_par = 0, tem_impar = 0;
    while (n > 0)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
            tem_par = 1;
        else
            tem_impar = 1;
        n--;
    }
    if (tem_par && !tem_impar)
        return 0;
    if (tem_impar && !tem_par)
        return 1;
    return -1;
}
