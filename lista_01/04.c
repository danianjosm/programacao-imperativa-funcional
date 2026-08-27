/*Questão 04. Um estudante iniciante de programação em C escreveu o programa abaixo e encontrou
diversos erros que impedem a sua compilação. Analise o código atentamente, aponte cada um dos
erros presentes e escreva a versão corrigida e funcional desse programa:

#include <stdio.h>
#include <stdlib.h>;
int Main{}
(
printf( Existem %d semanas no ano.,52);
cout << endl;
system("PAUSE");
return 0;
)*/

#include <stdio.h>
#include <stdlib.h> /* tinha uma virgula no fim da biblioteca*/

int main (){ /* estava faltando o () da função para parametros. O correto é main não Main*/
    printf("Existem %d semanas no ano.\n", 52); /* estava faltando as aspas */
    system("PAUSE"); 
    return 0;



}