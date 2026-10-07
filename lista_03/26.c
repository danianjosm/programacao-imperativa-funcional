/* Questao 26. Mapeamento e Soma de Primos em um Intervalo Fechado [A, B] — Desenvolva um programa
que solicite ao usuario dois numeros inteiros positivos A e B (garantindo A < B). O programa deve
encontrar e listar todos os numeros primos situados no intervalo fechado [A, B], e ao final exibir
a soma total de todos os primos encontrados nesse intervalo. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, numero, i, divisores, soma = 0;

    // repete enquanto nao vier A < B, os dois positivos
    do
    {
        printf("Digite A: ");
        scanf("%d", &a);
        printf("Digite B (maior que A): ");
        scanf("%d", &b);
    } while (a < 1 || b < 1 || a >= b);

    printf("Primos entre %d e %d: ", a, b);

    // laco de fora passa por cada numero; o de dentro eh o teste da questao 25
    for (numero = a; numero <= b; numero++)
    {
        divisores = 0; // zera pra cada numero novo
        for (i = 1; i <= numero; i++)
        {
            if (numero % i == 0)
                divisores++;
        }

        if (divisores == 2)
        {
            printf("%d ", numero);
            soma += numero;
        }
    }

    printf("\nSoma dos primos: %d\n", soma);

    system("PAUSE");
    return 0;
}
