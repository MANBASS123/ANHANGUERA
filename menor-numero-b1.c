#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Pedir ao usuário para inserir os três valores
    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &num3);

    // Verificar qual é o menor valor
    int menor = num1; //caso o menor valor ja seja o primeiro
    
    if (num2 < menor) {
        menor = num2; // Se o segundo valor for menor, atualize a variável menor
    }
    if (num3 < menor) {
        menor = num3; // Se o terceiro valor for menor, atualize a variável menor
    }

    // Exibir o menor valor
    printf("O menor valor é: %d\n", menor);

    return 0;
}