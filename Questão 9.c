#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero;
    int i;
    int nPrimo;

    printf("Digite um numero inteiro:");
    scanf("%i", &numero);

    for (i = 2; i <= numero / 2; ++i)
    {
        if (numero % i == 0)
        {
            nPrimo = 0;
            break;
        }
    }
    if (nPrimo)
    {
        printf("o numero é primo\n");
    }
    else
    {
        printf("o numero não é primo\n");
    }
    return 0;
}