/* Questao 9. Geometria do Triangulo e Formula de Heron — Escreva um programa em C que leia os
comprimentos dos tres lados (a, b, c) de um triangulo qualquer. Sabendo que o semiperimetro p e dado
por (a + b + c) / 2.0, calcule a area do triangulo utilizando a Formula de Heron:
Area = sqrt(p * (p - a) * (p - b) * (p - c)). Utilize a funcao sqrt() da biblioteca <math.h>. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, p, area;

    printf("Digite o lado a: ");
    scanf("%lf", &a);
    printf("Digite o lado b: ");
    scanf("%lf", &b);
    printf("Digite o lado c: ");
    scanf("%lf", &c);

    p = (a + b + c) / 2.0; // semiperimetro = metade do perimetro
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Semiperimetro: %.2f\n", p);
    printf("Area do triangulo: %.2f\n", area);

    system("PAUSE");
    return 0;
}

// compilar com: gcc 09.c -o 09 -lm
// teste: lados 3, 4 e 5 -> area 6.00
