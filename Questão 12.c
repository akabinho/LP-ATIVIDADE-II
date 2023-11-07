#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int nota;
    int i;
    float soma = 0;
    float media;

    for (i = 1; i <= 5; i++)
    {
        printf("Escreva nota: \n");
        scanf("%i", &nota);

        soma += nota;
        media = soma / 5;
    }

    printf("Resultado %.1lf \n", media);

    return 0;
}