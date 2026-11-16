/*Questão 17. Fatorial Iterativo e Recursivo — Escreva duas funções: long fatorialIterativo(int
n), usando laço de repetição, e long fatorialRecursivo(int n), usando recursão. Na main(), leia
um inteiro não negativo, imprima o resultado das duas versões e confirme se coincidem.*/

// QUESTÃO 17

#include <stdio.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main() {
    int numero;
    long resultado_laco, resultado_recursao;

    printf("Digite um inteiro nao negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Nao existe fatorial de numero negativo\n");
        return 0;
    }

    resultado_laco = fatorialIterativo(numero);
    resultado_recursao = fatorialRecursivo(numero);

    printf("Fatorial com laco:     %ld\n", resultado_laco);
    printf("Fatorial com recursao: %ld\n", resultado_recursao);

    if (resultado_laco == resultado_recursao) {
        printf("Os dois resultados coincidem!\n");
    } else {
        printf("Os resultados sao diferentes\n");
    }

    return 0;
}

long fatorialIterativo(int n) {
    // cofrinho de multiplicacao comeca em 1 (comecar em 0 zeraria tudo)
    long acumulado = 1;
    int contador;

    for (contador = 1; contador <= n; contador++) {
        acumulado = acumulado * contador;
    }
    return acumulado;
}

long fatorialRecursivo(int n) {
    // caso base: 0! = 1
    if (n == 0) {
        return 1;
    }
    // passo recursivo: n! = n * (n-1)!
    return n * fatorialRecursivo(n - 1);
}

// Obs: long no Windows tem o mesmo tamanho do int, entao a partir de 13!
// o resultado estoura e sai errado (nas duas versoes igual).
