/* Questao 19. Calculo do N-esimo Termo da Sequencia de Fibonacci — A sequencia de Fibonacci e
dada por: 1, 1, 2, 3, 5, 8, 13, 21, 34, ... onde cada termo a partir do terceiro e a soma dos dois
anteriores. Escreva um programa que solicite ao usuario o numero do termo desejado (N) e calcule e
imprima o valor correspondente desse termo, alem de listar todos os termos ate N. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    long long int anterior = 1, atual = 1, proximo;

    printf("Digite o numero do termo (N): ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Erro: N precisa ser 1 ou maior.\n");
    }
    else
    {
        printf("Termos: ");
        for (i = 1; i <= n; i++)
        {
            if (i <= 2)
            {
                // os dois primeiros termos sao 1 por definicao
                printf("1 ");
            }
            else
            {
                proximo = anterior + atual; // soma os dois anteriores
                anterior = atual;           // e anda uma casa pra frente
                atual = proximo;
                printf("%lld ", atual);
            }
        }
        printf("\nO termo %d vale %lld\n", n, atual);
    }

    system("PAUSE");
    return 0;
}
