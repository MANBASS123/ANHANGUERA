/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main() {
    char nome[100]; // Define um array de caracteres para armazenar o nome

    printf("Digite um nome: ");
    scanf("%99s", nome); // lê o nome digitado pelo usuario, limitado a 99 caracteres para evitar overflow

    // Verifica se a primeira letra do nome é 'A'
    if (nome[0] == 'A' || nome[0] == 'a') {
        printf("voce digitou um nome que começa com 'A': %s\n", nome);
    } else {
        printf("O nome não começa com  'A' . \n");
    }

    return 0;

}