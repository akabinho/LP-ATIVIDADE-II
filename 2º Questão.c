/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    int desconto;
    float preço =0;
    int dia =0;
    float valorPago
    
    printf("Digite o valor qe será comprado: \n");
    scanf("%f", &preço);
    
    printf("Digite (S) para dia da semana e (FDS) para final de semana: \n");
    scanf("%i", &dia);
    
    switch (dia){
    case 1:
    if(preço > 100){
        desconto = 0.10;
    }
    break;
    case 2:
    if(preço > 100){
        desconto = 0.15;

    }
    break;
    }
    
    valorPago = preço - (preço * desconto);
    
    system("cls || clear");
    
    printf("Valor total a ser pago: %.2f|n, valorPago");
    printf("vallor do desconto: %.2f\n * desconto");
    
    return 0;
}
