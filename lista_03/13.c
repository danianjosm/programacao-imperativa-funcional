/* Questao 13. Calculo de Fatorial com Tratamento de Casos Especiais — Escreva um programa que leia
um numero inteiro N e calcule o seu fatorial (N!). Lembre-se de que 0! = 1 e 1! = 1. O programa deve
utilizar o tipo de dado 'long long int' para evitar estouro de memoria prematuro e deve exibir uma
mensagem de erro caso o usuario forneca um numero negativo. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    long long int fatorial = 1;

    printf("Digite N: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Erro: nao existe fatorial de numero negativo.\n");
    }
    else
    {
        // para 0 e 1 o laco nem roda, e o fatorial continua 1
        for (i = 2; i <= n; i++)
            fatorial *= i;

        // %lld eh o formatador do long long int
        printf("%d! = %lld\n", n, fatorial);
    }

    system("PAUSE");
    return 0;
}

// obs: o long long aguenta ate 20!. de 21! em diante o valor estoura e sai errado.
