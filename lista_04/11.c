/*Questão 11. Ordenação Crescente de Três Valores Numéricos — Escreva um programa em C que
leia três números inteiros fornecidos pelo usuário e os exiba em ordem estritamente crescente (do
menor para o maior). Utilize estruturas de decisão para comparar e ordenar os valores sem usar
vetores.*/

// QUESTÃO 11

#include <stdio.h>

int main() {
    int a, b, c, aux;

    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    // garante que a seja menor que b
    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }

    // garante que a seja menor que c (a vira o menor de todos)
    if (a > c) {
        aux = a;
        a = c;
        c = aux;
    }

    // agora so falta organizar b e c
    if (b > c) {
        aux = b;
        b = c;
        c = aux;
    }

    printf("Ordem crescente: %d %d %d\n", a, b, c);

    return 0;
}

// A ideia é ir comparando os números de dois em dois e trocando de
// lugar quando estão fora de ordem.
//
// Pra trocar dois valores eu uso a variável aux, que guarda um dos
// valores temporariamente. Sem ela, quando eu fizesse a = b, o
// valor antigo de a seria perdido.
//
// Depois das duas primeiras comparações, o menor número já fica
// guardado em a. A última comparação só arruma b e c, e no final
// fica a <= b <= c.
//
// Exemplo: se o usuário digitar 9 2 5
// 1º if: 9 > 2, troca  -> a = 2, b = 9, c = 5
// 2º if: 2 > 5? não, nada muda
// 3º if: 9 > 5, troca  -> a = 2, b = 5, c = 9
// Saída: 2 5 9