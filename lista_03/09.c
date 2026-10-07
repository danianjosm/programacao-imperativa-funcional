/* Questao 09. Acumulador de Valores Reais com Sentinela de Parada Negativa — Faca um programa
que permita ao usuario fornecer uma sequencia indeterminada de valores reais positivos. O programa
deve parar de solicitar valores no momento em que o usuario fornecer um valor negativo (que
funcionara como sentinela de parada). Ao final, o programa deve exibir a quantidade de valores
validos digitados, a soma total e a media aritmetica (garantindo que o valor negativo de parada nao
entre nos calculos). */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, soma = 0;
    int quantidade = 0;

    printf("Digite um valor (negativo para parar): ");
    scanf("%f", &valor);

    // le antes do laco e no fim do corpo: assim o negativo nunca entra na soma
    while (valor >= 0)
    {
        soma += valor;
        quantidade++;

        printf("Digite um valor (negativo para parar): ");
        scanf("%f", &valor);
    }

    printf("Quantidade de valores: %d\n", quantidade);
    printf("Soma total: %.2f\n", soma);

    // evita divisao por zero se o primeiro valor ja for negativo
    if (quantidade > 0)
        printf("Media: %.2f\n", soma / quantidade);
    else
        printf("Nenhum valor valido, nao da pra calcular a media.\n");

    system("PAUSE");
    return 0;
}
