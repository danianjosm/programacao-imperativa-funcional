/*Questão 26. Sequência de Fibonacci Recursiva (questão avançada) — Desenvolva uma
função recursiva long fibonacci(int n) que retorne o n-ésimo termo da sequência (fibonacci(0)
= 0 e fibonacci(1) = 1). Na main(), leia a quantidade de termos e imprima a sequência
chamando a função em um laço. Comente por que a versão recursiva se torna lenta para
valores grandes de n.*/

// QUESTÃO 26

#include <stdio.h>

long fibonacci(int n);

int main() {
    int quantidade_de_termos, posicao;

    printf("Quantos termos da sequencia voce quer ver? ");
    scanf("%d", &quantidade_de_termos);

    for (posicao = 0; posicao < quantidade_de_termos; posicao++) {
        printf("%ld ", fibonacci(posicao));
    }
    printf("\n");

    return 0;
}

long fibonacci(int n) {
    // CASOS BASE: fibonacci(0) = 0 e fibonacci(1) = 1
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    // PASSO RECURSIVO: cada termo e a soma dos dois anteriores
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Por que fica lenta: cada chamada abre DUAS novas chamadas, e elas repetem
// o mesmo trabalho. Ex.: fibonacci(5) chama fibonacci(4) e fibonacci(3), mas
// fibonacci(4) tambem chama fibonacci(3) de novo, e assim por diante. A
// quantidade de chamadas quase dobra a cada termo (cresce de forma
// exponencial): fibonacci(40) faz centenas de milhoes de chamadas. E como o
// main chama a funcao de novo pra cada termo, todo esse trabalho se repete.
// Com um laco guardando os dois ultimos termos, seriam so n passos.
