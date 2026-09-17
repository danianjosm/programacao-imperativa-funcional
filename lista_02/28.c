/* Questao 28. Calculo de Salario Anual com Imposto Progressivo — Uma empresa metalurgica
remunera seus operarios a taxa de R$ 10,00 por hora normal trabalhada e R$ 15,00 por hora
extra (adicional de 50%). Desenvolva um programa completo em C que receba do usuario o
numero total de horas normais e de horas extras trabalhadas por um empregado no acumulado de
um ano. O programa deve calcular e exibir: a) O salario anual bruto obtido; b) O imposto
progressivo a ser pago sabendo que o trabalhador eh isento de imposto para salarios ate R$
12.000,00 anuais, mas paga 10% de imposto retido sobre o valor que exceder essa faixa de
isencao. Dica: utilize expressoes aritmeticas lineares e o operador condicional (? :) para simular a
tomada de decisao de imposto sem recorrer a lacos ou desvios complexos neste capitulo. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float horasNormais, horasExtras;
    float salarioAnual, imposto;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%f", &horasNormais);
    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%f", &horasExtras);

    salarioAnual = (horasNormais * 10.0) + (horasExtras * 15.0);

    /* operador ternario: se o salario passar de 12000, cobra 10% so em cima do que passou da
    faixa de isencao. se nao passar, o imposto eh zero */
    imposto = (salarioAnual > 12000.0) ? (salarioAnual - 12000.0) * 0.10 : 0.0;

    printf("Salario anual bruto: R$ %.2f\n", salarioAnual);
    printf("Imposto a pagar: R$ %.2f\n", imposto);

    system("PAUSE");
    return 0;
}
