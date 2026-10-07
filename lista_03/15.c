/* Questao 15. Filtragem Numerica Simultanea com Operadores Logicos — Criar um programa em C que
solicite ao usuario um numero limite inteiro positivo NUM. Em seguida, o programa deve imprimir todos
os numeros no intervalo fechado de 1 ate NUM que sejam multiplos de 3 e de 5 ao mesmo tempo (por
exemplo: 15, 30, 45, ...). Caso nenhum numero satisfaca a condicao, informe o usuario. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, encontrou = 0;

    printf("Digite um numero limite positivo: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        // && = as duas condicoes precisam ser verdadeiras
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d ", i);
            encontrou++;
        }
    }
    printf("\n");

    if (encontrou == 0)
        printf("Nenhum numero entre 1 e %d eh multiplo de 3 e de 5 ao mesmo tempo.\n", num);

    system("PAUSE");
    return 0;
}
