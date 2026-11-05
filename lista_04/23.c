// QUESTÃO 23

#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("Digite a data (dia mes ano): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    // valida o mes antes de tudo
    if (mes < 1 || mes > 12) {
        printf("Erro: mes invalido!\n");
        return 0;
    }

    printf("%d de ", dia);

    switch (mes) {
        case 1:
            printf("janeiro");
            break;
        case 2:
            printf("fevereiro");
            break;
        case 3:
            printf("marco");
            break;
        case 4:
            printf("abril");
            break;
        case 5:
            printf("maio");
            break;
        case 6:
            printf("junho");
            break;
        case 7:
            printf("julho");
            break;
        case 8:
            printf("agosto");
            break;
        case 9:
            printf("setembro");
            break;
        case 10:
            printf("outubro");
            break;
        case 11:
            printf("novembro");
            break;
        case 12:
            printf("dezembro");
            break;
    }

    printf(" de %d\n", ano);

    return 0;
}

// O scanf lê os três números de uma vez, separados por espaço, do
// jeito do exemplo (25 12 2026).
//
// Antes do switch eu valido o mês com um if: se for menor que 1 ou
// maior que 12, mostra erro e encerra. Por isso não precisei de
// default no switch, já que só chega nele um mês válido.
//
// Pra montar a frase, dividi o printf em três partes: primeiro
// imprimo o dia e o "de", depois o switch imprime o nome do mês, e
// no final imprimo o "de" e o ano. Como nenhum desses printf tem \n
// até o último, tudo aparece na mesma linha:
// 25 de dezembro de 2026