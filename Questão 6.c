#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int roupas;

    printf("Escolha o produto desejado: \n 1- camisa \n 2- calça \n 3- sapato \n");
    scanf("%i", &roupas);

    switch (roupas)
    {
        case 1:
        printf("Camisa R$80,00");
        break;
        case 2:
        printf("Calça R$60,00");
        break;
        case 3:
        printf("sapato R$140,00");
        break;
    }
    return 0;
}