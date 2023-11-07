#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int comando;

    printf("1 - Novo Jogo \n");
    printf("2 - Carregar Jogo \n");
    printf("3 - Configurações \n");
    scanf("%i", &comando)

    switch (comando)
    {
        case 1:
        printf("Novo Jogo Criado \n");
        break;

        case 2:
        printf("Carregando Dados \n");
        break;

        case 3:
        printf("Configurações \n");
        break;
    }
    return 0;  
}