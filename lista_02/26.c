/* Questao 26. Orcamento para Cercamento Perimetral de Terrenos — Desenvolva um programa
para cercamento de terrenos agricolas. O programa deve ler do teclado: a) O comprimento e a
largura do terreno em metros; b) O preco unitario do metro de arame farpado (em reais). Sabendo
que o cercamento de seguranca exige exatamente 3 fios de arame esticados ao longo do
perimetro do terreno, calcule e mostre na tela quantos metros de arame farpado devem ser
comprados e o custo total do cercamento. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float comprimento, largura, precoMetro;
    float perimetro, metrosArame, custoTotal;

    printf("Digite o comprimento e a largura do terreno (em metros): ");
    scanf("%f %f", &comprimento, &largura);
    printf("Digite o preco do metro do arame farpado: ");
    scanf("%f", &precoMetro);

    perimetro = 2 * (comprimento + largura);
    metrosArame = perimetro * 3; // 3 fios de arame ao longo de todo o perimetro
    custoTotal = metrosArame * precoMetro;

    printf("Metros de arame necessarios: %.2f\n", metrosArame);
    printf("Custo total do cercamento: R$ %.2f\n", custoTotal);

    system("PAUSE");
    return 0;
}
