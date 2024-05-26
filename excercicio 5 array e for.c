/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numeros[5];
    int pares[5], impares[5];
    int i, numPares = 0, numImpares = 0;

    // Leitura dos números inteiros
    printf("Digite 5 números inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);

        // Verificação se o número é par ou ímpar e armazenamento nos vetores correspondentes
        if (numeros[i] % 2 == 0) {
            pares[numPares] = numeros[i];
            numPares++;
        } else {
            impares[numImpares] = numeros[i];
            numImpares++;
        }
    }

    // Exibição dos vetores
    printf("\nVetor de números digitados:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    printf("\nVetor de números pares:\n");
    for (i = 0; i < numPares; i++) {
        printf("%d ", pares[i]);
    }
    printf("\n");

    printf("\nVetor de números ímpares:\n");
    for (i = 0; i < numImpares; i++) {
        printf("%d ", impares[i]);
    }
    printf("\n");

    return 0;
}

