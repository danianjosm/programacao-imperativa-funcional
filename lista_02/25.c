/* Questao 25. Salario Liquido com Gratificacao e Tributacao — Faca um programa em C que leia
o salario-base de um funcionario. O programa deve calcular e exibir o salario liquido a receber
sabendo que esse funcionario tem uma gratificacao fixa de 5% sobre o seu salario-base (adicional),
mas paga um imposto retido de 7% tambem calculado sobre o seu salario-base. Justifique a
formula matematica do calculo atraves dos operadores aritmeticos. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioBase, gratificacao, imposto, salarioLiquido;

    printf("Digite o salario base do funcionario: ");
    scanf("%f", &salarioBase);

    /* como os dois percentuais incidem sobre o MESMO salario base (e nao um em cima do outro),
    o liquido fica: salarioBase + (salarioBase * 0.05) - (salarioBase * 0.07) */
    gratificacao = salarioBase * 0.05;
    imposto = salarioBase * 0.07;
    salarioLiquido = salarioBase + gratificacao - imposto;

    printf("Salario liquido a receber: R$ %.2f\n", salarioLiquido);

    system("PAUSE");
    return 0;
}
