/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
     int vetor[5];
     int i;

     // Leitura dos numeros para o vetor
     printf("digite 5 numeros inteiros:\n");
     for (i = 0; i < 5; i++) {
          printf("numeros %d: ", i + 1);
          scanf("%d", &vetor[i]);

     }

     // Exibiçao dos numeros do vetor

     printf("\nOs numeros do vetor");
     for (i = 0; i < 5; i++) {
          printf("%d", vetor[i]);

     }

     printf("\n");

     return 0;

}

