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
    int maior = num1; //caso o maior valor ja seja o primeiro
    
    if (num2 > maior) {
        maior = num2; // Se o segundo valor for maior, atualize a variável menor
    }
    if (num3 > maior) {
        maior = num3; // Se o terceiro valor for maior, atualize a variável menor
    }

    // Exibir o menor valor
    printf("O maior valor é: %d\n", maior);

    return 0;
}
