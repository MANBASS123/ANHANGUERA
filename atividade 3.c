/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    
    //variaveis//
    
int nota1, nota2, nota3, nota4, media;

    // entrada de saida//
    
    printf("digite a primeira nota do aluno:") ;
    scanf("%d", &nota1);
    
    printf("digite a segunda nota do aluno:") ;
    scanf("%d",&nota2);
    
    printf("digite a terceira nota do aluno: ") ;
    scanf("%d",&nota3);
    
    printf("digite a quarta nota do aluno");
    scanf("%d",&nota4);
    
    
    //processamento//
    
    media= (nota1 + nota2 + nota3 + nota4) /4 ;
    
    //saida//
    
    printf("media do aluno = %d\n", media);

    if(media >= 9) {
        printf("aprovado"); 
        
    }
         else (media <= 8); {
        printf("recuperação");
    
    } 
        
    
  
}

