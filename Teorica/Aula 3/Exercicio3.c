int main()
{
    int num1;
    int num2;
    char operator;
    int result;

    printf("Introduza o primeiro numero: \n");
    scanf("%d", num1);
    printf("Introduza o segundo numero: \n");
    scanf("%d", num2);
    printf("Qual a operacao a efectuar: (+,-,X,:)");
    operator= scanf("%c", &operator);
    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case ':':
        result = num1 + num2;
        break;
    case 'X':
        result = num1 + num2;
        break;
    }
    printf("O resultado da operação %d %c %d e : %d", num1, operator, num2, result);
}