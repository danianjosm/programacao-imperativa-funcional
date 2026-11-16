/*Questão 08. Conversor de Fahrenheit para Celsius — Desenvolva um programa que leia
uma temperatura em graus Fahrenheit e utilize uma função float celsius(float fahr) para
convertê-la, aplicando a fórmula C = (F - 32) * 5 / 9. Exiba o resultado com duas casas
decimais.*/

// QUESTÃO 08

#include <stdio.h>

float celsius(float fahr);

int main() {
    float temperatura_fahrenheit, temperatura_celsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &temperatura_fahrenheit);

    temperatura_celsius = celsius(temperatura_fahrenheit);

    printf("%.2f F = %.2f C\n", temperatura_fahrenheit, temperatura_celsius);

    return 0;
}

float celsius(float fahr) {
    // uso 5.0 e 9.0 (com ponto) pra conta ser feita com casas decimais
    return (fahr - 32.0) * 5.0 / 9.0;
}
