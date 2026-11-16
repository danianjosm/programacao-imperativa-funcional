/*Questão 20. Número Primo — Crie uma função int ehPrimo(int n) que retorne 1 se n for primo
e 0 caso contrário, usando um laço de repetição. Na main(), leia um inteiro e informe o
resultado. Em seguida, use a função dentro de um laço for para imprimir todos os números
primos de 1 até 50.*/

// QUESTÃO 20

#include <stdio.h>

int ehPrimo(int n);

int main() {
    int numero, candidato;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (ehPrimo(numero)) {
        printf("%d e primo\n", numero);
    } else {
        printf("%d nao e primo\n", numero);
    }

    printf("\nPrimos de 1 ate 50:\n");
    for (candidato = 1; candidato <= 50; candidato++) {
        if (ehPrimo(candidato)) {
            printf("%d ", candidato);
        }
    }
    printf("\n");

    return 0;
}

int ehPrimo(int n) {
    int divisor;

    // 0, 1 e negativos nao sao primos
    if (n < 2) {
        return 0;
    }

    // testa todos os divisores de 2 ate n-1
    for (divisor = 2; divisor < n; divisor++) {
        if (n % divisor == 0) {
            return 0;   // achou um divisor: nao e primo, ja sai da funcao
        }
    }

    // passou pelo laco sem achar divisor: e primo
    return 1;
}
