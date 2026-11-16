/*Questão 18. Potência com Recursão — Implemente a função recursiva long potencia(int
base, int expoente), que calcule base elevado ao expoente (inteiro não negativo) sem usar
pow(). Na main(), leia a base e o expoente, valide com if que o expoente não é negativo e
exiba o resultado. Indique em comentário o caso base e o passo recursivo.*/

// QUESTÃO 18

#include <stdio.h>

long potencia(int base, int expoente);

int main() {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    if (expoente < 0) {
        printf("O expoente nao pode ser negativo\n");
    } else {
        printf("%d elevado a %d = %ld\n", base, expoente, potencia(base, expoente));
    }

    return 0;
}

long potencia(int base, int expoente) {
    // CASO BASE: qualquer numero elevado a 0 da 1
    if (expoente == 0) {
        return 1;
    }
    // PASSO RECURSIVO: base^expoente = base * base^(expoente - 1)
    return base * potencia(base, expoente - 1);
}

// Exemplo: potencia(2, 3) = 2 * potencia(2, 2) = 2 * 2 * potencia(2, 1)
//        = 2 * 2 * 2 * potencia(2, 0) = 2 * 2 * 2 * 1 = 8
