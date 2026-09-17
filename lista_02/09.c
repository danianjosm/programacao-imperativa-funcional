/* Questao 09. Operacoes Aritmeticas Basicas e Cast de Tipos — Escreva um programa em C que
solicite e leia dois numeros inteiros do usuario. O programa deve calcular e exibir os resultados
das quatro operacoes aritmeticas basicas (soma, subtracao, multiplicacao e divisao real). Certifique-
se de que o resultado da divisao seja exibido com duas casas decimais e trate de forma explicita a
divisao real sem perdas de precisao (divisao inteira). Adicione um comentario informando como
evitaria matematicamente a divisao por zero neste capitulo. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("Soma: %d\n", num1 + num2);
    printf("Subtracao: %d\n", num1 - num2);
    printf("Multiplicacao: %d\n", num1 * num2);

    /* pra evitar divisao por zero neste capitulo, o jeito seria usar o operador relacional != pra
    testar "if (num2 != 0)" antes de fazer a conta, e so dividir se for diferente de zero */
    printf("Divisao real: %.2f\n", (float) num1 / num2); // o cast pra float evita a divisao inteira

    system("PAUSE");
    return 0;
}
