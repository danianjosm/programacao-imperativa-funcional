/* Questao 21. Jogo de Adivinhacao com Letras Aleatorias e Dicas (rand()) — Desenvolva um jogo
interativo em C que sorteie uma letra minuscula aleatoria entre 'a' e 'z' usando a funcao
rand() % 26 + 'a' da biblioteca <stdlib.h>. O programa deve pedir para o usuario adivinhar a letra.
A cada tentativa errada, o programa deve informar se a letra secreta vem antes ou depois da letra
digitada no alfabeto. Quando o usuario acertar, exiba uma mensagem de parabens e o total de
tentativas. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char secreta, chute;
    int tentativas = 0;

    // srand com o horario faz o sorteio mudar a cada execucao
    srand(time(NULL));
    secreta = rand() % 26 + 'a'; // 0 a 25 + 'a' = alguma letra de 'a' a 'z'

    do
    {
        printf("Chute uma letra (a-z): ");
        scanf(" %c", &chute); // o espaco antes do %c pula o Enter que sobrou da leitura anterior
        tentativas++;

        // letras sao numeros na tabela ASCII, entao da pra comparar com < e >
        if (chute < secreta)
            printf("A letra secreta vem DEPOIS de '%c'.\n", chute);
        else if (chute > secreta)
            printf("A letra secreta vem ANTES de '%c'.\n", chute);
    } while (chute != secreta);

    printf("Parabens! A letra era '%c'. Tentativas: %d\n", secreta, tentativas);

    system("PAUSE");
    return 0;
}
