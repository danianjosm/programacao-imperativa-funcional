/*Questão 24. Compilação Condicional para Depuração — Escreva um programa com uma
função int somaAteN(int n) que some os inteiros de 1 até n com um laço. Use #ifdef DEBUG
para imprimir, dentro do laço, o valor parcial da soma a cada iteração. Compile duas vezes,
com e sem #define DEBUG, e documente em comentários a diferença de comportamento.*/

// QUESTÃO 24

#include <stdio.h>

#define DEBUG   // comente esta linha pra compilar SEM o modo de depuracao

int somaAteN(int n);

int main() {
    int numero;

    printf("Digite n: ");
    scanf("%d", &numero);

    printf("Soma de 1 ate %d = %d\n", numero, somaAteN(numero));

    return 0;
}

int somaAteN(int n) {
    int soma = 0;
    int contador;

    for (contador = 1; contador <= n; contador++) {
        soma = soma + contador;
#ifdef DEBUG
        printf("[DEBUG] contador = %d, soma parcial = %d\n", contador, soma);
#endif
    }
    return soma;
}

// COM #define DEBUG (n = 4):
//   [DEBUG] contador = 1, soma parcial = 1
//   [DEBUG] contador = 2, soma parcial = 3
//   [DEBUG] contador = 3, soma parcial = 6
//   [DEBUG] contador = 4, soma parcial = 10
//   Soma de 1 ate 4 = 10
//
// SEM #define DEBUG (linha comentada, n = 4):
//   Soma de 1 ate 4 = 10
//
// Diferenca: com DEBUG o pre-processador mantem o printf de dentro do laco, e
// da pra acompanhar a soma passo a passo (bom pra achar erro). Sem DEBUG ele
// apaga esse printf antes de compilar, entao o executavel nem tem essa linha e
// so mostra o resultado final. O calculo e o mesmo nos dois casos.
//
// Outra forma de ligar o DEBUG sem mexer no codigo: gcc -DDEBUG 24.c -o 24
