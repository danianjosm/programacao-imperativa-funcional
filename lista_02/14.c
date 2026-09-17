/* Questao 14. Formula de Heron para Triangulos Quaisquer — Escreva um programa em C que
calcule a area de um triangulo qualquer a partir do tamanho de seus tres lados (a, b e c)
informados pelo usuario. Utilize a Formula de Heron: Area = sqrt(p * (p - a) * (p - b) * (p - c)), onde
p e o semi-perimetro dado por (a + b + c) / 2.0. Nota: para esta questao, inclua a biblioteca
matematica <math.h> e lembre-se de vincular a biblioteca na compilacao do GCC (-lm). */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, p, area;

    printf("Digite os tres lados do triangulo (a b c): ");
    scanf("%f %f %f", &a, &b, &c);

    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Area do triangulo: %.2f\n", area);

    system("PAUSE");
    return 0;
}

// compilar com: gcc 14.c -o 14 -lm
