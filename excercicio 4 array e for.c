/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

int main() {
     char caracteres[10];
     int i, consoantes = 0;
     char consoantesLidas[10];

     // Leitura dos caracteres
     printf("Digite 10 caracteres:\n");
     for (i = 0; i < 10; i++) {
          printf("Caracter %d:  ", i + 1);
          scanf(" %c", &caracteres[i]);
          caracteres[i] = tolower(caracteres[i]); // convertendo para minuscula para facilitar a verificação
          }
          // Verificação de consoantes
          for (i = 0; i < 10; i++) {
               if(isalpha(caracteres[i]) &&
                caracteres[i] != 'a' && caracteres[i] != 'e' &&
                caracteres[i] != 'i' && caracteres[i] != 'e' &&
                caracteres[i] != 'u') {
                consoantesLidas[consoantes] = caracteres[i];
                consoantes++;

                }
          }


          // Exibição dos resultados
          printf("\nForam lidas %d consoantes. \n", consoantes);
          if (consoantes > 0) {
               printf("As consoantes  lidas foram: ");
               for (i = 0; i < consoantes; i++) {
                     printf("%c ", consoantesLidas[i]);
               }
               printf("\n");
          } else {
               printf("Nenhuma consoante foi lida.\n");
          }

          return 0;
     
}