// QUESTÃO 20

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("Digite o coeficiente a: ");
    scanf("%f", &a);

    // garante que a seja diferente de zero
    if (a == 0) {
        printf("Erro: o coeficiente a nao pode ser zero!\n");
        return 0;
    }

    printf("Digite o coeficiente b: ");
    scanf("%f", &b);

    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    printf("Delta = %.2f\n", delta);

    if (delta < 0) {
        printf("A equacao nao possui raizes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Raiz unica: x = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raizes reais distintas:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    return 0;
}

// Antes de tudo eu checo se o a é zero, porque se for, a equação
// nem é do segundo grau (o ax² some) e a fórmula teria uma divisão
// por zero. Nesse caso o programa já mostra o erro e encerra.
//
// O delta é b ao quadrado menos 4ac. Pra fazer b², escrevi b * b,
// que é mais simples do que usar o pow.
//
// Depois uso else-if pra ver qual dos três casos acontece:
// delta negativo: não tem raiz real, porque não existe raiz
// quadrada de número negativo nos reais.
// delta igual a zero: só uma raiz, -b / (2a).
// delta positivo: duas raízes, uma somando e outra subtraindo a raiz
// de delta.
//
// Os parênteses em (2 * a) são importantes. Sem eles, o C dividiria
// por 2 e depois multiplicaria por a, o que daria um resultado
// errado.
//
// Como uso o sqrt, incluí a math.h (e pode precisar do -lm na hora
// de compilar).