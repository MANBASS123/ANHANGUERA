/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
     float notas[4];
     float soma = 0.0, media;
     int i;

     // leitura das notas
     printf("Digite 4 notas:\n");
     for (i = 0; i < 4; i++) {
          printf("Nota %d: ", i + 1);
          scanf("%f", &notas[i]); 
          soma += notas[i];
     }

     // calculo da media
      media = soma / 4;

      // exibiçao das notas
      printf("\nAs notas digitadas foram:\n");
      for (i = 0; i < 4; i++) {
          printf("Nota %d: %.2f\n", i + 1, notas[i]);

      }

      // exibição da media 
      printf("\nA media das notas e: %.2f\n", media);

      return 0;

}
