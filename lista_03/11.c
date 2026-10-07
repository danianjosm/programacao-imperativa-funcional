/* Questao 11. Intervalo Numerico Dinamico (Crescente e Decrescente) — Escreva um programa que leia
dois numeros inteiros quaisquer, A e B, fornecidos pelo usuario. O programa deve imprimir todos os
numeros inteiros situados no intervalo fechado entre A e B. Se A for menor ou igual a B, a impressao
deve ser em ordem crescente; caso A seja maior que B, a impressao deve ser em ordem decrescente. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, i;

    printf("Digite A: ");
    scanf("%d", &a);
    printf("Digite B: ");
    scanf("%d", &b);

    if (a <= b)
    {
        for (i = a; i <= b; i++)
            printf("%d ", i);
    }
    else
    {
        // mesma ideia, mas comecando do maior e descendo
        for (i = a; i >= b; i--)
            printf("%d ", i);
    }
    printf("\n");

    system("PAUSE");
    return 0;
}
