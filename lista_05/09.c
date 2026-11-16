/*Questão 09. Maior de Dois Números — Crie uma função int maior(int a, int b) que retorne o
maior entre dois inteiros. Na main(), leia os valores e exiba o resultado.*/

// QUESTÃO 09

#include <stdio.h>

int maior(int a, int b);

int main() {
    int primeiro_numero, segundo_numero;

    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiro_numero);
    printf("Digite o segundo numero: ");
    scanf("%d", &segundo_numero);

    printf("O maior numero e %d\n", maior(primeiro_numero, segundo_numero));

    return 0;
}

int maior(int a, int b) {
    if (a > b) {
        return a;
    }
    // se chegou aqui, b e maior ou os dois sao iguais (ai tanto faz qual devolve)
    return b;
}
