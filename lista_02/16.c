/* Questao 16. Quantidade de Degraus em uma Escada de Obra — Um trabalhador da construcao
civil deseja subir uma escada de degraus identicos. Escreva um programa em C que receba do
usuario a altura de cada degrau (em centimetros) e a altura total que o usuario deseja alcancar
subindo a escada (em metros). O programa deve calcular e exibir o numero minimo de degraus
que ele deve subir. Certifique-se de realizar a compatibilidade de unidades de medida (metros vs.
centimetros). */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float alturaDegrauCm, alturaTotalM, alturaTotalCm;
    int degraus;

    printf("Digite a altura de cada degrau (em cm): ");
    scanf("%f", &alturaDegrauCm);
    printf("Digite a altura total que deseja alcancar (em metros): ");
    scanf("%f", &alturaTotalM);

    alturaTotalCm = alturaTotalM * 100; // converte metros pra centimetros
    degraus = (int) ceil(alturaTotalCm / alturaDegrauCm); // arredonda pra cima, precisa do numero minimo

    printf("Numero minimo de degraus: %d\n", degraus);

    system("PAUSE");
    return 0;
}

// compilar com: gcc 16.c -o 16 -lm
