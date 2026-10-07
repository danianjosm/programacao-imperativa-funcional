/* Questao 07. Contagem Progressiva em Tres Versoes (for, while, do-while) — Desenvolva tres
programas independentes (ou tres funcoes no mesmo arquivo) que mostrem na tela os numeros
inteiros de 0 a 100 em ordem crescente. A primeira versao deve utilizar obrigatoriamente o laco for,
a segunda versao a estrutura while, e a terceira versao a estrutura do-while. Em comentario ao final
do codigo, responda: qual das tres estruturas e a mais adequada para este caso e por que? */

#include <stdio.h>
#include <stdlib.h>

// versao 1: o for junta inicializacao, teste e incremento numa linha so
void contaFor()
{
    int i;
    for (i = 0; i <= 100; i++)
        printf("%d ", i);
    printf("\n");
}

// versao 2: no while a inicializacao vem antes e o incremento vai dentro do corpo
void contaWhile()
{
    int i = 0;
    while (i <= 100)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n");
}

// versao 3: o do-while executa o corpo primeiro e so depois testa
void contaDoWhile()
{
    int i = 0;
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n");
}

int main()
{
    printf("--- for ---\n");
    contaFor();
    printf("--- while ---\n");
    contaWhile();
    printf("--- do-while ---\n");
    contaDoWhile();

    system("PAUSE");
    return 0;
}

/* Resposta: o for eh o mais adequado aqui, porque a gente sabe desde o comeco quantas vezes
o laco vai rodar (de 0 ate 100). O for deixa inicio, condicao e incremento juntos no cabecalho,
entao fica mais facil de ler e mais dificil de esquecer o i++ e cair num laco infinito. */
