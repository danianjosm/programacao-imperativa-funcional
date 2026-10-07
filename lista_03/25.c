/* Questao 25. Analise e Teste de Primalidade de um Numero Inteiro — Escreva um programa em C que
receba um numero inteiro positivo N e determine se N e um numero primo. Um numero e primo se for
maior que 1 e divisivel apenas por 1 e por ele mesmo. O programa deve contar a quantidade de
divisores encontrados no laco e exibir uma mensagem conclusiva. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, divisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    // testa todo mundo de 1 ate n e conta quem divide sem resto
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            divisores++;
    }

    printf("%d tem %d divisor(es).\n", n, divisores);

    // primo = exatamente 2 divisores (1 e ele mesmo). o 1 tem so 1 divisor, entao nao eh primo
    if (divisores == 2)
        printf("%d eh primo.\n", n);
    else
        printf("%d nao eh primo.\n", n);

    system("PAUSE");
    return 0;
}
