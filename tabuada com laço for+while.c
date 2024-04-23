/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
int numero,resposta;
int contador=0;

int main(int argc, char const *argv[])
{
  do 
  
  {

   

system("cls");
printf("tabuada\n\n");
printf("digite o nuemro da tabuada: ");
scanf("%d", &numero);
// a linha a baixo gera um laço finito //
for(contador=0;contador<=10;contador++)
{
    printf("%d x %d = %d\n",numero,contador,numero*contador);
} 
printf("\n1- novo calculo\n");
printf("2- sair\n");
printf("digite a opçao desejada:  ");
scanf("%d", &resposta);

  }while(resposta != 2);

    return 0;

}
