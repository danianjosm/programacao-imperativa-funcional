/* Questao 24. Conversor de Velocidade de km/h para m/s — Escreva um programa em C que
leia do teclado uma velocidade expressa em quilometros por hora (km/h) e exiba o seu valor
convertido e formatado para metros por segundo (m/s). Use a constante fisica de conversao: m/s =
km/h / 3.6. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kmh, ms;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh);

    ms = kmh / 3.6;

    printf("Velocidade em m/s: %.2f\n", ms);

    system("PAUSE");
    return 0;
}
