#include <stdio.h>
#include <stdlib.h>

struct funcionario
{
    int mat; // matricula do funcionario
    char nome; // inicial do nome do funcionario
    int sup; // matricula do superior imediato
};
typedef struct funcionario Funcionario;

Funcionario* registra_funcionarios(int qtd_funcionarios);
void imprime_funcionarios(Funcionario* funcionarios_vet, int qtd_funcionarios);
int Indice_funcionario(Funcionario* vet, int n, int mat);
Funcionario** transforma_vet_pont(Funcionario vet_func[], int qtd_func);
Funcionario* determinaSubordinado(Funcionario** vet, int n, int mat, int *pTam);

int main(void)
{
    Funcionario *funcionarios, **funcionarios_pont, *subordinados;
    int qtd_func, func_procurado, pos_func_proc, sup_procurado, qtd_subord;

    printf("Quantos funcionarios? ");
    scanf("%d", &qtd_func);

    funcionarios = registra_funcionarios(qtd_func);

    printf("Funcionarios cadastrados:\n");
    imprime_funcionarios(funcionarios, qtd_func);

    printf("Qual funcionario voce deseja achar? ");
    scanf("%d", &func_procurado);

    pos_func_proc = Indice_funcionario(funcionarios, qtd_func, func_procurado);
    printf("%d\n", pos_func_proc);

    funcionarios_pont = transforma_vet_pont(funcionarios, qtd_func);

    printf("De qual superior voce deseja saber quem sao os subordinados? ");
    scanf("%d", &sup_procurado);

    subordinados = determinaSubordinado(funcionarios_pont, qtd_func, sup_procurado, &qtd_subord);

    printf("Subordinados de %d:\n", sup_procurado);
    imprime_funcionarios(subordinados, qtd_subord);

    free(funcionarios);
    free(funcionarios_pont);
    free(subordinados);
    return 0;
}

Funcionario* registra_funcionarios(int qtd_funcionarios)
{
    int i;
    Funcionario *funcionarios = (Funcionario *) malloc(qtd_funcionarios * sizeof(Funcionario));

    for ( i = 0; i < qtd_funcionarios; i++)
    {
        printf("Digite a matricula do funcionario %d, sua inicial do nome e a matricula de seu superior (111 c 222): ", i);
        scanf("%d %c %d", &funcionarios[i].mat, &funcionarios[i].nome, &funcionarios[i].sup);
    }

    return funcionarios;
}

void imprime_funcionarios(Funcionario* funcionarios_vet, int qtd_funcionarios)
{
    int i;
    for (i = 0; i < qtd_funcionarios; i++)
        printf("Funcionario %d:\n\tNome: %c\n\tSuperior: %d\n\n",
               funcionarios_vet[i].mat, funcionarios_vet[i].nome, funcionarios_vet[i].sup);
}

int Indice_funcionario(Funcionario* vet, int n, int mat)
{
    int i;
    for (i = 0; i < n; i++)
        if (vet[i].mat == mat)
            return i;

    return -1;
}

Funcionario** transforma_vet_pont(Funcionario vet_func[], int qtd_func)
{
    int i;
    Funcionario **vet_pont_func = (Funcionario **) malloc(qtd_func * sizeof(Funcionario *));

    for (i = 0; i < qtd_func; i++)
        vet_pont_func[i] = &vet_func[i];

    return vet_pont_func;
}

Funcionario* determinaSubordinado(Funcionario** vet, int n, int mat, int *pTam)
{
    int i;
    Funcionario *subordinados = (Funcionario *) malloc(n * sizeof(Funcionario));
    *pTam = 0;

    for (i = 0; i < n; i++)
        if (vet[i]->sup == mat)
            subordinados[*pTam] = *vet[i],
                                  (*pTam)++;

    subordinados = (Funcionario *) realloc(subordinados, *pTam * sizeof(Funcionario));

    if (*pTam == 0)
        *pTam = -1;

    return subordinados;
}
