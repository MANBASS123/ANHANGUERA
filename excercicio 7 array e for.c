/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// Função para limpar o buffer do teclado
void limparBuffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    int idades[5];
    float alturas[5];
    int i;

    // Leitura das alturas e idades
    printf("Digite a altura e a idade de 5 pessoas:\n");
    for (i = 0; i < 5; i++) {
        printf("Pessoa %d\n", i + 1);
        printf("Altura (em metros): ");
        scanf("%f", &alturas[i]);
        limparBuffer();  // Limpar buffer após leitura de altura
        printf("Idade: ");
        scanf("%d", &idades[i]);
        limparBuffer();  // Limpar buffer após leitura de idade
    }

    // Exibição das alturas e idades na ordem inversa
    printf("\nAlturas e idades na ordem inversa:\n");
    for (i = 4; i >= 0; i--) {
        printf("Pessoa %d - Altura: %.2f metros, Idade: %d\n", i + 1, alturas[i], idades[i]);
    }

    return 0;
}




