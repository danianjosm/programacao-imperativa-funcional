/* Questao 20. Tabela de Caracteres ASCII e Codigos Hexadecimais — Escreva um programa que utilize
um laco for para imprimir a tabela de caracteres da tabela ASCII para os codigos decimais
compreendidos entre 32 e 126 (caracteres imprimiveis). Para cada codigo, imprima o valor em decimal,
o valor equivalente em hexadecimal (usando o formatador %X) e o proprio caractere visivel. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo;

    printf("Dec\tHex\tChar\n");

    // o mesmo numero sai diferente dependendo do formatador: %d, %X ou %c
    for (codigo = 32; codigo <= 126; codigo++)
        printf("%d\t%X\t%c\n", codigo, codigo, codigo);

    system("PAUSE");
    return 0;
}
