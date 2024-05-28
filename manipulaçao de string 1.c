/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {

    char palavra[100]; // Define um array de caracteres com tamanho suficiente para armazena strings.

    printf("Digite uma palavra:");
    scanf("%99s", palavra); 

    printf("você digitou: %s\n", palavra); 

    return 0;

}

