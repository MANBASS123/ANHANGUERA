/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero_mes;

 while (1) {

     printf("digite o numero do mes (entre 1 e 12): ");
     scanf("%d", &numero_mes);


     if (numero_mes >= 1 && numero_mes <= 12) {

        switch(numero_mes) {

        case 1:
        printf("janeiro\n");
         break;

        case 2:
        printf("fevereiro\n");

        case 3:
        printf("marco\n");
        break;

        case 4:
        printf("abril\n");
        break;
        
        case 5:
        printf("maio\n");
        break;

        case 6:
          printf("junho\n");
          break;

          case 7:
            printf("julho\n");
            break;  
        
        case 8:
          printf("Agosto\n");
          break;

        case 9:
          printf("setembro\n");
        break;

          case 10:
          printf("outubro\n");
          break;


          case 11:
          printf("novembro\n");
          break;

          case 12:
          printf("dezembro\n");
          break;


        }

        break;

     } else {
        printf("valor invalido por favor, digite um numero entre 1 e 12,\n");
     }
 }

  return 0;

}

    
