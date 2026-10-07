#include <stdio.h>
 
int main(){


//variaveis 
float diaria = 45; 
int dia;

float calculo_dia;
float somar;
float resultado_acrescimo;
float ir;
float resultado_imposto;
float total;

printf("quantos dias voce trabalhou?");
scanf("%d", &dia);

calculo_dia = diaria * dia; 

somar = 5.0/100 * calculo_dia;
resultado_acrescimo = somar + calculo_dia;
ir = 8.0/100 * calculo_dia;
resultado_imposto = calculo_dia - ir ; 
total = resultado_acrescimo - ir;


printf("seu salario foi de %.2f\n", calculo_dia);
printf("seu salario com acrescimo ficou %.2f\n", resultado_acrescimo);
printf("seu salario com desconto ficou %.2f\n", resultado_imposto);
printf("seu salario liquido é %.2f\n", total);


return 0;
}