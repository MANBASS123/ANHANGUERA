/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
    
    int codigo_produto, quantidade;
    float valor_unitario,valor_total;
    
    
    printf("bem vindo ao renatao de 4\n");
    printf("listagem de cardapio\n");
    printf("100 - cachorro quente -> R$1,20\n");
    printf("101 - bauru simples -> R$1,30\n");
    printf("102 - bauru com ovo -> R$1,50\n");
    printf("103 - hambuguer -> R$1,20\n");
    printf("104 - chesseburguer -> R$1,70\n");
    printf("105 - suco -> R$2,20\n");
    printf("106 - refrigerente -> R$1,00\n");
    
    
    printf("digite o codigo do produto:\n");
    scanf("%d", &codigo_produto);
    
    
    switch(codigo_produto)
    {
        case 100:
        valor_unitario = 1.20 ;
        break;
        
          case 101:
        valor_unitario = 1.30 ;
        break;
        
        
         case 102:
        valor_unitario = 1.50 ;
        break;
        
         case 103:
        valor_unitario = 1.20 ;
        break;
        
         case 104:
        valor_unitario = 1.70 ;
        break;
        
         case 105:
        valor_unitario = 2.20 ;
        break; 
        
         case 106:
        valor_unitario = 1.00 ;
        break;
        
        
        default:
        
        printf("produto nao resgistrado no sistema.");
        system("pause");
        
        return 0;
        
    }
    
    
    printf("digite a quantidade:\n");
       
       scanf("%d", &quantidade);

       valor_total=valor_unitario * quantidade;

    printf("valor total => R$ %.2f\n",valor_total);

    system("pause");
    
    
    
    
    
    

    return 0;
}

