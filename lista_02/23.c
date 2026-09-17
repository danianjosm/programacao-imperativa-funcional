/* Questao 23. Calculo de Horario de Termino de Experimento Biologico — Desenvolva um
programa em C que auxilie na medicao do tempo de experimentos cientificos de laboratorio. O
programa deve receber do usuario: a) O horario de inicio do experimento no formato Horas,
Minutos e Segundos de forma independente; b) A duracao total da experiencia expressa
estritamente em segundos. O programa deve calcular e exibir na tela o horario exato de termino
do experimento no formato hh:mm:ss. Utilize os operadores de divisao (/) e resto da divisao (%)
para obter os novos valores de tempo de forma estruturada. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horaInicio, minutoInicio, segundoInicio;
    int duracaoSegundos, totalSegundos;
    int horaFim, minutoFim, segundoFim;

    printf("Digite o horario de inicio (horas minutos segundos): ");
    scanf("%d %d %d", &horaInicio, &minutoInicio, &segundoInicio);

    printf("Digite a duracao do experimento (em segundos): ");
    scanf("%d", &duracaoSegundos);

    totalSegundos = (horaInicio * 3600) + (minutoInicio * 60) + segundoInicio + duracaoSegundos;

    horaFim = (totalSegundos / 3600) % 24; // % 24 pra caso o experimento passe da meia noite
    minutoFim = (totalSegundos % 3600) / 60;
    segundoFim = totalSegundos % 60;

    printf("Horario de termino: %02d:%02d:%02d\n", horaFim, minutoFim, segundoFim);

    system("PAUSE");
    return 0;
}
