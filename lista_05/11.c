/*Questão 11. Verificação de Número Par — Desenvolva uma função int ehPar(int n) que
retorne 1 se o número for par e 0 caso contrário. Na main(), leia um inteiro e imprima uma
mensagem clara informando se ele é par ou ímpar.*/

// QUESTÃO 11

#include <stdio.h>

int ehPar(int n);

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // ehPar devolve 1 (verdadeiro) ou 0 (falso), entao da pra usar direto no if
    if (ehPar(numero)) {
        printf("%d e par\n", numero);
    } else {
        printf("%d e impar\n", numero);
    }

    return 0;
}

int ehPar(int n) {
    // resto da divisao por 2 igual a 0 quer dizer que e par
    if (n % 2 == 0) {
        return 1;
    }
    return 0;
}
