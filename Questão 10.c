#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n1; 
    int n2;
    int soma=0;
    int sub=0;
    int op;

    printf("Digite o primeiro numero:");
    scanf("%i", &n1);

    printf("Digite o segundo numero:");
    scanf("%i", &n2);

    printf("Escolha a operação, digite 1 para (+) e 2 para (-)");
    scanf("%i", &op);

    switch (op)
    {
        case 1:
        soma = n1 + n2;
        printf("Resultado da operação: %i", soma);
        break;

        case 2:
        sub = n1 - n2
        printf("Resultado da operação: %i", sub);
        break;
    }
    return 0;
}