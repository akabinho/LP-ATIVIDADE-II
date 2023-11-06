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
    
    int temperatura;
    
    printf("Informe a temperatura que está agora:");
    scanf("%i", &temperatura);
    
    if (temperatura > 25)
    {
        printf("Clima está ensolarado!");
    }
    else if (temperatura < 15)
    {
        printf("Clima será chuvoso!");
    }
    else if (temperatura > 15 && temperatura < 25)
    {
        printf("Clima será nublado!");
    }
    
    return 0;
}
