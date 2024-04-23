/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main() {
int opção;
float saldo = 1000.0; // saldo inicial de R$ 1000, 00

// Loop principal

do {

    // Exibição do menu

    printf("\nMenu de opções\n");
    printf("1- consulta\n");
    printf("2- saque\n");
    printf("3- deposito\n");
    printf("4- sair\n");
    printf("escolha uma opção: ");
    scanf("%d", &opção);

    // execução da opção escolhida pelo usuario

    switch (opção);

    // Execução da opçao escolhilda pelo usuario
    switch (opção) {
        case 1: // consulta de saldo
            printf("seu saldo e: R$ %.2f\n", saldo);
            break;
            case 2: // saque
            {
                   float valorSaque;
                   printf("digite o valor que deseja sacar: R$ ");
                   scanf("%f", &valorSaque);
                   if (valorSaque > saldo) {
                        printf("saldo insuficiente.\n");
                   } else {
                       saldo -= valorSaque;
                       printf("saque de R$ %.2f realizado com sucesso.\n",valorSaque);

                   }
     
            }
            break;
            case 3: // deposito
             {
                 float valorDeposito;
                 printf("Digite o valor que deseja depositar: R$ ");
                 scanf("%f", &valorDeposito);
                 saldo += valorDeposito;
                 printf("deposito de R$ %.2f realizado com sucesso.\n", valorDeposito);
        
    }
    break;
    case 4: // Sair
        printf("Obrigado por utilizar nosso caixa eletronico. ate logo!\n");
        break;
    default:
        printf("opção invalida. por favor, escolha uma opção valida.\n");

}   
   } while (opção != 4); // repetir ate que o usuario escolha sair

    return 0;

}

