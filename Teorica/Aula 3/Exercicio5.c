int main()
{
    int code;
    printf("Introduza o codigo da disciplina do 1º ano\n");
    scanf("%d", &code);
    switch (code)
    {
    case 3010401:
        printf("Algoritmia e programacao");
        break;
    case 3010402:
        printf("Arquitectura e Sistema de Computadores");
        break;
    case 3010403:
        printf("Desenho e Oficinas de Electrónica");
        break;
    case 3010408:
        printf("Eletrónica I");
        break;
    case 3010404:
        printf("Física");
        break;
    case 3010405:
        printf("Inglês Técnico");
        break;
    case 3010409:
        printf("Lógica Programável");
        break;
    case 3010410:
        printf("Manutenção de Sistemas Electronicos");
        break;
    case 3010411:
        printf("Quimica");
        break;
    case 3010412:
        printf("Sistemas Digitais");
        break;
    case 3010413:
        printf("Sistemas Operativos");
        break;
    case 3010406:
        printf("Teoria de Circuitos e Sinais");
        break;
    case 3010414:
        printf("Técnicas de Expressão Oral e Escrita");
        break;
    case 3010407:
        printf("Tópicos de Matemática");
        break;
    default:
        break;
    }
}