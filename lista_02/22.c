/* Questao 22. Conversao de Caixa Alta para Baixa via Tabela ASCII — Escreva um programa que
solicite e leia uma letra maiuscula do usuario. O programa deve converte-la em uma letra
minuscula utilizando operacoes aritmeticas de deslocamento na tabela ASCII (offset de 32 posicoes
ou atraves da subtracao do caractere 'A' e adicao de 'a'). Nao utilize funcoes prontas de bibliotecas
como <ctype.h>. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra, minuscula;

    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &letra);

    minuscula = letra + 32; // deslocamento de 32 posicoes na tabela ASCII (A=65, a=97)

    printf("A letra minuscula correspondente e: %c\n", minuscula);

    system("PAUSE");
    return 0;
}
