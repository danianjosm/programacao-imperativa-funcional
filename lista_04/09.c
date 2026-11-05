/*Questão 09. Cálculo de Média Ponderada e Situação Acadêmica — Elabore um programa que leia
as notas de três avaliações de um estudante: Trabalho de Laboratório (peso 2), Avaliação Semestral
(peso 3) e Exame Final (peso 5). O programa deve calcular a média ponderada e exibir a situação do
aluno conforme a tabela:
• Média entre 0.0 e 2.9: Reprovado
• Média entre 3.0 e 4.9: Em Recuperação
• Média igual ou superior a 5.0: Aprovado*/

// QUESTÃO 09

#include <stdio.h>

int main() {
    float lab, semestral, exame, media;

    printf("Nota do Trabalho de Laboratorio: ");
    scanf("%f", &lab);

    printf("Nota da Avaliacao Semestral: ");
    scanf("%f", &semestral);

    printf("Nota do Exame Final: ");
    scanf("%f", &exame);

    // media ponderada: cada nota vezes o seu peso, dividido pela soma dos pesos
    media = (lab * 2 + semestral * 3 + exame * 5) / 10;

    printf("Media ponderada: %.1f\n", media);

    if (media >= 5.0) {
        printf("Situacao: Aprovado\n");
    } else if (media >= 3.0) {
        printf("Situacao: Em Recuperacao\n");
    } else {
        printf("Situacao: Reprovado\n");
    }

    return 0;
}

// Na média ponderada, cada nota é multiplicada pelo seu peso e
// depois eu divido pela soma dos pesos (2 + 3 + 5 = 10).
//
// Usei else-if pra só uma situação ser impressa. Comecei pela
// maior média: se não é >= 5.0, já sei que é menor que 5, então
// no else if (media >= 3.0) já está garantido que fica entre 3.0
// e 4.9. O que sobrar cai no else, que é o Reprovado.
//
// Fiz assim, em vez de testar "entre 0.0 e 2.9", porque uma média
// tipo 2.95 ficaria fora de todas as faixas da tabela. Com o
// else-if, nenhum valor fica sem situação.