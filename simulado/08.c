/* Questao 8. Calculos Geometricos e Constantes com <math.h> — Desenvolva um programa em C que
solicite ao usuario o valor do raio R de uma esfera. Defina a constante PI como 3.14159265 e
calcule: a) A area da superficie da esfera (A = 4 * PI * R^2); b) O volume da esfera
(V = (4.0/3.0) * PI * R^3). Utilize a funcao pow() da biblioteca <math.h> e exiba os resultados
formatados com 3 casas decimais. Atencao para a divisao real de 4.0 por 3.0! */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

int main()
{
    double raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    area = 4 * PI * pow(raio, 2);

    // 4.0 / 3.0 = 1.333...; se fosse 4 / 3 (inteiros) daria 1 e o volume sairia errado
    volume = (4.0 / 3.0) * PI * pow(raio, 3);

    printf("Area da superficie: %.3f\n", area);
    printf("Volume: %.3f\n", volume);

    system("PAUSE");
    return 0;
}

// compilar com: gcc 08.c -o 08 -lm
