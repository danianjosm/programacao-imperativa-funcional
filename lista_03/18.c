/* Questao 18. Inversao de Digitos de um Numero Inteiro (Algoritmo Numerico) — Elabore um programa
que solicite ao usuario um numero inteiro positivo (ex: 12345) e construa um novo numero inteiro com
os digitos em ordem inversa (ex: 54321). Dica: utilize um laco enquanto o numero for maior que zero,
extraindo o ultimo digito com o operador resto (%) e reduzindo o numero com a divisao inteira (/). */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, invertido = 0, digito;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    while (numero > 0)
    {
        digito = numero % 10;                // pega o ultimo digito (12345 % 10 = 5)
        invertido = invertido * 10 + digito; // empurra o que ja tem pra esquerda e coloca o digito no fim
        numero = numero / 10;                // tira o ultimo digito (12345 / 10 = 1234)
    }

    printf("Numero invertido: %d\n", invertido);

    system("PAUSE");
    return 0;
}

// teste de mesa com 123: invertido = 3 -> 32 -> 321
