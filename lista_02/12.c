/* Questao 12. Operadores Unarios de Antecessor e Sucessor — Elabore um programa em C que
receba um numero inteiro do usuario e, utilizando exclusivamente os operadores unarios de
incremento (++) e decremento (--), exiba o seu antecessor e o seu sucessor no console,
justificando sua implementacao logica. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, copia;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    /* uso uma copia do numero original pra cada conta, assim nao preciso somar/subtrair
    "na unha" com + e -, so uso o -- e o ++ igual o enunciado pede */
    copia = numero;
    printf("Antecessor: %d\n", --copia); // decrementa a copia e ja usa o valor novo

    copia = numero;
    printf("Sucessor: %d\n", ++copia); // incrementa a copia e ja usa o valor novo

    system("PAUSE");
    return 0;
}
