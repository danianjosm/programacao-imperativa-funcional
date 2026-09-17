/* Questao 07. Leitura e Inversao Formatada de Datas — Escreva um programa completo em C
que solicite ao usuario a insercao de uma data no formato dd/mm/aaaa (utilizando as barras como
separadores na digitacao) e a exiba em formato invertido aaaa/mm/dd. Use as capacidades
especificas de formatacao de string de controle da funcao scanf(). */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, ano;

    printf("Digite uma data no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("Data invertida: %d/%d/%d\n", ano, mes, dia);

    system("PAUSE");
    return 0;
}
