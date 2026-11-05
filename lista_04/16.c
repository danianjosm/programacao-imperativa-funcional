// QUESTÃO 16

#include <stdio.h>

int main() {
    float distancia, litros, consumo;

    printf("Digite a distancia percorrida (km): ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &litros);

    // nao deixa dividir por zero nem aceitar valores negativos
    if (litros <= 0 || distancia < 0) {
        printf("Erro: valores invalidos!\n");
        return 0;
    }

    consumo = distancia / litros;

    printf("Consumo: %.2f km/l\n", consumo);

    if (consumo < 8.0) {
        printf("Venda o carro!\n");
    } else if (consumo <= 14.0) {
        printf("Economico!\n");
    } else {
        printf("Super economico!\n");
    }

    return 0;
}

// O consumo em km/l é a distância dividida pelos litros, ou seja,
// quantos quilômetros o carro anda com 1 litro.
//
// Antes de calcular, eu valido os litros, porque se for 0 a conta
// vira uma divisão por zero. Também não faz sentido litros ou
// distância negativos.
//
// Na classificação usei else-if. Se o consumo não é menor que 8.0,
// já sei que é 8.0 ou mais, então no else if só preciso checar se
// é <= 14.0. Usei <= porque a tabela diz "entre 8.0 e 14.0", então
// o 14.0 conta como Econômico. O que passar disso cai no else,
// que é o Super econômico.