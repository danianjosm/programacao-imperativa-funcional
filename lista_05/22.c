/*Questão 22. Biblioteca de Áreas com Arquivo de Cabeçalho — Crie um arquivo areas.h
contendo a constante PI e as macros A_CIRC(raio), A_RET(base,alt) e A_TRI(base,alt), todas
com parênteses de proteção. Em um programa principal que utilize #include "areas.h", leia os
dados do usuário e exiba as áreas calculadas.*/

// QUESTÃO 22

#include <stdio.h>
#include "areas.h"   // com aspas: procura primeiro na pasta do projeto

int main() {
    float raio, base_retangulo, altura_retangulo, base_triangulo, altura_triangulo;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    printf("Digite a base do retangulo: ");
    scanf("%f", &base_retangulo);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura_retangulo);

    printf("Digite a base do triangulo: ");
    scanf("%f", &base_triangulo);
    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura_triangulo);

    printf("\nArea do circulo:   %.2f\n", A_CIRC(raio));
    printf("Area do retangulo: %.2f\n", A_RET(base_retangulo, altura_retangulo));
    printf("Area do triangulo: %.2f\n", A_TRI(base_triangulo, altura_triangulo));

    return 0;
}

// O areas.h precisa estar na mesma pasta que este arquivo.
// Pra compilar: gcc 22.c -o 22
