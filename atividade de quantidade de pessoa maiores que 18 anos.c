/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade; 4
    int contador = 0; // inicializa o contador de pessoas maiores 18
    int i = 0; // inicializa a variavel de controle do loop
    
     printf("digite a idade de 5 pessoas:\n");
      
      while ( i < 5) {
          printf("pessoa %d: " , i+1);
          scanf("%d", &idade);
          
          if(idade > 18) {
              
              contador++;
              
              
          }
          
          i++;
          
          
      }
          
          printf("quantidade de pessoas maiores que 18: %d\n", contador);
    
    return 0;
    
}

