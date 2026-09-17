/*Questão 22. Desenhe no console um carro e uma caminhonete utilizando caracteres de bloco e de
controle estudados no capítulo. Utilize sequências de escape em hexadecimal (como \xDC e \xDF) para
renderizar a seguinte arte gráfica:

▄▄████▄▄
▀O▀▀▀▀▀O▀
▄▄█ ██████
▀O▀▀▀▀▀OO▀*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Carro */
    printf("%c%c%c%c%c%c%c%c\n", '\xDC','\xDC','\xDB','\xDB','\xDB','\xDB','\xDC','\xDC');
    printf("%c%c%c%c%c%c%c%c\n", '\xDF','O','\xDF','\xDF','\xDF','\xDF','\xDF','O','\xDF');

    printf("\n");

    /* Caminhonete */
    printf("%c%c%c%c%c%c%c%c%c\n", '\xDC','\xDC','\xDB',' ','\xDB','\xDB','\xDB','\xDB','\xDB','\xDB');
    printf("%c%c%c%c%c%c%c%c%c\n", '\xDF','O','\xDF','\xDF','\xDF','\xDF','\xDF','O','O','\xDF');

    system("PAUSE");
    return 0;
}