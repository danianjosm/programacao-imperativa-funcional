// QUESTÃO 26

#include <stdio.h>

int main() {
    int mes, ano, dias;

    printf("Digite o numero do mes (1 a 12): ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    switch (mes) {
        case 1:
            printf("Janeiro");
            dias = 31;
            break;
        case 2:
            printf("Fevereiro");
            // regra do ano bissexto (mesma da questao 8)
            if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
                dias = 29;
            } else {
                dias = 28;
            }
            break;
        case 3:
            printf("Marco");
            dias = 31;
            break;
        case 4:
            printf("Abril");
            dias = 30;
            break;
        case 5:
            printf("Maio");
            dias = 31;
            break;
        case 6:
            printf("Junho");
            dias = 30;
            break;
        case 7:
            printf("Julho");
            dias = 31;
            break;
        case 8:
            printf("Agosto");
            dias = 31;
            break;
        case 9:
            printf("Setembro");
            dias = 30;
            break;
        case 10:
            printf("Outubro");
            dias = 31;
            break;
        case 11:
            printf("Novembro");
            dias = 30;
            break;
        case 12:
            printf("Dezembro");
            dias = 31;
            break;
        default:
            printf("Erro: mes invalido!\n");
            return 0;
    }

    printf(" de %d tem %d dias\n", ano, dias);

    return 0;
}

// O switch faz duas coisas em cada case: imprime o nome do mês e
// guarda quantos dias ele tem na variável dias. Depois do switch,
// um printf só completa a frase, tipo:
// Fevereiro de 2024 tem 29 dias
//
// No case 2 (fevereiro) coloquei um if-else com a regra do ano
// bissexto, a mesma da questão 8: divisível por 400, ou divisível
// por 4 e não divisível por 100. Se for bissexto, fevereiro tem 29
// dias, se não, tem 28.
//
// Se o mês não for de 1 a 12, cai no default, mostra o erro e
// encerra com return 0, pra não imprimir a frase com dias sem valor.