//
#include <stdio.h>
int main(void)

{
int numero, cont=0;
    
    printf("=====TABUADA=====\n");
    printf("Digite um numero: ");
    scanf("%d",&numero);

    for (cont=0; cont<=10 ; cont++)
        {
        printf("%d x %d = %d \n",numero,cont,numero*cont);
        }
return 0;
}
