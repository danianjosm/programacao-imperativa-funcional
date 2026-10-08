/* Questao 10. Resto da Divisao (%) e Decomposicao do Tempo — Desenvolva um programa em C que
receba uma quantidade inteira de segundos informada pelo usuario. O programa deve calcular e exibir
o tempo equivalente decomposto em Horas, Minutos e Segundos restantes (Exemplo: 3665 segundos
correspondem a 1 hora, 1 minuto e 5 segundos). */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total, horas, minutos, segundos;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &total);

    horas = total / 3600;            // 1 hora = 3600 segundos; divisao inteira descarta o resto
    minutos = (total % 3600) / 60;   // o que sobrou das horas, convertido em minutos
    segundos = total % 60;           // o que sobrou dos minutos

    printf("%d segundos = %d hora(s), %d minuto(s) e %d segundo(s)\n",
           total, horas, minutos, segundos);

    system("PAUSE");
    return 0;
}
