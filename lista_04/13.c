/*Questão 13. Calculadora Aritmética e Científica com Menu switch — Crie um programa em C que
apresente um menu para o usuário escolher entre as operações: + (Soma), - (Subtração), *
(Multiplicação), / (Divisão) e ^ (Potenciação usando pow()). Em seguida, o programa lê os dois
operandos reais, realiza o cálculo selecionado via switch-case e exibe o resultado formatado. Caso a
operação seja divisão, valide para impedir divisão por zero.*/

// QUESTÃO 13

#include <stdio.h>
#include <math.h>

int main() {
    char operacao;
    float num1, num2, resultado;

    printf("===== CALCULADORA =====\n");
    printf("+ Soma\n");
    printf("- Subtracao\n");
    printf("* Multiplicacao\n");
    printf("/ Divisao\n");
    printf("^ Potenciacao\n");
    printf("Escolha a operacao: ");
    scanf(" %c", &operacao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '/':
            // nao deixa dividir por zero
            if (num2 == 0) {
                printf("Erro: nao e possivel dividir por zero!\n");
            } else {
                resultado = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, resultado);
            }
            break;
        case '^':
            resultado = pow(num1, num2);
            printf("%.2f ^ %.2f = %.2f\n", num1, num2, resultado);
            break;
        default:
            printf("Erro: operacao invalida!\n");
    }

    return 0;
}

// A operação é guardada numa variável char, e cada case compara com
// o símbolo entre aspas simples, tipo '+', porque é um caractere.
//
// No scanf(" %c") eu coloquei um espaço
