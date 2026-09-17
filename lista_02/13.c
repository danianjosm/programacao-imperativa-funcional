/* Questao 13. Calculo de Areas de Figuras Planas Basicas — Crie um programa unificado em C
que ofereca suporte ao calculo de tres geometrias fundamentais. O usuario deve fornecer os dados
necessarios e o programa exibira: a) A area de um quadrado de lado L; b) A area de um retangulo
de base B e altura H; c) A area de um triangulo retangulo de base B e altura H. Todos os valores
de entrada e saida devem ser numericos de ponto flutuante. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado, base, altura;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);
    printf("Area do quadrado: %.2f\n\n", lado * lado);

    printf("Digite a base e a altura do retangulo: ");
    scanf("%f %f", &base, &altura);
    printf("Area do retangulo: %.2f\n\n", base * altura);

    printf("Digite a base e a altura do triangulo retangulo: ");
    scanf("%f %f", &base, &altura);
    printf("Area do triangulo: %.2f\n", (base * altura) / 2.0);

    system("PAUSE");
    return 0;
}
