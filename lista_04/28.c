// QUESTÃO 28

#include <stdio.h>

int main() {
    int opcao;

    printf("===== BANCO - ATENDIMENTO AUTOMATICO =====\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferencia\n");
    printf("4 - Falar com Atendente\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Voce sera direcionado para a consulta de saldo.\n");
            break;
        case 2:
            printf("Voce sera direcionado para a emissao do extrato.\n");
            break;
        case 3:
            printf("Voce sera direcionado para a area de transferencias.\n");
            break;
        case 4:
            printf("Aguarde, voce sera transferido para um atendente.\n");
            break;
        default:
            printf("Opcao invalida! Por favor, digite um numero de 1 a 4.\n");
    }

    return 0;
}

// O programa mostra o menu com as quatro opções e lê o número que o
// usuário digitou.
//
// O switch compara esse número com cada case e mostra a mensagem de
// direcionamento da opção escolhida. Coloquei break em todos os cases
// pra que só uma mensagem apareça, senão ia acontecer o fall-through
// e o programa mostraria as mensagens das opções seguintes também.
//
// Se o usuário digitar qualquer número que não seja de 1 a 4, nenhum
// case bate e o programa cai no default, que avisa que a opção é
// inválida.