/*Questão 13. Calculadora com Quatro Operações — Implemente o desafio visto em aula: crie
as funções soma, subtrai, multiplica e divide, todas recebendo dois valores float e retornando
float. A main() deve exibir um menu, ler a opção e os dois operandos e chamar a função
correspondente. Na divisão, valide a divisão por zero antes de chamar a função.*/

// QUESTÃO 13

#include <stdio.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main() {
    int opcao;
    float primeiro_valor, segundo_valor;

    printf("===== CALCULADORA =====\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro valor: ");
    scanf("%f", &primeiro_valor);
    printf("Digite o segundo valor: ");
    scanf("%f", &segundo_valor);

    switch (opcao) {
        case 1:
            printf("Resultado: %.2f\n", soma(primeiro_valor, segundo_valor));
            break;
        case 2:
            printf("Resultado: %.2f\n", subtrai(primeiro_valor, segundo_valor));
            break;
        case 3:
            printf("Resultado: %.2f\n", multiplica(primeiro_valor, segundo_valor));
            break;
        case 4:
            // a validacao e feita ANTES de chamar a funcao, como a questao pede
            if (segundo_valor == 0) {
                printf("Erro: nao da pra dividir por zero\n");
            } else {
                printf("Resultado: %.2f\n", divide(primeiro_valor, segundo_valor));
            }
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}

float soma(float a, float b) {
    return a + b;
}

float subtrai(float a, float b) {
    return a - b;
}

float multiplica(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
