/* Questao 18. Geometria da Esfera e Fracoes de Ponto Flutuante — Crie um programa em C
que leia o raio de uma esfera e calcule sua area de superficie (A = 4 * Pi * R^2) e o seu volume (V
= (4.0/3.0) * Pi * R^3). Defina Pi como 3.141593. Atencao: Garanta que o termo fracionario 4/3
do volume nao sofra truncamento de divisao inteira, o que comprometeria gravemente o resultado. */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.141593

int main()
{
    float raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    area = 4 * PI * raio * raio;
    volume = (4.0 / 3.0) * PI * raio * raio * raio; // 4.0/3.0 com ponto pra nao truncar

    printf("Area da superficie: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    system("PAUSE");
    return 0;
}
