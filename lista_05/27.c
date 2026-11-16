/*Questão 27. Conversor de Temperaturas Modular — Crie as funções celsiusParaFahrenheit,
celsiusParaKelvin, fahrenheitParaCelsius e kelvinParaCelsius, todas com parâmetro e retorno
float. Na main(), apresente um menu, leia a escolha e a temperatura e exiba o valor convertido
com duas casas decimais usando a função correspondente.*/

// QUESTÃO 27

#include <stdio.h>

float celsiusParaFahrenheit(float celsius);
float celsiusParaKelvin(float celsius);
float fahrenheitParaCelsius(float fahrenheit);
float kelvinParaCelsius(float kelvin);

int main() {
    int opcao;
    float temperatura;

    printf("===== CONVERSOR DE TEMPERATURAS =====\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    switch (opcao) {
        case 1:
            printf("%.2f C = %.2f F\n", temperatura, celsiusParaFahrenheit(temperatura));
            break;
        case 2:
            printf("%.2f C = %.2f K\n", temperatura, celsiusParaKelvin(temperatura));
            break;
        case 3:
            printf("%.2f F = %.2f C\n", temperatura, fahrenheitParaCelsius(temperatura));
            break;
        case 4:
            printf("%.2f K = %.2f C\n", temperatura, kelvinParaCelsius(temperatura));
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}

float celsiusParaFahrenheit(float celsius) {
    return celsius * 9.0 / 5.0 + 32.0;
}

float celsiusParaKelvin(float celsius) {
    return celsius + 273.15;
}

float fahrenheitParaCelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

float kelvinParaCelsius(float kelvin) {
    return kelvin - 273.15;
}
