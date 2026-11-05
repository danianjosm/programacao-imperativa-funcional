/*
Questão 06. Construções else-if e Análise Lógica de Intervalos — Um programador escreveu o
código abaixo para classificar a faixa etária de um indivíduo, mas o programa apresenta comportamento
inconsistente para certas idades:
int idade = 25;
if (idade >= 60)
printf("Idoso\n");
if (idade >= 18)
printf("Adulto\n");
if (idade >= 12)
printf("Jovem\n");
else
printf("Criança\n");

a) Qual será a saída do programa para idade = 65? Explique por que múltiplas mensagens são exibidas.
b) Qual é a diferença fundamental de execução entre uma sequência de comandos if independentes e
uma cadeia else-if?
c) Reescreva o programa utilizando a estrutura elegante e correta else-if para garantir que apenas uma
categoria seja impressa.*/

// QUESTÃO 06

// a) Com idade = 65, a saída vai ser:
// Idoso
// Adulto
// Jovem
//
// Isso acontece porque os três if são independentes, ou seja, o
// programa testa cada um separadamente, sem ligar pro resultado
// do anterior. Como 65 é maior ou igual a 60, a 18 e a 12, as três
// condições dão verdadeiro e as três mensagens são impressas. O
// "Criança" não aparece porque o else está ligado só ao último if
// (idade >= 12), e esse deu verdadeiro.

// b) Numa sequência de if independentes, todas as condições são
// testadas, uma por uma, e mais de uma pode ser executada.
//
// Já na cadeia else-if, as condições são testadas em ordem e, assim
// que uma dá verdadeiro, o bloco dela é executado e o resto é
// ignorado. Então só um caminho é executado. Isso também deixa o
// programa mais eficiente, porque ele não fica testando condições
// sem necessidade.

// c) Programa corrigido com else-if:
//int idade = 25;

//if (idade >= 60) {
 //   printf("Idoso\n");
//} else if (idade >= 18) {
 //   printf("Adulto\n");
//} else if (idade >= 12) {
 //   printf("Jovem\n");
//} else {
//    printf("Criança\n");
//}

// A ordem importa: começo pela maior idade. Assim, quando chega no
// else if (idade >= 18), eu já sei que a idade é menor que 60, e
// por aí vai. Com idade = 25, agora só aparece "Adulto".
