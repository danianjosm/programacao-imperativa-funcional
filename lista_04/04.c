/* 
Questão 04. Seleção Múltipla com switch-case e Efeito Fall-Through — O comando switch é
utilizado para seleção entre múltiplas alternativas. Observe o programa a seguir:
#include <stdio.h>
int main() {
int codigo = 2;
switch (codigo) {
case 1:
printf("Bronze\n");
case 2:
printf("Prata\n");
case 3:
printf("Ouro\n");
break;
default:
printf("Sem Medalha\n");
}
return 0;
}

a) Escreva a saída exata gerada no terminal ao executar este programa. Explique por que ocorreu mais
de uma impressão.
b) Qual é o papel da instrução break dentro de um bloco switch-case e qual é o nome do fenômeno que
ocorre quando ela é omitida?
c) Quais tipos de dados de variáveis ou expressões podem ser utilizados como argumento no comando
switch (expressão)? É permitido usar float ou double? Justifique.
*/


// QUESTÃO 04

// a) A saída no terminal vai ser:
// Prata
// Ouro
//
// Isso acontece porque o codigo vale 2, então o switch entra
// direto no case 2 e imprime "Prata". Só que o case 2 não tem
// break, então o programa não para ali e continua executando
// o próximo case, imprimindo "Ouro". Aí sim ele encontra o
// break no case 3 e sai do switch. Por isso o "Bronze" não
// aparece (ele começou no 2) e o "Sem Medalha" também não
// (o break parou antes).

// b) O break serve pra encerrar o switch assim que o case certo
// termina de executar. Sem ele, o programa vai "caindo" pelos
// cases de baixo e executando tudo até achar um break ou chegar
// no fim do switch. Esse fenômeno se chama fall-through.
// Às vezes ele é usado de propósito, quando a gente quer que
// vários cases façam a mesma coisa, mas na maioria das vezes
// esquecer o break gera erro de lógica.

// c) O switch só aceita valores do tipo inteiro, como int, char,
// short, long e enum. O char funciona porque, no fundo, ele é
// guardado como um número (o código da tabela ASCII).
//
// Não dá pra usar float nem double. O switch compara se o valor
// é exatamente igual a cada case, e números com casas decimais
// nem sempre são guardados de forma exata na memória (um 0.1,
// por exemplo, pode virar 0.1000000001). Isso tornaria a
// comparação pouco confiável, então a linguagem C simplesmente
// não permite. Se precisar testar valores decimais, o certo é
// usar if-else.