/* Questao 15. Calculo de Media Aritmetica Simples e Ponderada — Desenvolva um programa
que leia quatro notas escolares de um aluno. Calcule e exiba no console: a) A media aritmetica
simples das notas; b) A media ponderada das notas, assumindo que as provas possuem os
seguintes pesos sequenciais: Peso 1 para as provas 1 e 2, e Peso 2 para as provas 3 e 4. Ambos
os resultados devem ser representados com duas casas decimais. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, nota4;
    float mediaSimples, mediaPonderada;

    printf("Digite as 4 notas do aluno: ");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    mediaSimples = (nota1 + nota2 + nota3 + nota4) / 4.0;
    mediaPonderada = (nota1 * 1 + nota2 * 1 + nota3 * 2 + nota4 * 2) / 6.0; // soma dos pesos = 6

    printf("Media aritmetica simples: %.2f\n", mediaSimples);
    printf("Media ponderada: %.2f\n", mediaPonderada);

    system("PAUSE");
    return 0;
}
