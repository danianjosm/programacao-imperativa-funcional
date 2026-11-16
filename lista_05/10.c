/*Questão 10. Área da Esfera com #define — Escreva um programa que leia o raio de uma
esfera e calcule sua área por meio de uma função float area(float r), usando a fórmula 4 * PI *
r * r. Defina PI com a diretiva #define e declare o protótipo da função antes da main().*/

// QUESTÃO 10

#include <stdio.h>

#define PI 3.14159   // sem ponto e virgula: o #define so troca texto

float area(float r);

int main() {
    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    printf("A area da esfera de raio %.2f e %.2f\n", raio, area(raio));

    return 0;
}

float area(float r) {
    return 4 * PI * r * r;
}
