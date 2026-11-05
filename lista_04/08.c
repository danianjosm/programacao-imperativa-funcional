/*Questão 08. Verificação de Ano Bissexto — Desenvolva um programa em C que solicite ao usuário
um ano (número inteiro positivo) e determine se esse ano é bissexto ou não. Regra: Um ano é bissexto
se for divisível por 400 OU se for divisível por 4 e NÃO for divisível por 100. Exiba uma mensagem
clara no console confirmando o resultado.*/

// QUESTÃO 08

#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    // bissexto se: divisivel por 400 OU (divisivel por 4 E nao divisivel por 100)
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("O ano %d e bissexto!\n", ano);
    } else {
        printf("O ano %d nao e bissexto.\n", ano);
    }

    return 0;
}

// O operador % devolve o resto da divisão. Então, se ano % 4 == 0,
// quer dizer que o ano é divisível por 4 (o resto é zero).
//
// Coloquei parênteses em volta de cada parte pra deixar claro a
// ordem da regra e o código ficar mais fácil de ler.
//
// Alguns exemplos pra testar:
// 2024 -> bissexto (divisível por 4 e não por 100)
// 1900 -> não é bissexto (divisível por 100, mas não por 400)
// 2000 -> bissexto (divisível por 400)
// 2023 -> não é bissexto (não é divisível por 4)