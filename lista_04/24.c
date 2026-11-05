// QUESTÃO 24

#include <stdio.h>

int main() {
    int a1, a2, a3;

    printf("Digite os tres angulos do triangulo: ");
    scanf("%d %d %d", &a1, &a2, &a3);

    // valida: soma igual a 180 e nenhum angulo zero ou negativo
    if (a1 + a2 + a3 == 180 && a1 > 0 && a2 > 0 && a3 > 0) {

        if (a1 == 90 || a2 == 90 || a3 == 90) {
            printf("Triangulo Retangulo\n");
        } else if (a1 > 90 || a2 > 90 || a3 > 90) {
            printf("Triangulo Obtusangulo\n");
        } else {
            printf("Triangulo Acutangulo\n");
        }

    } else {
        printf("Erro: os angulos fornecidos nao formam um triangulo!\n");
    }

    return 0;
}

// Primeiro eu checo se a soma dos ângulos dá exatamente 180. Também
// coloquei que cada ângulo precisa ser maior que zero, porque, por
// exemplo, 0 + 90 + 90 dá 180 mas não forma um triângulo de verdade.
//
// Se for válido, classifico com else-if:
//
// Retângulo: basta um dos ângulos ser 90, por isso usei o || (OU).
//
// Obtusângulo: basta um dos ângulos ser maior que 90, também com ||.
//
// Acutângulo: se não tem nenhum ângulo igual nem maior que 90, então
// os três são menores que 90, e ele cai no else.
//
// Como os ângulos são inteiros, a comparação == 180 funciona sem
// problema. Se fossem float, comparar com == poderia dar erro por
// causa das casas decimais.