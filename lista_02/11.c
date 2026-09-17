/* Questao 11. Conversor de Angulos de Graus para Radianos — Desenvolva um programa que
leia do teclado o valor de um angulo em graus e o converta em seu equivalente em radianos. Exiba
o resultado final formatado no console. Use a formula: radianos = graus * (Pi / 180.0), definindo Pi
como uma constante de 3.141593. */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.141593

int main()
{
    float graus, radianos;

    printf("Digite o angulo em graus: ");
    scanf("%f", &graus);

    radianos = graus * (PI / 180.0);

    printf("O angulo em radianos e: %.4f\n", radianos);

    system("PAUSE");
    return 0;
}
