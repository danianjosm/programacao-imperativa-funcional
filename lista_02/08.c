/* Questao 08. Potencias e Divisao com Ponto Flutuante — Desenvolva um programa em C que
leia do teclado um numero inteiro fornecido pelo usuario. O programa deve calcular e exibir: a) O
seu quadrado (valor inteiro); b) A sua decima parte (valor real, com precisao de duas casas
decimais). Garanta que o calculo da decima parte nao sofra de truncamento de divisao inteira. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, quadrado;
    float decimaParte;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    quadrado = numero * numero;
    decimaParte = numero / 10.0; // usando 10.0 (float) evita a divisao inteira truncada

    printf("Quadrado: %d\n", quadrado);
    printf("Decima parte: %.2f\n", decimaParte);

    system("PAUSE");
    return 0;
}
