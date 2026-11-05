// QUESTÃO 27

#include <stdio.h>

int main() {
    int horas;
    float valor;

    printf("Digite quantas horas o carro ficou: ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Erro: numero de horas invalido!\n");
        return 0;
    }

    if (horas <= 2) {
        valor = horas * 2.00;
    } else if (horas <= 4) {
        valor = 2 * 2.00 + (horas - 2) * 2.50;
    } else {
        valor = 2 * 2.00 + 2 * 2.50 + (horas - 4) * 3.00;
    }

    printf("Tempo total: %d hora(s)\n", horas);
    printf("Valor a pagar: R$ %.2f\n", valor);

    return 0;
}

// Como a cobrança é progressiva, cada hora é cobrada pelo preço da
// faixa em que ela está, e não todas as horas pelo mesmo preço.
//
// Até 2 horas: é só horas vezes 2,00.
//
// De 3 a 4 horas: as 2 primeiras horas custam 2,00 cada (dá 4,00) e
// as horas que passaram de 2 custam 2,50 cada. Por isso o
// (horas - 2), que conta só as horas dessa segunda faixa.
//
// 5 horas ou mais: as 2 primeiras custam 4,00, a 3ª e a 4ª custam
// 5,00 (2 x 2,50), e as horas que passaram de 4 custam 3,00 cada,
// por isso o (horas - 4).
//
// Exemplo com 6 horas:
// 2 x 2,00 = 4,00
// 2 x 2,50 = 5,00
// 2 x 3,00 = 6,00
// Total = R$ 15,00
//
// Usei else-if começando pelas menores quantidades de horas, então
// cada faixa já sabe que as anteriores não se aplicam.