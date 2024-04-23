/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {

    int numAlunos;
    float peso, somaPesos  = 0.0, mediaPeso;
    int contador = 0;

    // perguntar ao usuario o numero de alunos na academia
    printf("quantos alunos voce tem em sua academia? ");
    scanf("%d", &numAlunos);

    // verificar se o numero de alunos e valido
    if (numAlunos <= 0) {
        printf("numero de alunos invalido.\n");
        return 1; // encerra o programa com codigo de erro
    }

     // receber o peso de cada aluno
     while (contador < numAlunos) {

        printf("digite o peso do aluno %d (em kg):", contador + 1);
        scanf("%f", &peso);
        somaPesos += peso;
        contador++;
     }

      // calcular a media de peso dos alunos
       mediaPeso = somaPesos / numAlunos;

       // Exibir a media de peso
       printf("a media de peso dos alunos e: %.2f kg\n", mediaPeso);

       return 0;

}
