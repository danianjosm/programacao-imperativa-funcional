/* Questao 20. Teorema de Pitagoras e a Hipotenusa — Escreva um programa em C que peca
para o usuario inserir os valores correspondentes aos dois catetos (lado_a e lado_b) de um
triangulo retangulo. O programa deve calcular e exibir na tela o comprimento de sua hipotenusa.
Dica: utilize o teorema de Pitagoras (hipotenusa = raiz quadrada da soma dos quadrados dos
catetos), importando as funcoes pow() ou sqrt() de <math.h>. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float ladoA, ladoB, hipotenusa;

    printf("Digite o valor do cateto a: ");
    scanf("%f", &ladoA);
    printf("Digite o valor do cateto b: ");
    scanf("%f", &ladoB);

    hipotenusa = sqrt(pow(ladoA, 2) + pow(ladoB, 2));

    printf("A hipotenusa vale: %.2f\n", hipotenusa);

    system("PAUSE");
    return 0;
}

// compilar com: gcc 20.c -o 20 -lm
