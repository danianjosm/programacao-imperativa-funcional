/*
Questão 05. Avaliação de Curto-Circuito em Operadores Lógicos — Os operadores lógicos (&& e
||) realizam a avaliação de curto-circuito (short-circuit evaluation). Considere as variáveis inteiras a = 0,
b = 5, c = 10 e analise o código:
if (a != 0 && ++b > 5)
c += 10;
else
c -= 2;
printf("a = %d, b = %d, c = %d\n", a, b, c);

Cesar School | Programação Imperativa e Funcional | Página 3

a) Qual será a saída exata impressa pelo comando printf? Observe se o incremento ++b foi executado
ou ignorado.
b) Explique o conceito de avaliação de curto-circuito para o operador lógico E (&&) e para o operador
lógico OU (||).
c) Qual seria o valor final de b e c se a condição fosse alterada para if (a == 0 || ++b > 5)?


*/

// QUESTÃO 05

// a) A saída vai ser:
// a = 0, b = 5, c = 8
//
// Como a vale 0, a primeira parte da condição (a != 0) já dá
// falso. No &&, se a primeira parte é falsa, o resultado inteiro
// já vai ser falso, então o C nem olha a segunda parte. Por isso
// o ++b foi ignorado e o b continuou valendo 5. Como a condição
// deu falso, o programa foi pro else e fez c -= 2, então c ficou
// 10 - 2 = 8.

// b) Curto-circuito é quando o C para de avaliar a condição assim
// que ele já tem certeza do resultado, sem precisar olhar o resto.
//
// No && (E), as duas partes precisam ser verdadeiras. Então, se a
// primeira já for falsa, ele para ali, porque o resultado vai ser
// falso de qualquer jeito.
//
// No || (OU), basta uma parte ser verdadeira. Então, se a primeira
// já for verdadeira, ele para ali, porque o resultado vai ser
// verdadeiro de qualquer jeito.
//
// Isso é importante porque, se a segunda parte tiver alguma ação
// (tipo um ++b), ela pode simplesmente não acontecer.

// c) Com if (a == 0 || ++b > 5):
// Como a vale 0, a primeira parte (a == 0) já dá verdadeiro. No ||,
// isso basta, então o ++b de novo não é executado. A condição dá
// verdadeiro e o programa faz c += 10.
//
// Valores finais: b = 5 e c = 20.


