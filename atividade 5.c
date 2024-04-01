/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h> 


int idade, tempo;



int main(int argc, char const *argv[]) 
{

printf("digite sua idade: \n");
scanf("%d", &idade);
printf("digite seu tempo: \n");
scanf("%d",  &tempo);

if((idade >= 65) || (tempo >= 30) || (idade >= 60 && tempo >= 25))
{
    printf("voce pode se aposentar!");

}
else
{
    printf("voce nao pode se aposentar!");
}


    return 0;
}
