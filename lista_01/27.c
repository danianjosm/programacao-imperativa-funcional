/* Questão 27. Escreva um programa em C que solicite ao usuário (usando a função scanf()) um valor
inteiro correspondente a um intervalo de tempo em segundos. O programa deve processar esse dado,
calcular e exibir o equivalente formatado em Horas, Minutos e Segundos restantes (Exemplo: 3665
segundos correspondem a 1 hora, 1 minuto e 5 segundos).*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int segundosTotais, horas, minutos, segundos;

    printf("Digite o intervalo de tempo em segundos: ");
    scanf("%d", &segundosTotais);

    horas = segundosTotais / 3600;
    minutos = (segundosTotais % 3600) / 60;
    segundos = segundosTotais % 60;

    printf("%d segundos correspondem a %d hora(s), %d minuto(s) e %d segundo(s).\n",
           segundosTotais, horas, minutos, segundos);

    system("PAUSE");
    return 0;
}