// QUESTÃO 22

#include <stdio.h>

int main() {
    float valor, aliquota, imposto, precoFinal;
    int estado;

    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor);

    printf("Estado de destino:\n");
    printf("1 - MG\n");
    printf("2 - SP\n");
    printf("3 - RJ\n");
    printf("4 - MS\n");
    printf("Escolha: ");
    scanf("%d", &estado);

    switch (estado) {
        case 1:
            aliquota = 0.07;
            break;
        case 2:
            aliquota = 0.12;
            break;
        case 3:
            aliquota = 0.15;
            break;
        case 4:
            aliquota = 0.08;
            break;
        default:
            printf("Erro: codigo de estado invalido!\n");
            return 0;
    }

    imposto = valor * aliquota;
    precoFinal = valor + imposto;

    printf("Imposto: R$ %.2f\n", imposto);
    printf("Preco final: R$ %.2f\n", precoFinal);

    return 0;
}

// Escolhi ler o estado como número inteiro, porque fica mais fácil
// de usar no switch.
//
// Cada case só guarda a alíquota do estado (7% = 0.07, por exemplo).
// Depois do switch faço a conta uma vez só: o imposto é o valor vezes
// a alíquota, e o preço final é o valor mais o imposto. Assim não
// preciso repetir as mesmas contas em todos os cases.
//
// Se o código não for de 1 a 4, cai no default, mostra a mensagem de
// erro e o programa encerra com return 0, pra não calcular com uma
// alíquota sem valor.