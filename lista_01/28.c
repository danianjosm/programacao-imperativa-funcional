/*Questão 28. Desenvolva um programa em C que leia três valores numéricos inteiros fornecidos pelo
usuário através do teclado, calcule a média aritmética simples desses valores como um número real de
dupla precisão (double) e exiba o resultado final na tela formatado com exatamente duas casas
decimais.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    double media;

    printf("Digite tres valores inteiros:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    media = (a + b + c) / 3.0;

    printf("A media aritmetica e: %.2f\n", media);

    system("PAUSE");
    return 0;
}