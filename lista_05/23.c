/*Questão 23. Macro versus Função — Defina a macro #define DOBRO(x) x*2 e a função int
dobro(int x). Na main(), chame ambas com o argumento 2+3, imprima os resultados e
explique em comentário por que eles diferem. Em seguida, corrija a macro com parêneteses
de proteção e teste novamente.*/

// QUESTÃO 23

#include <stdio.h>

#define DOBRO(x) x*2                  // versao sem protecao
#define DOBRO_CORRIGIDO(x) ((x)*2)    // versao corrigida

int dobro(int x);

int main() {
    printf("Macro DOBRO(2+3):           %d\n", DOBRO(2+3));
    printf("Funcao dobro(2+3):          %d\n", dobro(2+3));
    printf("Macro DOBRO_CORRIGIDO(2+3): %d\n", DOBRO_CORRIGIDO(2+3));

    return 0;
}

int dobro(int x) {
    return x * 2;
}

// Saida:
//   Macro DOBRO(2+3):           8
//   Funcao dobro(2+3):          10
//   Macro DOBRO_CORRIGIDO(2+3): 10
//
// Por que diferem: a FUNCAO calcula o argumento antes de entrar, entao x
// recebe 5 e devolve 5 * 2 = 10.
// A MACRO nao calcula nada, so cola o texto: DOBRO(2+3) vira 2+3*2. Como a
// multiplicacao tem prioridade, fica 2 + 6 = 8.
// Na versao corrigida, DOBRO_CORRIGIDO(2+3) vira ((2+3)*2) = 5 * 2 = 10, igual
// a funcao. Os parenteses obrigam o 2+3 a ser calculado primeiro.
