/* Questao 21. Leitura de Caractere e Exibicao de seu Codigo ASCII — A tabela ASCII associa
cada caractere a um valor inteiro unico de 1 byte. Desenvolva um programa em C que leia um
caractere do teclado informado pelo usuario e exiba na tela esse mesmo caractere formatado como
um numero inteiro. Escreva uma breve explicacao em comentarios no seu codigo sobre o que esse
numero representa. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere); // o espaco antes do %c ignora o \n residual do buffer

    /* esse numero eh o codigo ASCII do caractere, ou seja, a posicao dele na tabela ASCII
    que o computador usa por baixo dos panos pra guardar qualquer caractere como um numero */
    printf("O codigo ASCII de '%c' e: %d\n", caractere, caractere);

    system("PAUSE");
    return 0;
}
