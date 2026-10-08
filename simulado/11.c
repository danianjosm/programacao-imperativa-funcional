/* Questao 11. Calculo Salarial com Gratificacao e Impostos — Uma empresa contrata um tecnico a
R$ 45,00 por dia trabalhado. Crie um programa em C que solicite o numero de dias trabalhados,
calcule o salario bruto, adicione uma gratificacao de 5% sobre o bruto e desconte 8% de imposto de
renda sobre o bruto. Ao final, exiba o holerite detalhado com o valor liquido a receber. */

#include <stdio.h>
#include <stdlib.h>

#define VALOR_DIA 45.00

int main()
{
    int dias;
    float bruto, gratificacao, imposto, liquido;

    printf("Dias trabalhados: ");
    scanf("%d", &dias);

    bruto = dias * VALOR_DIA;
    gratificacao = bruto * 0.05; // 5% sobre o bruto
    imposto = bruto * 0.08;      // 8% tambem sobre o bruto (e nao sobre bruto + gratificacao)
    liquido = bruto + gratificacao - imposto;

    printf("\n========= HOLERITE =========\n");
    printf("Dias trabalhados:   %d\n", dias);
    printf("Salario bruto:      R$ %.2f\n", bruto);
    printf("(+) Gratificacao 5%%: R$ %.2f\n", gratificacao); // %% imprime o simbolo %
    printf("(-) Imposto 8%%:     R$ %.2f\n", imposto);
    printf("----------------------------\n");
    printf("Liquido a receber:  R$ %.2f\n", liquido);

    system("PAUSE");
    return 0;
}
