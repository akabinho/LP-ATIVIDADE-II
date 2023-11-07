#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n1, n2;

    printf("Digite um numero inteiro:");
    scanf("%i", &n1);

    printf("Digite outro numero inteiro:");
    scanf("%i", &n2);

    if (n1 > n2)
    {
        printf("%i é o maior numero e %i é o menor numero.\n", n1, n2);
    }
    else if (n2 > n1)
    {
        printf("%i é o maior numero e %i é o menor numero.\n", n2, n1);
    }
    else
    {
        printf("Os dois numeros são iguais.\n");
    }
    return 0;
}