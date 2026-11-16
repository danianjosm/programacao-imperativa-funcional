/*Questão 07. Soma de Dois Inteiros — Escreva um programa em C que leia dois números
inteiros e utilize uma função int soma(int a, int b) para calcular e retornar a soma. O resultado
deve ser impresso na main(). Declare o protótipo antes da main().*/

// QUESTÃO 07

#include <stdio.h>

// prototipo: avisa o compilador que a funcao existe antes da main usar
int soma(int a, int b);

int main() {
    int primeiro_numero, segundo_numero, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiro_numero);
    printf("Digite o segundo numero: ");
    scanf("%d", &segundo_numero);

    // chamada: o valor devolvido pela funcao fica guardado em resultado
    resultado = soma(primeiro_numero, segundo_numero);

    printf("A soma de %d e %d e %d\n", primeiro_numero, segundo_numero, resultado);

    return 0;
}

// definicao: o corpo da funcao fica depois da main
int soma(int a, int b) {
    return a + b;
}
