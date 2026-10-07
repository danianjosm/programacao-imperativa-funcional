/* Questao 12. Tabela de Conversao de Temperaturas (Celsius, Fahrenheit e Kelvin) — Crie um
programa que imprima uma tabela de conversao de temperaturas de 0 a 100 graus C, com variacao de 5
em 5 graus Celsius. Para cada valor em Celsius, o programa deve calcular e exibir os valores
equivalentes em Fahrenheit (F = (9*C)/5 + 32) e Kelvin (K = C + 273.15), utilizando formatacao
alinhada com duas casas decimais. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;

    printf("%10s %12s %10s\n", "Celsius", "Fahrenheit", "Kelvin");

    // o incremento do for pode ser de 5 em 5, nao precisa ser so ++
    for (c = 0; c <= 100; c += 5)
    {
        // %10.2f = ocupa 10 espacos com 2 casas decimais, por isso as colunas alinham
        printf("%10.2f %12.2f %10.2f\n", c, (9 * c) / 5 + 32, c + 273.15);
    }

    system("PAUSE");
    return 0;
}
