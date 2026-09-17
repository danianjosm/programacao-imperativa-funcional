/* Questao 19. Calculo de Salario Liquido com Desconto na Fonte — Uma empresa de prestacao
de servicos contrata um encanador a taxa fixa de R$ 30,00 por dia util trabalhado. Elabore um
programa que solicite ao usuario o numero de dias efetivamente trabalhados pelo profissional.
Calcule e imprima a quantia bruta devida e o valor liquido final a ser pago, sabendo que sao
descontados estritamente 8% de imposto de renda retido na fonte sobre o total bruto. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int diasTrabalhados;
    float salarioBruto, salarioLiquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);

    salarioBruto = diasTrabalhados * 30.0;
    salarioLiquido = salarioBruto - (salarioBruto * 0.08);

    printf("Salario bruto: R$ %.2f\n", salarioBruto);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    system("PAUSE");
    return 0;
}
