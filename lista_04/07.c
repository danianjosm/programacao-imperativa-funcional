/*Questão 07. Raiz Quadrada ou Quadrado de um Número Real — Escreva um programa em C que
leia um número real. Se o número for positivo ou igual a zero, calcule e imprima a sua raiz quadrada
(utilizando a função sqrt() da biblioteca <math.h>). Caso o número seja negativo, imprima o quadrado
desse número (x2).*/

// QUESTÃO 07

#include <stdio.h>
#include <math.h>

int main() {
    float numero, resultado;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    // se for positivo ou zero, calculo a raiz quadrada
    if (numero >= 0) {
        resultado = sqrt(numero);
        printf("A raiz quadrada de %.2f e %.2f\n", numero, resultado);
    }
    // se for negativo, calculo o quadrado (o numero vezes ele mesmo)
    else {
        resultado = numero * numero;
        printf("O quadrado de %.2f e %.2f\n", numero, resultado);
    }

    return 0;
}

// Usei o >= 0 porque a questão pede que o zero também entre na
// raiz quadrada. Não dá pra tirar raiz de número negativo nos
// reais, por isso no caso negativo o programa calcula o quadrado.
//
// Obs: em alguns compiladores (como o gcc no Linux) é preciso
// colocar -lm no final do comando de compilar pra usar o sqrt:
// gcc questao07.c -o questao07 -lm