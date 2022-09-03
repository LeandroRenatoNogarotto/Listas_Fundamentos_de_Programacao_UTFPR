#include <stdio.h>

int main(void)
{
	int n, m, resultado, qtd_espacos = 3, qtd_espacos_retirar, i ,j,s;

	printf("Digite dois numeros naturais separados por espacos: ");
	scanf("%d %d", &n, &m);

	for ( i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			resultado = i * j;

			if (resultado / 10 >= 10)
				qtd_espacos_retirar = 2;
			else if (resultado / 10 >= 1)
				qtd_espacos_retirar = 1;
			else
				qtd_espacos_retirar = 0;

			printf("%d", i * j);
			for ( s = 0; s < qtd_espacos - qtd_espacos_retirar; s++)
				printf(" ");
		}

		printf("\n");
	}

	return 0;
}
