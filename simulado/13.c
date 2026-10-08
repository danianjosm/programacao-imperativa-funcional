/* Questao 13. Calculo do Fatorial com Tratamento do Zero e Tipo long long int — Escreva um
programa em C que solicite um numero inteiro N e calcule o seu fatorial (N!). Lembre-se que 0! = 1 e
1! = 1. O programa deve utilizar a variavel do resultado como long long int com o especificador
%lld para evitar estouro de memoria e tratar entradas invalidas (numeros negativos). */

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

        printf("%d! = %lld\n", n, fatorial);
    }

    system("PAUSE");
    return 0;
}
