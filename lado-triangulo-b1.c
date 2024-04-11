#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    // pede os lados do triangulo
    printf("Digite o comprimento do primeiro lado do triângulo: ");
    scanf("%f", &lado1);
    printf("Digite o comprimento do segundo lado do triângulo: ");
    scanf("%f", &lado2);
    printf("Digite o comprimento do terceiro lado do triângulo: ");
    scanf("%f", &lado3);

    // verifica qual triangulo equivale com esses lados
    if (lado1 == lado2 && lado2 == lado3) {
        printf("O triângulo é equilátero.\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("O triângulo é isósceles.\n");
    } else {
        printf("O triângulo é escaleno.\n");
    }

    return 0;
}