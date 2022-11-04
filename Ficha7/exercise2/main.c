#include <stdio.h>
#include <locale.h>

#include "headers.h"

int main(){
    setlocale(LC_ALL, "portuguese");
    char opcao = '\0';
    int num1 = 0, num2 = 0;
    while(opcao != 'S'){
        num1 = pedeNumero();
        num2 = pedeNumero();
        opcao = menu();
        switch(opcao){
            case '+':
                printf("\nResultado da Soma: %i", soma(num1, num2));
                break;
            case '-':
                printf("\nResultado da subtração: %i", subtracao(num1, num2));
                break;
            case '*':
                printf("\nResultado da multiplicação: %i", multiplicacao(num1, num2));
                break;
            case '/':
                printf("\nResultado da divisão: %.2f", divisao(num1, num2));
                break;
        }
    }

    return 0;
}