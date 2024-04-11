#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // pede a temperatura em Celsius
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    // Converter Celsius para Fahrenheit usando a fórmula F=C*(9/5)+32
    fahrenheit = celsius * (9.0 / 5.0) + 32;

    // Exibi a temperatura em Fahrenheit
    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}