/* Questao 10. Geracao de Multiplos com Formatacao em Colunas — Desenvolva um programa que
determine e exiba no console os 100 primeiros multiplos inteiros e positivos de 3 (isto e: 3, 6, 9,
12, ...). A saida deve ser formatada organizadamente em colunas contendo 10 numeros por linha
separados por tabulacao (\t). */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        printf("%d\t", i * 3);

        // a cada 10 numeros, quebra a linha
        if (i % 10 == 0)
            printf("\n");
    }

    system("PAUSE");
    return 0;
}
