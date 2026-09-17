/* Questao 17. Geometria do Circulo com Constantes — Escreva um programa em C que leia do
console o valor do raio de um circulo (ponto flutuante). O programa deve calcular e exibir o valor
de sua Area (A = Pi * R^2) e de sua Circunferencia (C = 2 * Pi * R). Defina o valor de Pi como a
constante 3.141593. */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.141593

int main()
{
    float raio, area, circunferencia;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;
    circunferencia = 2 * PI * raio;

    printf("Area: %.2f\n", area);
    printf("Circunferencia: %.2f\n", circunferencia);

    system("PAUSE");
    return 0;
}
