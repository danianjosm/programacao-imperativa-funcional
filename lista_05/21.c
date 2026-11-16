/*Questão 21. Macros Utilitárias — Defina as macros SQR(x), MAX(a,b) e MIN(a,b) com
parênteses de proteção. Na main(), leia dois inteiros e exiba o quadrado de cada um, o maior
e o menor, usando apenas as macros.*/

// QUESTÃO 21

#include <stdio.h>

// parenteses em volta de cada argumento E em volta da expressao inteira
#define SQR(x)    ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main() {
    int primeiro_numero, segundo_numero;

    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiro_numero);
    printf("Digite o segundo numero: ");
    scanf("%d", &segundo_numero);

    printf("Quadrado de %d: %d\n", primeiro_numero, SQR(primeiro_numero));
    printf("Quadrado de %d: %d\n", segundo_numero, SQR(segundo_numero));
    printf("Maior: %d\n", MAX(primeiro_numero, segundo_numero));
    printf("Menor: %d\n", MIN(primeiro_numero, segundo_numero));

    return 0;
}

// O ? : e um if em uma linha so: (condicao) ? valor_se_verdadeiro : valor_se_falso
