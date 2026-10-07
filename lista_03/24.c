/* Questao 24. Padrao Visual em X (Diagonais Cruzadas) — Crie um programa em C que solicite uma
dimensao impar N (entre 3 e 19). O programa deve utilizar lacos aninhados e condicionais logicas
para desenhar um padrao visual de duas diagonais que se cruzam no centro formando um 'X' com o
caractere '*'. Por exemplo, para N = 5:
*   *
 * *
  *
 * *
*   *  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, linha, coluna;

    do
    {
        printf("Digite um numero impar N (3 a 19): ");
        scanf("%d", &n);
    } while (n < 3 || n > 19 || n % 2 == 0);

    for (linha = 0; linha < n; linha++)
    {
        for (coluna = 0; coluna < n; coluna++)
        {
            // diagonal principal: linha == coluna
            // diagonal secundaria: linha + coluna == n - 1
            if (linha == coluna || linha + coluna == n - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}
