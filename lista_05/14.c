/*Questão 14. Soma dos Dígitos com Recursão — Crie uma função recursiva int
somaDigitos(int n) que retorne a soma dos dígitos de um inteiro positivo (exemplo: 1234
resulta em 10). Dica: use os operadores % e / para separar o último dígito. Na main(), leia o
número e exiba o resultado. Indique em comentário o caso base e o passo recursivo.*/

// QUESTÃO 14

#include <stdio.h>

int somaDigitos(int n);

int main() {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("O numero precisa ser positivo\n");
    } else {
        printf("A soma dos digitos de %d e %d\n", numero, somaDigitos(numero));
    }

    return 0;
}

int somaDigitos(int n) {
    // CASO BASE: quando nao sobra mais digito (n == 0), a soma e 0
    if (n == 0) {
        return 0;
    }
    // PASSO RECURSIVO: pega o ultimo digito (n % 10) e soma com
    // a soma dos digitos que sobraram (n / 10 tira o ultimo digito)
    return (n % 10) + somaDigitos(n / 10);
}

// Exemplo com 1234:
// somaDigitos(1234) = 4 + somaDigitos(123)
// somaDigitos(123)  = 3 + somaDigitos(12)
// somaDigitos(12)   = 2 + somaDigitos(1)
// somaDigitos(1)    = 1 + somaDigitos(0)
// somaDigitos(0)    = 0  -> caso base
// voltando: 1 + 0 = 1, 2 + 1 = 3, 3 + 3 = 6, 4 + 6 = 10
