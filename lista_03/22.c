/* Questao 22. Geracao do Triangulo de Floyd com Lacos Aninhados — Escreva um programa em C que leia
um numero inteiro positivo N e imprima N linhas do Triangulo de Floyd. Por exemplo, se N = 5, a
saida na tela deve ser exatamente:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, linha, coluna, numero = 1;

    printf("Digite N: ");
    scanf("%d", &n);

    // laco de fora = linhas; laco de dentro = quantos numeros naquela linha
    for (linha = 1; linha <= n; linha++)
    {
        // a linha 1 tem 1 numero, a linha 2 tem 2, e assim por diante
        for (coluna = 1; coluna <= linha; coluna++)
        {
            printf("%d ", numero);
            numero++; // o contador nao zera entre as linhas, ele so continua
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}
