/* Questão 20. Caracteres gráficos baseados na tabela ASCII estendida (Codepage 437) podem ser
usados para desenhar molduras e caixas de diálogo na tela de modo console. Desenvolva um programa
em C que produza uma moldura simples com exatamente 4 caracteres de largura por 4 de altura. Dica:

Cesar School | Programação Imperativa e Funcional | Página 6
utilize constantes de caracteres em hexadecimal para representar os cantos e as retas
horizontais/verticais:

Cantos Superiores: Esquerdo = \xC9, Direito = \xBB
Cantos Inferiores: Esquerdo = \xC8, Direito = \xBC
Linha Horizontal: \xCD, Linha Vertical: \xBA*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%c%c%c%c\n", '\xC9', '\xCD', '\xCD', '\xBB');
    printf("%c  %c\n", '\xBA', '\xBA');
    printf("%c  %c\n", '\xBA', '\xBA');
    printf("%c%c%c%c\n", '\xC8', '\xCD', '\xCD', '\xBC');

    system("PAUSE");
    return 0;
}