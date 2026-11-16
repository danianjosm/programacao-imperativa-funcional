/*Questão 25. Máximo Divisor Comum com Recursão (questão avançada) — Implemente o
algoritmo de Euclides em uma função recursiva int mdc(int a, int b). Na main(), leia dois
inteiros positivos e exiba o MDC. Utilize a função em um procedimento void simplifica(int
num, int den) que imprima a fração simplificada.*/

// QUESTÃO 25

#include <stdio.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main() {
    int primeiro_numero, segundo_numero;

    printf("Digite o primeiro numero (positivo): ");
    scanf("%d", &primeiro_numero);
    printf("Digite o segundo numero (positivo): ");
    scanf("%d", &segundo_numero);

    if (primeiro_numero <= 0 || segundo_numero <= 0) {
        printf("Os dois numeros precisam ser positivos\n");
        return 0;
    }

    printf("MDC(%d, %d) = %d\n", primeiro_numero, segundo_numero,
           mdc(primeiro_numero, segundo_numero));

    // usa os mesmos numeros como fracao: primeiro / segundo
    simplifica(primeiro_numero, segundo_numero);

    return 0;
}

int mdc(int a, int b) {
    // CASO BASE: quando o resto chega em 0, o MDC e o a
    if (b == 0) {
        return a;
    }
    // PASSO RECURSIVO (Euclides): mdc(a, b) = mdc(b, resto de a por b)
    return mdc(b, a % b);
}

void simplifica(int num, int den) {
    int divisor_comum = mdc(num, den);

    printf("Fracao %d/%d simplificada: %d/%d\n",
           num, den, num / divisor_comum, den / divisor_comum);
}

// Exemplo: mdc(48, 18) -> mdc(18, 12) -> mdc(12, 6) -> mdc(6, 0) -> 6
// Fracao 48/18 dividida por 6 = 8/3
