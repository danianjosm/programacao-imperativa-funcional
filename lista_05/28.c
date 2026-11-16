/*Questão 28. Caixa Simples de Mercadinho — Desenvolva um programa com as funções
float calculaSubtotal(float preco, int quantidade), float aplicaDesconto(float valor, int
opcaoPagamento), com 10% de desconto à vista, e float calculaTroco(float total, float pago).
Na main(), leia o preço, a quantidade, a forma de pagamento e o valor pago, e exiba o
subtotal, o total a pagar e o troco.*/

// QUESTÃO 28

#include <stdio.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main() {
    float preco, valor_pago, subtotal, total;
    int quantidade, forma_pagamento;

    printf("Preco do produto: ");
    scanf("%f", &preco);
    printf("Quantidade: ");
    scanf("%d", &quantidade);

    printf("Forma de pagamento (1 - A vista | 2 - A prazo): ");
    scanf("%d", &forma_pagamento);

    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, forma_pagamento);

    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);

    printf("Valor pago: ");
    scanf("%f", &valor_pago);

    if (valor_pago < total) {
        printf("Valor insuficiente: faltam R$ %.2f\n", total - valor_pago);
    } else {
        printf("Troco: R$ %.2f\n", calculaTroco(total, valor_pago));
    }

    return 0;
}

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    // opcao 1 = a vista: 10% de desconto (paga 90% do valor)
    if (opcaoPagamento == 1) {
        return valor * 0.9;
    }
    // qualquer outra forma: sem desconto
    return valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}
