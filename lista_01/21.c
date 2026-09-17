/* Questão 21. Desenvolva três versões independentes de programas em C para produzir no console a
saída de texto abaixo. A primeira versão deve usar uma única chamada de printf(); a segunda deve usar
exatamente duas instruções de impressão independentes; e a terceira deve desenhar as frases
emolduradas utilizando caracteres gráficos de caixa:

Treinamento em programação.
Linguagem C.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Treinamento em programacao.\nLinguagem C.\n");

    system("PAUSE");
    return 0;
}

/* 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Treinamento em programacao.\n");
    printf("Linguagem C.\n");

    system("PAUSE");
    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
           '\xC9','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD',
           '\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD',
           '\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xBB');

    printf("%c Treinamento em programacao. %c\n", '\xBA', '\xBA');
    printf("%c Linguagem C.                %c\n", '\xBA', '\xBA');

    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
           '\xC8','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD',
           '\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD',
           '\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xBC');

    system("PAUSE");
    return 0;
}
*/