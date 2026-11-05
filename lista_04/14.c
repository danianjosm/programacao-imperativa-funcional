// QUESTÃO 14

#include <stdio.h>

int main() {
    float nota;
    int faltas;
    char conceito;

    printf("Digite a nota final: ");
    scanf("%f", &nota);

    printf("Digite o numero de faltas: ");
    scanf("%d", &faltas);

    // confere se os valores fazem sentido antes de classificar
    if (nota < 0 || nota > 10 || faltas < 0) {
        printf("Erro: nota ou faltas invalidas!\n");
        return 0;
    }

    if (nota >= 9.0) {
        if (faltas <= 20) {
            conceito = 'A';
        } else {
            conceito = 'B';
        }
    } else if (nota >= 7.5) {
        if (faltas <= 20) {
            conceito = 'B';
        } else {
            conceito = 'C';
        }
    } else if (nota >= 5.0) {
        if (faltas <= 20) {
            conceito = 'C';
        } else {
            conceito = 'D';
        }
    } else if (nota >= 4.0) {
        if (faltas <= 20) {
            conceito = 'D';
        } else {
            conceito = 'E';
        }
    } else {
        // nota abaixo de 4.0 e sempre E, nao importa as faltas
        conceito = 'E';
    }

    printf("Conceito: %c\n", conceito);

    return 0;
}

// Primeiro eu descubro em qual faixa de nota o aluno está, usando
// else-if e começando pela maior nota. Depois, dentro de cada faixa,
// tem um if-else menor que olha as faltas: até 20 (<= 20) fica com
// o conceito melhor, acima de 20 cai um conceito.
//
// Isso de colocar um if dentro do outro se chama if aninhado.
//
// Na última faixa (nota abaixo de 4.0) não precisei olhar as faltas,
// porque a tabela diz que é sempre E.
//
// Também usei >= em vez de testar intervalos tipo "7.5 a 8.9", pra
// nenhuma nota ficar sem conceito (uma nota 8.95, por exemplo).
//
// Antes de tudo, coloquei uma validação pra não aceitar nota menor
// que 0, maior que 10 ou faltas negativas.