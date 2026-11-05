/*Questão 03. Operador Condicional Ternário vs. Estrutura if-else — O operador condicional
ternário (? :) é uma forma concisa de tomada de decisão. Observe a instrução abaixo:
media = (nota1 + nota2) / 2.0;
situacao = (media >= 7.0) ? 'A' : 'R';

a) Explique detalhadamente o funcionamento da segunda linha de código e qual valor será armazenado
na variável situacao se media = 6.8.
b) Reescreva o trecho de código acima utilizando obrigatoriamente a estrutura tradicional if-else.
c) O operador ternário pode substituir qualquer estrutura if-else na Linguagem C? Explique as limitações
do operador ternário em relação a blocos com múltiplos comandos.

*/

//A) a) Nessa linha, o programa primeiro olha se a média é maior
 //ou igual a 7. Se for, a variável situacao recebe 'A' (aprovado).
 //Se não for, ela recebe 'R' (reprovado). Basicamente o ternário
 //funciona assim: condição ? se verdadeiro : se falso.
 // Se a média for 6.8, a condição 6.8 >= 7.0 dá falso, então
 //situacao vai guardar 'R'.

 /* b) Mesmo código, só que com if-else: 
media = (nota1 + nota2) / 2.0;

if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}

/* c) Não. O ternário serve para escolher um valor entre dois,
  então ele funciona bem em casos simples como esse, em que
  a gente só quer atribuir 'A' ou 'R' a uma variável.
  O problema é quando cada caminho precisa fazer várias coisas,
  tipo imprimir uma mensagem e ainda somar um contador. Nesse
  caso o ternário não dá conta, porque ele não aceita um bloco
  com vários comandos entre chaves. Ele também não aceita coisas
  como return, break ou laços dentro dele, e sempre precisa ter
  as duas partes (verdadeiro e falso), enquanto o if pode ser
  usado sem o else.
 
  Além disso, se a gente começar a colocar um ternário dentro
  do outro, o código fica bem confuso de ler. Então, pra
  decisões simples o ternário é prático, mas pra qualquer coisa
  com mais de um comando, o melhor é usar o if-else normal.
 */