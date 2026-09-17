/* Questao 27. Geracao de Valores Aleatorios via Resto de Divisao — Escreva um programa em
C que gere e exiba no console tres numeros aleatorios inteiros dentro do intervalo estrito de 1 a 6
(simulando o lancamento de tres dados independentes). Utilize as funcoes rand() e srand() da
biblioteca <stdlib.h>, aliadas ao uso do operador de resto da divisao (%) estudado no Capitulo 2. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dado1, dado2, dado3;

    srand(time(NULL)); // usa o horario atual como semente pra nao sortear sempre os mesmos numeros

    dado1 = rand() % 6 + 1; // rand() % 6 da de 0 a 5, +1 desloca pra 1 a 6
    dado2 = rand() % 6 + 1;
    dado3 = rand() % 6 + 1;

    printf("Os dados sorteados foram: %d, %d e %d\n", dado1, dado2, dado3);

    system("PAUSE");
    return 0;
}
