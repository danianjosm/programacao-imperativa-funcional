/* Questao 15. Geracao de Padroes Visuais com Lacos Aninhados: Triangulo de Floyd — Escreva um
programa em C que leia um numero inteiro positivo N e imprima N linhas do Triangulo de Floyd
utilizando lacos aninhados. Por exemplo, para N = 5, a saida no console deve ser exatamente:
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
        for (coluna = 1; coluna <= linha; coluna++)
        {
            printf("%d ", numero);
            numero++; // o contador continua de onde parou na linha anterior
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}
