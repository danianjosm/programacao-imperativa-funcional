/* Questao 10. Conversao de Temperatura de Celsius para Fahrenheit e Kelvin — Escreva um
programa em C que leia uma temperatura expressa em graus Celsius (float ou double) e mostre na
tela o seu valor convertido para duas escalas termometricas: graus Fahrenheit e Kelvin. As formulas
de conversao sao: F = (C * 9/5) + 32 e K = C + 273.15. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, fahrenheit, kelvin;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    kelvin = celsius + 273.15;

    printf("Fahrenheit: %.2f\n", fahrenheit);
    printf("Kelvin: %.2f\n", kelvin);

    system("PAUSE");
    return 0;
}
