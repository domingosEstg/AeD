#include <stdio.h>
#include "headers.h"

char menu() {
    printf("\n+ : Soma");
    printf("\n- : Subtração");
    printf("\n* : Multiplicação");
    printf("\n/ : Divisão");

    char opcao;
    printf("\nEscolha: ");
    scanf(" %c", &opcao);

    return opcao;
}
int pedeNumero(){
    int temp;
    printf("\nIntroduza um número: ");
    scanf("%i", &temp);
    return temp;
}

int soma(int a, int b){
    return a + b;
}

int subtracao(int a, int b){
    return a - b;
}

int multiplicacao(int a, int b){
    return a * b;
}

float divisao(int a, int b){
    return (float)a / b;
}