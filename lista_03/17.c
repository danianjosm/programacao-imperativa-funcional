/* Questao 17. Estatisticas de Turma (Menor, Maior, Media e Contagem) — Faca um programa para ler
uma sequencia de notas de alunos (valores reais de 0.0 a 10.0). A entrada de dados deve ser
encerrada quando o usuario digitar a nota '-1.0'. Ao final, o programa deve exibir: a) Total de
alunos avaliados; b) A maior nota da turma; c) A menor nota da turma; d) A media geral da turma. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota, soma = 0, maior = 0, menor = 0;
    int total = 0;

    while (1)
    {
        printf("Digite a nota (-1 para encerrar): ");
        scanf("%f", &nota);

        if (nota == -1.0)
            break;

        if (nota < 0.0 || nota > 10.0)
        {
            printf("Nota invalida, ignorada.\n");
            continue; // pula o resto e volta a pedir nota
        }

        // a primeira nota vira maior e menor ao mesmo tempo; depois so compara
        if (total == 0 || nota > maior)
            maior = nota;
        if (total == 0 || nota < menor)
            menor = nota;

        soma += nota;
        total++;
    }

    if (total == 0)
    {
        printf("Nenhuma nota foi digitada.\n");
    }
    else
    {
        printf("a) Total de alunos: %d\n", total);
        printf("b) Maior nota: %.1f\n", maior);
        printf("c) Menor nota: %.1f\n", menor);
        printf("d) Media da turma: %.2f\n", soma / total);
    }

    system("PAUSE");
    return 0;
}
