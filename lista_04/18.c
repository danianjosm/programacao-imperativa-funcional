// QUESTÃO 18

#include <stdio.h>

int main() {
    int opcao;
    float temperatura, convertida;

    printf("===== CONVERSOR DE TEMPERATURA =====\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temperatura);
            convertida = temperatura * 1.8 + 32;
            printf("%.2f C = %.2f F\n", temperatura, convertida);
            break;

        case 2:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temperatura);
            convertida = temperatura + 273.15;
            printf("%.2f C = %.2f K\n", temperatura, convertida);
            break;

        case 3:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temperatura);
            convertida = (temperatura - 32) / 1.8;
            printf("%.2f F = %.2f C\n", temperatura, convertida);
            break;

        case 4:
            printf("Digite a temperatura em Kelvin: ");
            scanf("%f", &temperatura);
            convertida = temperatura - 273.15;
            printf("%.2f K = %.2f C\n", temperatura, convertida);
            break;

        default:
            printf("Erro: opcao invalida!\n");
    }

    return 0;
}

// Primeiro o programa mostra o menu e lê a opção. Depois, dentro de
// cada case, ele pede a temperatura. Coloquei a leitura dentro do
// case pra mensagem já dizer a escala certa (Celsius, Fahrenheit ou
// Kelvin).
//
// Cada case usa a fórmula da questão. Na opção 3, os parênteses em
// (temperatura - 32) são importantes: sem eles, o C faria a divisão
// primeiro, porque divisão tem prioridade sobre subtração.
//
// O %.2f no printf mostra o resultado com duas casas decimais, como
// a questão pede.
//
// Se o usuário digitar uma opção que não existe, cai no default e
// aparece a mensagem de erro.