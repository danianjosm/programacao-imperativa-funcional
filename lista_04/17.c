// QUESTÃO 17

#include <stdio.h>

int main() {
    float valorCompra, valorFinal, parcela, comissao;
    int opcao;

    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valorCompra);

    printf("Forma de pagamento:\n");
    printf("1 - A vista (10%% de desconto)\n");
    printf("2 - Parcelado em 3x sem juros\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            // a vista: 10% de desconto
            valorFinal = valorCompra * 0.90;
            comissao = valorFinal * 0.05;

            printf("Valor final com desconto: R$ %.2f\n", valorFinal);
            printf("Comissao do vendedor: R$ %.2f\n", comissao);
            break;

        case 2:
            // parcelado: divide em 3 sem juros
            parcela = valorCompra / 3;
            comissao = valorCompra * 0.05;

            printf("3 parcelas de: R$ %.2f\n", parcela);
            printf("Comissao do vendedor: R$ %.2f\n", comissao);
            break;

        default:
            printf("Erro: opcao invalida!\n");
    }

    return 0;
}

// Pra dar 10% de desconto, multipliquei por 0.90, que é o mesmo que
// pagar 90% do valor. É mais rápido do que calcular o desconto
// separado e depois subtrair.
//
// A comissão de 5% é o valor vezes 0.05. A diferença é a base:
// no à vista, ela é calculada em cima do valor já com desconto, e
// no parcelado, em cima do valor total (já que não tem desconto).
//
// No parcelado, como é sem juros, cada parcela é só o valor total
// dividido por 3.
//
// Usei switch porque são opções numeradas, e o default trata o caso
// do usuário digitar qualquer coisa diferente de 1 ou 2.
//
// Obs: no printf, pra aparecer o símbolo % na tela, é preciso
// escrever %% (senão o C acha que é um formato tipo %d).