/*Questão 19. Contagem Regressiva Recursiva — Crie um procedimento recursivo void
contagem(int n) que imprima os números de n até 1 e, ao final, a mensagem "Fogo!". Na
main(), leia n, valide que ele é positivo e chame o procedimento. Em seguida, crie uma
segunda versão que imprima de 1 até n, e explique em comentário o que muda na posição da
chamada recursiva em relação ao printf.*/

// QUESTÃO 19

#include <stdio.h>

void contagem(int n);
void contagemCrescente(int n);

int main() {
    int numero;

    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("O numero precisa ser positivo\n");
        return 0;
    }

    printf("Contagem regressiva:\n");
    contagem(numero);

    printf("\nContagem crescente:\n");
    contagemCrescente(numero);

    return 0;
}

// versao 1: de n ate 1
void contagem(int n) {
    // caso base: chegou no 0, a contagem acabou
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }
    printf("%d\n", n);   // imprime PRIMEIRO...
    contagem(n - 1);     // ...e DEPOIS chama pro proximo numero
}

// versao 2: de 1 ate n
void contagemCrescente(int n) {
    // caso base: nao tem mais nada pra imprimir
    if (n == 0) {
        return;
    }
    contagemCrescente(n - 1);   // chama PRIMEIRO...
    printf("%d\n", n);          // ...e so imprime na VOLTA
}

// O que muda: na versao 1 o printf vem ANTES da chamada recursiva, entao cada
// numero e impresso na ida (empilhando): n, n-1, ..., 1.
// Na versao 2 o printf vem DEPOIS da chamada, entao nenhuma chamada imprime
// enquanto empilha. Elas so imprimem quando a chamada de baixo termina, ou seja,
// no desempilhamento. A primeira a imprimir e a mais funda (n = 1), depois 2,
// ate n. Mesma funcao, so trocou a ordem de duas linhas e a saida inverte.
