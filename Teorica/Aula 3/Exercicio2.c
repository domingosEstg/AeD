#include <stdio.h>
int main()
{
    char estCivil;
    printf("Qual é o estado Civil?\n");
    estCivil = getchar();
    switch (estCivil)
    {
    case 'S':
    case 's':
        printf("Solteiro");
        break;
    case 'C':
    case 'c':
        printf("Casado");
        break;
    case 'D':
    case 'd':
        printf("Divorciado");
        break;
    case 'V':
    case 'v':
        printf("Viúvo");
        break;
    default:
        printf("Estado Civil Incorrecto");
        break;
    }
}