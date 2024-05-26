/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int vetor1[5], vetor2[5], vetor3[10];
    int i, j = 0;

    // Leitura do primeiro vetor
    printf("Digite 5 numeros para o primeiro vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("Numero %d:" , i + 1);
        scanf("%d", &vetor1[i]);

    }

    // Leitura do segundo vetor

    printf("\nDigite 5 numeros para o segundo vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor2[i]);

    }

    // Intercalando os vetores no terceiro vetor
    for (i = 0; i < 5; i++) {
        vetor3[j++] = vetor1[i];
        vetor3[j++] = vetor2[i];

    }

    // Exibição do terceiro vetor
    printf("\nTerceiro vetor com elementos intercalados:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor3[i]);

    }
    printf("\n");

    return 0;

}