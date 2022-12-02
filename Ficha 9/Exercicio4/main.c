#include <stdio.h>
#include <string.h>

typedef struct titular {
    char nome[100];
    int cc;
    char morada[100];
} TITULAR;

typedef struct conta {
    TITULAR t;
    int codigo;
    float saldo;
} CONTA;

CONTA criarConta() {
    CONTA contat;
    fflush(stdin);
    printf("Introduza o nome do titular\n");
    scanf("%s",contat.t.nome);
    printf("Introduza a morada do titular\n");
    scanf("%s",contat.t.morada);
    printf("Indtroduza o cc do titulas\n");
    scanf("%i", &contat.t.cc);

    printf("Introduza o codigo da conta\n");
    scanf("%i", &contat.codigo);
    printf("Introduza o saldo da conta\n");
    scanf("%f", &contat.saldo);
    return contat;
}

void apresentarConta(CONTA contas[]) {
    int codConta;
    printf("Introduza o codigo da conta :\n");
    scanf("%i", &codConta);
    for (int i = 0; i < 10; i++) {
        if (codConta == contas[i].codigo) {
            printf("%s | %.2f", contas[i].t.nome, contas[i].saldo);
            return;
        }
    }
}

void modificaSaldo(CONTA contas[]) {
    int codConta;
    printf("Introduza o codigo da conta :\n");
    scanf("%i", &codConta);
    for (int i = 0; i < 10; i++) {
        if (codConta == contas[i].codigo) {
            printf("Introduza o novo saldo \n");
            scanf("%f", &contas[i].saldo);
        }
    }
}


int main() {
    CONTA contas[10];
    int qtContas = 0;
    while (1) {
        printf("\n 1 - Criar Conta");
        printf("\n 2 - Apresentar a informação de uma conta");
        printf("\n 3 - Alterar saldo de uma conta");
        printf("\n 4 - Sair");
        printf("Introduza uma opcao: ");
        int opcao;
        scanf("%i", &opcao);
        switch (opcao) {
            case 1:
                contas[qtContas++] = criarConta();
                break;
            case 2:
                apresentarConta(contas);
                break;
            case 3:
                modificaSaldo(contas);
                break;
            case 4:
                return 0;
        }
    }
    return 0;
}
