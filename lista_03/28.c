/* Questao 28. Sistema de Folha de Pagamento com Menu Continuo (do-while & switch) — Desenvolva um
programa completo para gerenciamento de folha de pagamento de uma empresa. O programa deve exibir
um menu de opcoes em um laco do-while continuo:
1. Reajuste Salarial (Calcula e exibe novo salario: 15% de aumento para salarios ate R$ 2.000,00 e
10% para salarios superiores).
2. Retencao de Imposto de Renda (Calcula desconto: 8% para salarios ate R$ 3.000,00 e 15% para
salarios superiores).
3. Encerrar Programa.
O programa deve validar as opcoes do menu e so finalizar a execucao quando a opcao 3 for
expressamente selecionada. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float salario, desconto;

    // do-while: o menu precisa aparecer pelo menos uma vez
    do
    {
        printf("\n===== FOLHA DE PAGAMENTO =====\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Salario atual: R$ ");
            scanf("%f", &salario);
            if (salario <= 2000)
                salario = salario * 1.15; // +15%
            else
                salario = salario * 1.10; // +10%
            printf("Novo salario: R$ %.2f\n", salario);
            break;

        case 2:
            printf("Salario: R$ ");
            scanf("%f", &salario);
            if (salario <= 3000)
                desconto = salario * 0.08;
            else
                desconto = salario * 0.15;
            printf("Desconto de IR: R$ %.2f\n", desconto);
            printf("Salario liquido: R$ %.2f\n", salario - desconto);
            break;

        case 3:
            printf("Encerrando o programa...\n");
            break;

        default: // qualquer numero que nao seja 1, 2 ou 3 cai aqui
            printf("Opcao invalida! Escolha 1, 2 ou 3.\n");
        }
    } while (opcao != 3);

    system("PAUSE");
    return 0;
}
