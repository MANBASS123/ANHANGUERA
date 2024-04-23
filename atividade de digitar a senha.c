/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include <stdio.h>

int main() {
    // Definindo a senha correta
    int senhaCorreta[4] = {1, 2, 3, 4};
    
    // Variável para armazenar a senha digitada pelo usuário
    int senhaDigitada[4];
    
    // Variável para verificar se a senha está correta
    int senhaCorretaFlag = 0;
    
    // Loop para solicitar a senha até que esteja correta
    while (!senhaCorretaFlag) {
        printf("Digite a senha (quatro números inteiros separados por espaço): ");
        scanf("%d %d %d %d", &senhaDigitada[0], &senhaDigitada[1], &senhaDigitada[2], &senhaDigitada[3]);
        
        // Verificando se a senha digitada está correta
        senhaCorretaFlag = 1; // Supõe-se que a senha está correta até encontrar uma diferença
        for (int i = 0; i < 4; i++) {
            if (senhaDigitada[i] != senhaCorreta[i]) {
                senhaCorretaFlag = 0;
                break; // Se encontrar uma diferença, a senha está incorreta
            }
        }
        
        // Se a senha estiver incorreta, solicitar novamente
        if (!senhaCorretaFlag) {
            printf("Senha Incorreta. Tente novamente.\n");
        }
    }
    
    // Se a execução chegou aqui, a senha está correta
    printf("Senha Correta\n");
    
    return 0;
}

