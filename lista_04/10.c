/*Questão 10. Análise de Paridade e Sinal de Inteiros — Faça um programa em C que receba um
número inteiro do usuário e determine simultaneamente:

Cesar School | Programação Imperativa e Funcional | Página 4
a) Se o número é PAR ou ÍMPAR (utilizando o operador resto da divisão %).
b) Se o número é POSITIVO, NEGATIVO ou ZERO.*/

// QUESTÃO 10

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // a) par ou impar
    if (numero % 2 == 0) {
        printf("O numero %d e PAR\n", numero);
    } else {
        printf("O numero %d e IMPAR\n", numero);
    }

    // b) positivo, negativo ou zero
    if (numero > 0) {
        printf("O numero %d e POSITIVO\n", numero);
    } else if (numero < 0) {
        printf("O numero %d e NEGATIVO\n", numero);
    } else {
        printf("O numero e ZERO\n");
    }

    return 0;
}

// a) Se o resto da divisão por 2 for zero, o número é par. Se não,
// é ímpar. Testei com == 0 em vez de == 1 de propósito: em C, um
// número negativo ímpar, tipo -3, dá resto -1 e não 1. Então, se
// eu testasse == 1, o -3 não seria reconhecido como ímpar.
//
// b) Usei else-if porque o número só pode ser uma dessas três
// coisas. Se não é maior nem menor que zero, só sobra ser zero,
// que cai no else.
//
// Deixei as duas verificações separadas (dois if diferentes)
// porque a questão pede as duas informações ao mesmo tempo. O zero,
// por exemplo, aparece como PAR e também como ZERO.