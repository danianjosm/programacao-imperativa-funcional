/* Questao 23. Desenho de Moldura e Quadrado Vazado com Caracteres — Desenvolva um programa que
solicite ao usuario a dimensao do lado de um quadrado L (com L entre 3 e 20). O programa deve
utilizar lacos aninhados para desenhar no console um quadrado vazado composto pelo caractere 'X'.
Por exemplo, para L = 5, a saida deve ser:
XXXXX
X   X
X   X
X   X
XXXXX */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l, linha, coluna;

    do
    {
        printf("Digite o lado L (3 a 20): ");
        scanf("%d", &l);
    } while (l < 3 || l > 20);

    for (linha = 1; linha <= l; linha++)
    {
        for (coluna = 1; coluna <= l; coluna++)
        {
            // X so na borda: primeira/ultima linha ou primeira/ultima coluna
            if (linha == 1 || linha == l || coluna == 1 || coluna == l)
                printf("X");
            else
                printf(" ");
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}
