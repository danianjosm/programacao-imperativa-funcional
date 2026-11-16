/*Questão 15. Média Ponderada e Situação — Escreva a função float mediaPonderada(float n1,
float n2, float n3), com pesos 2, 3 e 5, e o procedimento void exibeSituacao(float media), que
imprima Aprovado se a média for maior ou igual a 5.0, Em Recuperação se estiver entre 3.0 e
4.9, e Reprovado nos demais casos. Chame ambas na main().*/

// QUESTÃO 15

#include <stdio.h>

float mediaPonderada(float n1, float n2, float n3);
void exibeSituacao(float media);

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite a nota 1 (peso 2): ");
    scanf("%f", &nota1);
    printf("Digite a nota 2 (peso 3): ");
    scanf("%f", &nota2);
    printf("Digite a nota 3 (peso 5): ");
    scanf("%f", &nota3);

    media = mediaPonderada(nota1, nota2, nota3);
    printf("Media ponderada: %.2f\n", media);
    exibeSituacao(media);

    return 0;
}

float mediaPonderada(float n1, float n2, float n3) {
    // soma das notas vezes os pesos, dividida pela soma dos pesos (2 + 3 + 5 = 10)
    return (n1 * 2 + n2 * 3 + n3 * 5) / 10;
}

void exibeSituacao(float media) {
    if (media >= 5.0) {
        printf("Aprovado\n");
    } else if (media >= 3.0) {
        // uso >= 3.0 (e nao <= 4.9) pra uma media tipo 4.95 nao cair em Reprovado
        printf("Em Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }
}
