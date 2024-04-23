/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main() {

    int n;
    long long fatorial = 1; 

    

    printf("digite um numero inteiro nao negativo para calcular seu fatorial:");
    scanf("%d" , &n);

    if (n < 0) {
        printf("numero invalido. o fatorial e definido apenas para numeros nao negativos.\n");
    } else {

        int i = n;
        while (i > 1) {
            fatorial *= i; 
             i--; 

        }


        
        printf("o fatorial de %d e %lld\n", n, fatorial);
    }

    return 0;

}
