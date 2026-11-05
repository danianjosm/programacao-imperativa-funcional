// QUESTÃO 19

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    // condicao de existencia: cada lado menor que a soma dos outros dois
    if (a < b + c && b < a + c && c < a + b) {

        if (a == b && b == c) {
            printf("Triangulo Equilatero\n");
        } else if (a == b || a == c || b == c) {
            printf("Triangulo Isosceles\n");
        } else {
            printf("Triangulo Escaleno\n");
        }

    } else {
        printf("Erro: Os lados fornecidos nao formam um triangulo!\n");
    }

    return 0;
}

// Primeiro eu checo se os lados formam um triângulo. As três
// condições precisam ser verdadeiras ao mesmo tempo, por isso usei
// o && entre elas. Se alguma falhar, o programa vai direto pro else
// e mostra a mensagem de erro.
//
// Essa condição também já barra lados negativos ou iguais a zero,
// então não precisei fazer uma validação separada pra isso.
//
// Se for um triângulo válido, aí sim eu classifico, usando um if
// dentro do outro:
//
// Equilátero: a == b e b == c. Se a é igual a b e b é igual a c,
// então os três são iguais.
//
// Isósceles: basta um par de lados iguais, por isso usei o || (OU)
// entre as três comparações possíveis.
//
// Escaleno: se não caiu em nenhum dos dois anteriores, os três lados
// são diferentes, então fica no else.
//
// A ordem importa: testo o equilátero antes do isósceles, porque um
// triângulo equilátero também tem dois lados iguais. Se eu testasse
// o isósceles primeiro, o equilátero seria classificado errado.