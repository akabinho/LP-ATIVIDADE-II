#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero;

    printf("Digite um número:");
    scanf("%i", &numero);

    while (numero >= 0)
    {
        switch (numero)
        {
            case 0:
            break;
            default:
            printf("%i", numero);
            break;
        }
        numero = numero -1;
    }
    return 0;
}