#include <stdio.h>

int main(void)
{
	int numero;

	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);

	numero = numero % 10;

	printf("O ultimo digito eh: %d\n\n", numero);

	return 0;
}
