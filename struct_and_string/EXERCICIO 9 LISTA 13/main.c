#include <stdio.h>
#include <stdlib.h>
typedef char *String;

String cria_senha(String palavra1, String palavra2, int tam_pal1, int tam_pal2);
String le_string(int *tam_str_ptr, String mensagem);
int main(void)
{
    int tam_nome, tam_bairro;
    String nome = le_string(&tam_nome, "Digite seu nome:"),
    bairro = le_string(&tam_bairro, "Digite o bairro que voce mora:"),
    senha;

    senha = cria_senha(nome, bairro, tam_nome, tam_bairro);

    printf("Senha criada: %s\n", senha);

    free(nome);
    free(bairro);
    free(senha);
    return 0;
}

String cria_senha(String palavra1, String palavra2, int tam_pal1, int tam_pal2)
{
    String senha = (String) malloc((tam_pal1 + tam_pal2) * sizeof(char));
    String palavras[] = {palavra1, palavra2};
    int tam_senha = 0, tamanhos[] = {tam_pal1, tam_pal2},i,j,k;
    char letras_min[] = {'a','e','i','o','u'},
    letras_mai[] = {'A','E','I','O','U'};

    for (k = 0; k < 2; k++)
        for (i = 0; i < tamanhos[k]; i++)
            for (j = 0; j < 5; j++)
                if (palavras[k][i] == letras_min[j]
                    || palavras[k][i] == letras_mai[j])
                {
                    senha[tam_senha] = palavras[k][i];
                    tam_senha++;
                }

    senha[tam_senha] = '\0';
    tam_senha++;

    return senha;
}


String le_string(int *tam_str_ptr, String mensagem)
{
    int tam;
    String texto = (String) malloc(2 * sizeof(char));
    char c;

    printf("%s ", mensagem);
    scanf(" %c", &c);

    for (tam = 0; c != '\n'; tam++)
    {
        texto[tam] = c;
        texto = (String) realloc(texto, (tam + 3) * sizeof(char));

        scanf("%c", &c);
    }

    texto[tam + 1] = '\0';

    *tam_str_ptr = tam;
    return texto;
}
