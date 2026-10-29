/* Questão 01. Avaliação de Expressões Condicionais e Atribuição vs. Igualdade — Em relação à
sintaxe e semântica do comando if na Linguagem C, responda analiticamente:
a) Qual é o efeito prático de escrever if (x = 0) em vez de if (x == 0)? Explique o que acontece com a
variável x e qual bloco de código será executado.
b) Como a Linguagem C interpreta valores numéricos inteiros ou reais dentro da condição do comando
if? O que significa um resultado ser avaliado como 'falso' ou 'verdadeiro'?
c) Analise a instrução if (x = -5) e determine se o bloco de código associado será executado ou
ignorado. Justifique sua resposta com base no padrão ANSI C.*/

// A) x = 0 tranforma o valor de x em 0, já x == 0 é uma compração X é igual a zero? if (x = 0), a variável x recebe o valor 0 e perde o valor que tinha antes. 
//Como o resultado dessa atribuição é 0, e em C o valor 0 é considerado falso, a condição do if é sempre falsa.
// Por isso, o bloco do if nunca é executado, e o bloco do segundo if é executado sempre     

//B) em C, o if avalia a condição como um numero. Se o valor for 0 ou 0.0 ele considera falso
//e qualquer valor que for diferente de zero inteiro ou real, positivo ou negativo é considerado
//verdadeiro. Quando tem uma comparação como X > y o C vai retornar um numero, 1 se a condição for
// verdadeira 0 se for falsa   

//C) independetemente do valor de x ele está recebendo uma atribuição e logo passa a ser -5 mas por -5 não ser 0,
// que é o valor que em c corresponde a falso, esse bloco é execultado 