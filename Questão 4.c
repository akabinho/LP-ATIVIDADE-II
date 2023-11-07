#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "portuguese");

    int idade;

    printf("Digite sua idade:");
    scanf("%i", &idade);

    if (idade >= 18)
    {
        printf("ACESSO PERMITIDO!");
    }
    else
    {
        printf("ACESSO NEGADO!");
    }


    return 0;
}