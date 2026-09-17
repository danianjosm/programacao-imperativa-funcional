/* Questao 03. Formatacao de Saida em Bases Numericas e ASCII — Leia um unico numero inteiro
fornecido pelo usuario e exiba uma unica mensagem no console que mostre esse mesmo valor nas
seguintes representacoes simultaneas: base decimal (%d), base hexadecimal em caixa baixa (%x),
base octal (%o) e o caractere correspondente a tabela ASCII (%c). */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | Caractere ASCII: %c\n", numero, numero, numero, numero);

    system("PAUSE");
    return 0;
}
