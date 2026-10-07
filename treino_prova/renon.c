#include <stdio.h>
#include <math.h>

int main(){

int entrada;
int hora = 3600;
int minutos = 60;
int segundos;
int calculo_hora;
int calculo_minutos;

printf("digite a quantidade de segundos\n");
scanf("%d", &entrada);

calculo_hora = entrada / hora ;
segundos = entrada % hora ; // vai sobrar ex 65
calculo_minutos = segundos / minutos ; // vai capturar 1 
segundos = segundos % minutos; // vai capturar os segundos restantes 


printf("deu %d de horas e %d minutos e %d segundos", calculo_hora, minutos, segundos);


// em ordem logica na minha cabeça seria declarar quanto uma hora
// vale depois coletar quantos segundos a pessoa escreveu depois ve quantos segundo em uma hora cabe naquilo e ai se cabem 3600 ele retorna uma hora mas eu to perdida 


}