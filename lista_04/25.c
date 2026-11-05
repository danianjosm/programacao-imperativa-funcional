// QUESTÃO 25

#include <stdio.h>

int main() {
    int total, entregue, troco, resto;
    int n100, n50, n20, n10, n5, n2;

    printf("Digite o valor total a pagar: R$ ");
    scanf("%d", &total);

    printf("Digite o valor entregue pelo cliente: R$ ");
    scanf("%d", &entregue);

    if (total <= 0 || entregue <= 0) {
        printf("Erro: os valores precisam ser positivos!\n");
        return 0;
    }

    if (entregue < total) {
        printf("Erro: valor entregue insuficiente!\n");
        return 0;
    }

    troco = entregue - total;
    printf("Troco: R$ %d\n", troco);

    resto = troco;

    // se o troco for impar, uso uma nota de 5 pra ele virar par
    n5 = 0;
    if (resto % 2 != 0 && resto >= 5) {
        n5 = 1;
        resto = resto - 5;
    }

    n100 = resto / 100;
    resto = resto % 100;

    n50 = resto / 50;
    resto = resto % 50;

    n20 = resto / 20;
    resto = resto % 20;

    n10 = resto / 10;
    resto = resto % 10;

    n2 = resto / 2;
    resto = resto % 2;

    // so mostra as notas que foram usadas
    if (n100 > 0) printf("%d nota(s) de R$ 100\n", n100);
    if (n50 > 0)  printf("%d nota(s) de R$ 50\n", n50);
    if (n20 > 0)  printf("%d nota(s) de R$ 20\n", n20);
    if (n10 > 0)  printf("%d nota(s) de R$ 10\n", n10);
    if (n5 > 0)   printf("%d nota(s) de R$ 5\n", n5);
    if (n2 > 0)   printf("%d nota(s) de R$ 2\n", n2);

    if (resto > 0) {
        printf("Sobrou R$ %d que nao da pra pagar com notas\n", resto);
    }

    return 0;
}

// Pra descobrir quantas notas de cada valor usar, eu divido o troco
// pelo valor da nota (/ dá quantas cabem) e depois pego o resto (%)
// pra continuar com o que sobrou. Vou da maior