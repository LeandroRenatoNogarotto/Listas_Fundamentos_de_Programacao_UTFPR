#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define ALUNOS 5

void le_gabarito(char gabarito[], int tamanho);
void imprime_vetor(char vetor[], int tamanho);
void imprime_matriz(char matriz[][TAM], int lin, int col);
void gera_respostas_alunos(char resp_alunos[][TAM], int lin, int col);
void corrige(char gabarito[], char resp_alunos[][TAM], int lin, int col, int resultados[]);

int main(void)
{
    char gabarito[TAM], resp_alunos[ALUNOS][TAM];
    int resultados[ALUNOS],i;

    le_gabarito(gabarito, TAM);
    gera_respostas_alunos(resp_alunos, ALUNOS, TAM);

    corrige(gabarito, resp_alunos, ALUNOS, TAM, resultados);

    printf("Gabarito informado:\n");
    imprime_vetor(gabarito, TAM);

    printf("Respostas alunos:\n");
    imprime_matriz(resp_alunos, ALUNOS, TAM);

    for (i = 0; i < 5; i++)
        printf("Pontuacao aluno %d: %d\n", i, resultados[i]);

    return 0;
}

void corrige(char gabarito[], char resp_alunos[][TAM], int lin, int col, int resultados[])
{
    int pont_aluno = 0,i,j;

    for (i = 0; i < lin; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (resp_alunos[i][j] == gabarito[j])
                pont_aluno++;
        }

        resultados[i] = pont_aluno, pont_aluno = 0;
    }
}

void imprime_vetor(char vetor[], int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
        printf("%c ", vetor[i]);

    printf("\n");
}



void le_gabarito(char gabarito[], int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("Digite a resposta (a, b, c, d) da questao %d: ", i);
        scanf(" %c", &gabarito[i]);
    }
}


void imprime_matriz(char matriz[][TAM], int lin, int col)
{
    int i;
    for (i = 0; i < lin; i++)
        imprime_vetor(matriz[i], col);
}

void gera_respostas_alunos(char resp_alunos[][TAM], int lin, int col)
{
    int i,j;
    for (i = 0; i < lin; i++)
        for (j = 0; j < col; j++)
            resp_alunos[i][j] = rand() % 5 + 'a';
}

