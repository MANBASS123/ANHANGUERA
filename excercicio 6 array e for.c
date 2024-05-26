/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numeros[5];
    int i, busca, encontrado = 0;

    // Leitura dos números inteiros
    printf("Digite 5 números inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Solicitar o número para busca
    printf("\nDigite um número para buscar: ");
    scanf("%d", &busca);

    // Verificação se o número está no array
    for (i = 0; i < 5; i++) {
        if (numeros[i] == busca) {
            encontrado = 1;
            break;
        }
    }

    // Exibir o resultado da busca
    if (encontrado) {
        printf("O número %d está no array.\n", busca);
    } else {
        printf("O número %d não está no array.\n", busca);
    }

    return 0;
}
