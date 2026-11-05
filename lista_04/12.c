/*Questão 12. Dia da Semana com Comando switch-case — Desenvolva um programa em C que leia

um número inteiro de 1 a 7 e imprima o dia da semana correspondente (1 = Domingo, 2 = Segunda-
feira, ..., 7 = Sábado). Caso o usuário digite um número fora do intervalo [1, 7], o programa deve exibir

'Erro: Opção Inválida!' através da cláusula default.*/

// QUESTÃO 12

#include <stdio.h>

int main() {
    int dia;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terca-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
        default:
            printf("Erro: Opcao Invalida!\n");
    }

    return 0;
}

// O switch compara o valor de dia com cada case e executa o que
// bater. Coloquei break no final de cada case pra evitar o
// fall-through, senão o programa ia imprimir todos os dias que
// vêm depois do certo.
//
// Se o número não for nenhum de 1 a 7, nenhum case bate e o
// programa cai no default, que mostra a mensagem de erro.
//
// Não coloquei acentos nos printf porque, dependendo do terminal,
// eles podem aparecer como caracteres estranhos.