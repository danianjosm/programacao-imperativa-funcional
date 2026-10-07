/* Questao 27. Simulador de Caixa Eletronico (Decomposicao de Cedulas) — Escreva um programa que
simule o saque de um caixa eletronico. O usuario informa o valor do saque em reais (numero inteiro
positivo). O programa deve calcular e exibir a menor quantidade de cedulas de R$ 100, R$ 50, R$ 20,
R$ 10, R$ 5 e R$ 2 necessarias para compor o valor. Utilize lacos de repeticao para efetuar as
subtracoes sucessivas. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, resto;
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0;

    printf("Valor do saque: R$ ");
    scanf("%d", &valor);

    // 1 e 3 nao tem como montar com essas cedulas
    if (valor <= 0 || valor == 1 || valor == 3)
    {
        printf("Valor invalido: nao da pra sacar R$ %d com essas cedulas.\n", valor);
    }
    else
    {
        resto = valor;

        // cuidado: se o valor for impar, so a nota de 5 resolve a parte impar.
        // ex.: R$ 13 -> se pegasse 10 primeiro, sobrava 3 e travava. por isso tira o 5 antes.
        if (resto % 2 == 1)
        {
            resto -= 5;
            n5++;
        }

        // daqui pra baixo o resto eh par, entao pegar sempre a maior cedula funciona
        while (resto >= 100)
        {
            resto -= 100;
            n100++;
        }
        while (resto >= 50)
        {
            resto -= 50;
            n50++;
        }
        while (resto >= 20)
        {
            resto -= 20;
            n20++;
        }
        while (resto >= 10)
        {
            resto -= 10;
            n10++;
        }
        while (resto >= 2)
        {
            resto -= 2;
            n2++;
        }

        printf("Cedulas para R$ %d:\n", valor);
        printf("R$ 100: %d\n", n100);
        printf("R$  50: %d\n", n50);
        printf("R$  20: %d\n", n20);
        printf("R$  10: %d\n", n10);
        printf("R$   5: %d\n", n5);
        printf("R$   2: %d\n", n2);
    }

    system("PAUSE");
    return 0;
}
